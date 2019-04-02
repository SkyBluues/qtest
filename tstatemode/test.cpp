#include "context.h"
#include "concrete_state1.h"
#include "concrete_state2.h"
#include "state.h"

int main() {
    namespace tsm = tstatemode;

    tsm::State* state1 = new tsm::ConcreteState1();
    tsm::State* state2 = new tsm::ConcreteState2();
    tsm::Context context(state1);

    context.Display();

    context.ChangeState(state2);
    context.Display();

    context.ChangeState(state1);
    context.Display();

    delete state1;
    delete state2;

    return 0;
}