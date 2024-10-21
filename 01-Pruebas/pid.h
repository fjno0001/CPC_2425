//
// Created by FRANC on 26/09/2024.
//

#ifndef PROYECTOPID_PID_H
#define PROYECTOPID_PID_H

class PID {
    int kp;
    int td;
    int ti;
public:
    PID();

    void printPID(PID &p);
    void changePID(PID &p);
    void loadfilePID(PID &p);
    void savefilePID(PID &p);

    int getKp() const;
    void setKp(int kp);
    int getTd() const;
    void setTd(int td);
    int getTi() const;
    void setTi(int ti);
};
#endif //PROYECTOPID_PID_H
