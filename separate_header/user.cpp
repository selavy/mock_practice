#include "user.h"
#include "impl.h"
#include <cstdio>

User::User(Impl& i)
    : i_(i)
{
}

void User::execute()
{
    printf("User::execute(), calling foo()...\n");
    i_.foo();
    printf("User::execute(), after foo()\n");
}
