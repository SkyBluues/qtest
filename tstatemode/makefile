EXE_NAME:=runner
SRC_PATH:=.
BUILD_PATH:=./build
BIN_PATH:=$(BUILD_PATH)/bin
EXE:=$(BIN_PATH)/$(EXE_NAME)

SOURCES:=$(shell find $(SRC_PATH) -name '*.cpp')
OBJS:=$(addprefix $(BUILD_PATH)/,$(SOURCES:%.cpp=%.o))
DEPS:=$(addprefix $(BUILD_PATH)/,$(SOURCES:%.cpp=%.d))
OBJS_DIR:=$(addprefix $(BUILD_PATH)/,$(shell dirname $(SOURCES) | sort | uniq))

LIBS:=
CPPFLAGS+= -g -Wall -std=c++11
CC:=g++

all:$(EXE)
$(shell mkdir -p $(OBJS_DIR))
$(shell mkdir -p $(BIN_PATH))
-include $(DEPS)

$(EXE): $(OBJS)
	$(CC) $(CPPFLAGS) -o $@ $^ $(LIBS)

$(OBJS): $(BUILD_PATH)/%.o: $(SRC_PATH)/%.cpp
	$(CC) -o $@ $(CPPFLAGS) -c $<

$(DEPS): $(BUILD_PATH)/%.d: $(SRC_PATH)/%.cpp
	@set -e; rm -f $@; \
	$(CC) -MM $(CPPFLAGS) $< > $@.$$$$; \
	sed 's,.*\.o[ :]*,$(patsubst %.d,%.o,$@) $@ : ,g' < $@.$$$$ > $@; \
	rm -f $@.$$$$

.PHONY: clean
clean:
	rm -rf ./build

.PHONY: test
test:
	@echo $(DEPS)
	@echo $(OBJS)
	@echo $(SOURCES)
	@echo $(SRC_PATH)
	@echo $(BUILD_PATH)
	@echo $(OBJS_DIR)

