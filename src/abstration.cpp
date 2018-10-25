#include "abstration.h"
#include "abstrationimpl.h"


Abstration::Abstration(const decltype(m_impl) &impl) : m_impl{m_impl} {

}


Abstration::~Abstration() {

}


void Abstration::Operation() {

}








DAbstration::DAbstration(const std::shared_ptr<Abstrationimpl> &impl) : Abstration{impl} {

}



DAbstration::~DAbstration() {


}


void DAbstration::Operation() {
    m_impl->Operation();
}