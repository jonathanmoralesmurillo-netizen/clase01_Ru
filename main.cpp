#include <iostream>
#include "utiles.h"
using namespace std;

int main() {

    limpiaPantalla();   // Limpia pantalla (según tu implementación)

    imprimeCadena("Digite su nombre: ");
    string nombre = leerCadena();

    imprimeCadena("Digite su edad: ");
    int edad = leerEntero();

    imprimeCadena("\nHola " + nombre + ", tu edad es: " + to_string(edad) + "\n");

    imprimeCadena("Presione ENTER para continuar...");
    esperandoEnter();

    return 0;
}