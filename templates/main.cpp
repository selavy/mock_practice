/** Templates
 *
 *  Simplest way to mock.  Use abstract base class
 *  and have a concrete implementation and a test implementation.
 *
 *  Pros:
 *      + faster? (might cause code bloat and negative this)
 *  Cons:
 *      + increases compile time
 *      + not clearly defined interface - user has to trace down what functions to implement
 *      + have to inline client code
 */
#include "impl.h"
#include "user.h"
#include <cstdlib>
#include <ctime>

int main(int argc, char **argv)
{
    srand(time(0));
    Impl i;
    User<Impl> user(i);
    user.execute();
    return 0;
}
