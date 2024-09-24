//
// Created by aulas on 23/09/2024.
//

#ifndef UNTITLED2_TPID_H
#define UNTITLED2_TPID_H


class TPID {
    int kp;
    int td;
public:
    TPID(int kp, int td);

public:
    TPID();
    void print();

    int getKp() const;

    void setKp(int kp);
};


#endif //UNTITLED2_TPID_H
