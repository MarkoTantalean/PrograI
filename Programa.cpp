char Tsoftware[][LIM] = {"Propietario","Libre"};

class Programa{
	private:
		char nombre[LIM];
		char rubro[LIM];
		char version[10];
		int distribucion;
	public:
		Programa();
		//~Programa();
		void leer();
};


Programa::Programa(){
	nombre[0] = NULL;
	rubro[0] = NULL;
	version[0] = NULL;
	distribucion = -1;
}

void Programa::leer(){
	leerCadena("Nombre del software",nombre,LIM);
	leerCadena("Rubro",rubro,LIM);
	leerCadena("Version",version,10);
	distribucion = Tabla("Selecciona la distribucion del software",Tsoftware,2);
}