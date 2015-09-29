#ifndef IMPL__H_
#define IMPL__H_

#include "interface.h"

class Impl : public Interface
{
    public:
        Impl();
        virtual ~Impl();
        virtual void foo();

    private:
        int x_;
};

#endif // IMPL__H_
