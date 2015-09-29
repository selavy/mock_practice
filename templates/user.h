#ifndef USER__H_
#define USER__H_

#include <cstdio>

template <class T>
class User {
    public:
        User(T& i)
            : i_(i)
        {
        }

        void execute()
        {
            printf("User::execute(), callling foo()...\n");
            i_.foo();
            printf("User::execute(), after foo()\n");
        }

    private:
        T& i_;
};

#endif // USER__H_
