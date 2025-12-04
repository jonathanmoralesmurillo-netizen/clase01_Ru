//
// Created by ESINF 2-004805 on 4/12/25.
//
//
// Created by ESINF 2-004805 on 4/12/25.
//

#ifndef CLASE01RU_UTILES_H
#define CLASE01RU_UTILES_H


#include "utiles.h"

void imprimeCadena(string cadena) {
    cout << cadena;
}

string leerCadena() {
    string x;
    getline(cin, x);
    return x;
}

int leerEntero() {
    int n;
    bool continuar = true;
    while (true) {
        if (cin >> n) {
            cin.clear(); // Limpia el estado del flujo..
            cin.ignore(1024, '\n');
            return n;
        }
        else {
            cerr << "Valor incorrecto.. digita UN NUMERO" << endl;
            cin.clear();
            cin.ignore(1024, '\n');
        }
    }

}

void limpiaPantalla(){
    system("clear");
}

void esperandoEnter() {
    cin.get();
}


#endif //CLASE01RU_UTILES_H