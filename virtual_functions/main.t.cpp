#include "impl.t.h"
#include <cstdlib>
#include <ctime>

int main(int argc, char **argv)
{
    srand(time(0));
    Interface* i = new Impl_T();
    i->foo();
    return 0;
}
