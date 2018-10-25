#include "abstration.h"
#include "abstrationimpl.h"



int main() {

    Abstration *da = new DAbstration(new AbstrationimplA{});
    da->Operation();
    delete da;


    Abstration *dad = new DAbstration(new AbstrationimplB{});
    dad->Operation();
    delete dad;

    return 0;
}