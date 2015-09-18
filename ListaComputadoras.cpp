#include "librerias/basicas.h"
#include "librerias/fecha.h"
#include "Programa.cpp"
#include "ListaProgramas.cpp"
#include "Computadora.cpp"

#define DELTA 5

class ListaComputadoras{
	private:
		int total;
		int max;
		Computadora *Data;

	private:
		void crecer();

	public:
		ListaComputadoras();
		~ListaComputadoras();
		void insertar(Computadora C);
		void registrar();
		int buscarNroSerie(char []);
		int buscarCodMargesi(char[]);
//		void buscar();
//		void mostrar();
};

ListaComputadoras::ListaComputadoras(){
	total = 0;
	max = 0;
	Data = NULL;
}

ListaComputadoras::~ListaComputadoras(){
	if(total > 0)
		delete[] Data;

	total = 0;
	max = 0;
	Data = NULL;
}

void ListaComputadoras::crecer(){
	Computadora *aux;
	aux = new Computadora [max + DELTA];
	for (int i = 0; i < total; ++i)
		aux[i] = Data[i];

	if(Data != NULL)
		delete [] Data;

	Data = aux;
	max += DELTA;
}

void ListaComputadoras::insertar(Computadora C){
	if(total == max)
		ListaComputadoras::crecer();

	Data[total] = C;
	total++;
}

int ListaComputadoras::buscarNroSerie(char nro[]){
	for (int i = 0; i < total; ++i)
		if(!strcmp(Data[i].getNroSerie(),nro))
			return i;

	return -1;
}

int ListaComputadoras::buscarCodMargesi(char cod[]){
	for (int i = 0; i < total; ++i)
		if(!strcmp(Data[i].getCodMargesi(),cod))
			return i;

	return -1;
}

void ListaComputadoras::registrar(){
	Computadora C;
	int pos;
	char nro[LIM];
	char cod[LIM];

	cout << "\n********* REGISTRAR COMPUTADORA *********" << endl;
	do{
		leerCadena("Nro Serie",nro,LIM);
		pos = buscarNroSerie(nro);
		if(pos != -1)
			cout << "Nro de serie ya existe.. Ingrese otro por favor!!" << endl;
	}while(pos != -1);
	do{
		leerCadena("Codigo Margesi",cod,LIM);
		pos = buscarCodMargesi(cod);
		if(pos != -1)
			cout << "Codigo Margesi ya existe.. Ingrese otro por favor!!" << endl;
	}while(pos != -1);

	C.leer(nro,cod);
	insertar(C);
	cout << "\nComputadora registrada" << endl;
	getch();
}


void main(){
	ListaComputadoras LP;

	LP.registrar();
}