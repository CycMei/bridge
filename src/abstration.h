#ifndef ABSTRATION_H
#define ABSTRATION_H

#include <memory>


class Abstrationimpl;

class Abstration {

protected:
    std::shared_ptr<Abstrationimpl> m_impl;

public:
    Abstration(const decltype(m_impl) &impl);
    virtual ~Abstration();

public:
    virtual void Operation() = 0;

};




class DAbstration : public Abstration {

public:
    explict DAbstration(const std::shared_ptr<Abstrationimpl> &impl);
    ~DAbstration();

public:
    void Operation() override;
};



#endif //ABSTRATION_H