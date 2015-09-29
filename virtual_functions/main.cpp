/** Virtual Functions
 *
 *  Simplest way to mock.  Use abstract base class
 *  and have a concrete implementation and a test implementation.
 *
 *  Pros:
 *      + Easy
 *      + Clear interface in abstract base class
 *  Cons:
 *      + Possibly slow? (depends on if link-time optimization inlines)
 */
#include "impl.h"
#include "user.h"
#include <cstdlib>
#include <ctime>

int main(int argc, char **argv)
{
    srand(time(0));
    Impl i;
    User user(i);
    user.execute();
    return 0;
}
