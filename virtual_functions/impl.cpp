#include "impl.h"
#include <cstdlib>
#include <cstdio>

Impl::Impl()
    : Interface()
    , x_(rand())
{
}

Impl::~Impl()
{
}

void Impl::foo() {
    printf("x = %d\n", x_);
}
