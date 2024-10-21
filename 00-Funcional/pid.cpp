//
// Created by FRANC on 26/09/2024.
//

#include <iostream>
#include <fstream>
#include <cstring>
#include "pid.h"

PID::PID(){
    kp=0;
    td=0;
    ti=0;
}

int PID::getKp() const {
    return kp;
}
void PID::setKp(int kp) {
    PID::kp = kp;
}
int PID::getTd() const {
    return td;
}
void PID::setTd(int td) {
    PID::td = td;
}
int PID::getTi() const {
    return ti;
}
void PID::setTi(int ti) {
    PID::ti = ti;
}

void PID::printPID(PID &p){
    std::cout << "PID\t Kp->" << p.getKp() << "\t Td->" << p.getTd() << "\t Ti->" << p.getTi() << "\n" << std::endl;
}


void PID::changePID(PID &p){
    int nkp;
    int nti;
    int ntd;
    std::cout << "Introduce valor de kp:" << std::endl;
    std::cin >> nkp;
    p.setKp(nkp);
    std::cout << "Introduce valor de td:" << std::endl;
    std::cin >> ntd;
    p.setTd(ntd);
    std::cout << "Introduce valor de ti:" << std::endl;
    std::cin >> nti;
    p.setTi(nti);
    std::cout << std::endl;
}

void PID::loadfilePID(PID &p){
    char file[50];
    char *ext=".txt";
    std::cout << "Introduce el nombre del fichero:" << std::endl;
    std::cin >> file;
    strcat(file,ext);
    std::ifstream txt(file);
    if (txt.is_open()){
        txt >> kp >> td >> ti;
        txt.close();
    }
    else{
        std::cout << "Error al abrir el fichero\n" << std::endl;
    }
}

void PID::savefilePID(PID &p){
    char file[50];
    char *ext=".txt";
    std::cout << "Introduce el nombre del fichero:" << std::endl;
    std::cin >> file;
    strcat(file,ext);
    std::ofstream txt(file);
    if (txt.is_open()){
        txt << p.getKp() <<" "<< p.getTd() <<" "<< p.getTi() << std::endl;
        txt.close();
    }
    else{
        std::cout << "Error al abrir el fichero\n" << std::endl;
    }
}