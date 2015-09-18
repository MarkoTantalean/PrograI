char Testado[][LIM] = {"Malogrado","Habil"};

class Computadora{
	private:
		char nroSerie[LIM];
		char codigoMargesi[LIM];
		char marcaEquipo[LIM];
		float velocidadProcesador; 	//Ghz
		unsigned int ram;	//Mb
		int discoDuro;	//Gb
		char marcaDiscoDuro[LIM];
		char ambiente[LIM];
		Fecha fechaAdquisicion;
		int estado;
		ListaProgramas LP;

	public:
		Computadora();
		//~Computadora();
		char *getNroSerie();
		char *getCodMargesi();
		void leer(char [], char []);

};

Computadora::Computadora(){
	nroSerie[0] = NULL;
	codigoMargesi[0] = NULL;
	marcaEquipo[0] = NULL;
	velocidadProcesador = 0.0;
	ram = 0;
	discoDuro = 0;
	marcaDiscoDuro[0] = NULL;
	ambiente[0] = NULL;
	estado = 1;
}

char *Computadora::getNroSerie(){
	return nroSerie;
}

char *Computadora::getCodMargesi(){
	return codigoMargesi;
}

void Computadora::leer(char nro[], char cod[]){

	//leerCadena("Nro Serie",nroSerie,LIM);
	//leerCadena("Codigo Margesi",codigoMargesi,LIM);
	strcpy(nroSerie,nro);
	strcpy(codigoMargesi,cod);
	leerCadena("Marca de Equipo",marcaEquipo,LIM);
	velocidadProcesador = leerReal("Velocidad del procesador (Ghz)",1,10);
	ram = leerEntero("Tamano de la memoria Ram (Mb)",128,2000000);
	discoDuro = leerEntero("Tamano del disco Duro (Gb)",1,50000);
	leerCadena("Marca del disco duro",marcaDiscoDuro,LIM);
	leerCadena("Ambiente",ambiente,LIM);
}