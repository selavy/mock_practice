#ifndef IMPL_T__H_
#define IMPL_T__H_

#include "interface.h"

class Impl_T : public Interface
{
    public:
        Impl_T();
        virtual ~Impl_T();
        virtual void foo();
};

#endif // IMPL_T__H_
