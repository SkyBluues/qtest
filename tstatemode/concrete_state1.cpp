#include "concrete_state1.h"

#include <stdio.h>

namespace tstatemode {

ConcreteState1::~ConcreteState1() { }

void ConcreteState1::Handle() {
    printf("ConcreteState1 %s\n", __FUNCTION__);
}

} // namespace tstatemode