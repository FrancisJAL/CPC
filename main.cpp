#include <iostream>
#include "TPID.h"
int main() {
    std::cout << "Hello, World!" << std::endl;
    TPID p;

    p.print();
    p.setKp(100);
    p.print();
    std::cout <<"El valor de kp->"<< p.getKp() << std::endl;
    return 0;
}
