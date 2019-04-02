#ifndef TSTATEMODE_CONTEXT_H_
#define TSTATEMODE_CONTEXT_H_

#include "state.h"

namespace tstatemode {

class Context {
public:
    Context(State* state): state_(state) {}
    bool ChangeState(State* state);
    void Display();
private:
    State* state_;
};

} // namespace tstatemode

#endif // TSTATEMODE_CONTEXT_H_