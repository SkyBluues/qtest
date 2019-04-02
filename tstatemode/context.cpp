#include "context.h"

namespace tstatemode {

bool Context::ChangeState(State* state) {
    if(nullptr != state) state_ = state;
    return true;
}

void Context::Display() {
    if(nullptr != state_) 
        state_->Handle();
}

} // namespace tstatemode