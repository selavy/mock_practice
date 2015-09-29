#ifndef USER__H_
#define USER__H_

class Impl;

class User {
    public:
        User(Impl& i);

        void execute();

    private:
        Impl& i_;
};

#endif // USER__H_
