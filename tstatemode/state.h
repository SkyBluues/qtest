#ifndef TSTATEMODE_STATE_H_
#define TSTATEMODE_STATE_H_

namespace tstatemode {

class State {
public:
    virtual ~State() { };
    virtual void Handle() = 0;
};

} // namespace tstatemode

#endif // TSTATEMODE_STATE_H_