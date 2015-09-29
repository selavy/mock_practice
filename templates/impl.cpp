#include "impl.h"
#include <cstdlib>
#include <cstdio>

Impl::Impl()
    : x_(rand())
{
}

void Impl::foo() {
    printf("x = %d\n", x_);
}
