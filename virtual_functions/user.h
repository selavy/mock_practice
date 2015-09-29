#ifndef USER__H_
#define USER__H_

//#include "interface.h"
class Interface;

class User {
    public:
        User(Interface& i);

        void execute();

    private:
        Interface& i_;
};

#endif // USER__H_
