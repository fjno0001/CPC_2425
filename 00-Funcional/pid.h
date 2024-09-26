//
// Created by FRANC on 26/09/2024.
//

#ifndef PROYECTOPID_PID_H
#define PROYECTOPID_PID_H

typedef struct TPID{
    int kp;
    int td;
    int ti;
};

void printPID(TPID &p);
void changePID(TPID &p);
void loadfilePID(TPID &p);
void savefilePID(TPID &p);
#endif //PROYECTOPID_PID_H
