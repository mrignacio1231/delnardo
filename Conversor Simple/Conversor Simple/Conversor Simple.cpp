// Conversor Simple.cpp: define el punto de entrada de la aplicación de consola.
//
// Un conversor para transformar de Metros a kilometros y viceversa.


#include <iostream>
#include <stdio.h>
#include "stdafx.h"


using namespace std;
int main()
{	
	short opcion; float cantidad, resultado;
	cout << "\n\t\tMenu\n";
	cout << "\t1. Convertir metros a kilometros.\n";
	cout << "\t2. Convertir kilometros a metros.\n";
	cout << "\t3. Convertir centimetros a metros.\n";
	cout << "\t4. Convertir metros a centimetros.\n";
	cout << "Elige tu opcion: "; cin >> opcion;
	cout << "Ingrese la cantidad a convertir: ";
	cin >> cantidad;
	switch (opcion) {
	case 1: cout << setprecision(4) << float(cantidad / 1000) << " kilometros\n "; break; // Se encarga de convertir metros a kilometros.
	case 2: cout << setprecision(4) << float(cantidad * 1000) << " metros.\n "; break; // Convierte kilómetros a metros.
	case 3: cout << setprecision(4) << float(cantidad / 100) << " metros\n "; break; // Convierte centímetros a metros.
	case 4: cout << setprecision(4) << float(cantidad * 1000) << " centimetros.\n ";; break;
	default: cout << "Error. No has ingresado ninguna opcion.";
	}
	cin.get();
	return 0;
}

