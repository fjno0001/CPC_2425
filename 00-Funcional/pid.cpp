//
// Created by FRANC on 26/09/2024.
//

#include <iostream>
#include <fstream>
#include <cstring>
#include "pid.h"

void printPID(TPID &p){
    std::cout << "PID\t Kp->" << p.kp << "\t Td->" << p.td << "\t Ti->" << p.ti << "\n" << std::endl;
}

void changePID(TPID &p){
    std::cout << "Introduce valor de kp:" << std::endl;
    std::cin >> p.kp;
    std::cout << "Introduce valor de td:" << std::endl;
    std::cin >> p.td;
    std::cout << "Introduce valor de ti:" << std::endl;
    std::cin >> p.ti;
    std::cout << std::endl;
}

void loadfilePID(TPID &p){
    char file[50];
    char *ext=".txt";
    std::cout << "Introduce el nombre del fichero:" << std::endl;
    std::cin >> file;
    strcat(file,ext);
    std::ifstream txt(file);
    if (txt.is_open()){
        txt >> p.kp >> p.td >> p.ti;
        txt.close();
    }
    else{
        std::cout << "Error al abrir el fichero\n" << std::endl;
    }
}

void savefilePID(TPID &p){
    char file[50];
    char *ext=".txt";
    std::cout << "Introduce el nombre del fichero:" << std::endl;
    std::cin >> file;
    strcat(file,ext);
    std::ofstream txt(file);
    if (txt.is_open()){
        txt << p.kp <<" "<< p.td <<" "<< p.ti << std::endl;
        txt.close();
    }
    else{
        std::cout << "Error al abrir el fichero\n" << std::endl;
    }
}