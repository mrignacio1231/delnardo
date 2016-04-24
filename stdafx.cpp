// stdafx.cpp: archivo de código fuente que contiene sólo las inclusiones estándar
// Mi Primer Programa.pch será el encabezado precompilado
// stdafx.obj contiene la información de tipos precompilada

#include "stdafx.h"
#include <iostream>
// Funcion que determina la longitud de una cadena.
int LongitudCadena(char *a) {
	short i = 0, resultado; char *copia;
	copia = a;
	for (i = 0; *copia++; i++) {
		resultado = i + 1;
	}
	return resultado;
}
// Función que busca un caracter en una cadena.
int EncontrarCaracter(char *cadena, char caracter) {
	short i, resultado = -1; char *copia;
	copia = cadena;
	for (i = 1; *copia++; i++) {
		if (*copia == caracter)
		{
			resultado = i + 1;
			break;
			
		}
		
	}

	return resultado;
}