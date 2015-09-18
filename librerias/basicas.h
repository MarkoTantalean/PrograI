#include <iostream>
#include <stdio.h>
#include <conio.h>
#include <string.h>

#define LIM 40

int leerEntero(char msje[], int min, int max){
	int num;
	do {
		cout << "\n < " << msje << ": ";
		cin >> num;
		if(num < min || num > max)
			cout << "\nValor no valido";
	} while (num < min || num > max);
	return num;
}

int Tabla(char msje[], char T[][LIM],int max){
	int op;
	for (int i = 0; i < max; ++i)
		cout << "\n[" << (i+1) << "] " << T[i];

	op = leerEntero(msje,1,max);
	return op;
}

float leerReal(char msje[], float min, float max){
	float num;
	do {
		cout << "\n < " << msje << ": ";
		cin >> num;
		if(num < min || num > max)
			cout << "\nValor no valido";
	} while (num < min || num > max);
	return num;
}

void leerCadena(char msje[], char cadena[], int max){
	do{
		cout << "\n < " << msje << ": ";
		fflush(stdin);
		gets(cadena);
	}while(strlen(cadena) < 1 || strlen(cadena) > (max-1));
}
