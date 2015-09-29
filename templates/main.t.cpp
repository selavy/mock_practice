#include "user.h"
#include "impl.t.h"
#include <cstdlib>
#include <ctime>

int main(int argc, char **argv)
{
    srand(time(0));
    Impl_T i;
    User<Impl_T> user(i);
    user.execute();
    return 0;
}
