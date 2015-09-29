/** Separate Header
 *
 *  Pros:
 *      + Easy
 *      + Clear interface
 *      + Seperates implementation from use - changes in implementation won't need recompile
 *      + Don't need to include implementation header of user (can forward declare) - goes with above point
 *      + fast runtime
 *  Cons:
 *      + Most mock every function
 *      + Have to keep implementation files in separate directory from test impl
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
