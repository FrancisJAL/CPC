//
// Created by aulas on 23/09/2024.
//

#include "TPID.h"
#include <iostream>

TPID::TPID(){   //Constructor
    kp=0;
    td=0;
}

void TPID::print(){
    std::cout<<kp<<std::endl;
}

int TPID::getKp() const {   //Get
    return kp;
}

void TPID::setKp(int kp) {  //Setter
    TPID::kp = kp;
}

TPID::TPID(int kp, int td) : kp(kp), td(td) {}  //Constructor
