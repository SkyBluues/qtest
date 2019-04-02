#ifndef TSTATEMODE_CONCRETE_STATE1_H_
#define TSTATEMODE_CONCRETE_STATE1_H_

#include "state.h"

namespace tstatemode {

class ConcreteState1: public State {
public:
    virtual ~ConcreteState1();
    virtual void Handle();
};

} // namespace tstatemode

#endif // TSTATEMODE_CONCRETE_STATE1_H_