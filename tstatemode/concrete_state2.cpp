#include "concrete_state2.h"

#include <stdio.h>

namespace tstatemode {

ConcreteState2::~ConcreteState2() { }

void ConcreteState2::Handle() {
    printf("ConcreteState2 %s\n", __FUNCTION__);
}

} // namespace tstatemode