#ifndef TSTATEMODE_CONCRETE_STATE2_H_
#define TSTATEMODE_CONCRETE_STATE2_H_

#include "state.h"

namespace tstatemode {

class ConcreteState2: public State {
public:
    virtual ~ConcreteState2();
    virtual void Handle();
};

} // namespace tstatemode

#endif // TSTATEMODE_CONCRETE_STATE2_H_