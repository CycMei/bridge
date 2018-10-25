#ifndef ABSTRATIONIMPL_H
#define ABSTRATIONIMPL_H


class Abstrationimpl {

public:
    Abstrationimpl();
    virtual ~Abstrationimpl();

public:

    virtual void Operation() = 0;

};



class AbstrationimplA : public Abstrationimpl {

public:
    AbstrationimplA();
    ~AbstrationimplA();

public:
    void Operation() override;

};

class AbstrationimplB : public Abstrationimpl {

public:
    AbstrationimplB();
    ~AbstrationimplB();

public:
    void Operation() override;

};


#endif //ABSTRATIONIMPL_H
