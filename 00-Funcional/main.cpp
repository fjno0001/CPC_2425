#include <iostream>
#include "pid.h"

TPID pid;
int main() {
    pid.kp=0;
    pid.td=0;
    pid.ti=0;
    int op=0;

    do{
        std::cout << "CONTROL PID\nSelecciona la opcion que quieres ejecutar:\n1.Mostrar PID\n2.Modificar PID\n"
                     "3.Guardar datos en fichero\n4.Leer datos de fichero\n5.Salir" << std::endl;
        std::cin >> op;
        switch(op){
            case 1:{
                printPID(pid);
                break;
            }
            case 2:{
                changePID(pid);
                break;
            }
            case 3:{
                savefilePID(pid);
                break;
            }
            case 4:{
                loadfilePID(pid);
                break;
            }
            case 5:{
                std::cout << "Saliendo" << std::endl;
                break;
            }
            default:{
                std::cout << "La opcion no es valida\n" << std::endl;
                break;
            }
        }
    }
    while(op!=5);
}