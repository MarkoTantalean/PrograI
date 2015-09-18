class Fecha {
	private:
		int dia;
		int mes;
		int anio;

	public:

		Fecha(int, int, int); //Constructor con parametros con valor por defecto
		int getDia();
		void setDia(int wDia);
		int getMes();
		void setMes(int wMes);
		int getAnio();
		void setAnio(int wAnio);
		void leer();
		void muestra();
		void muestraExtensa();
		int esBisiesto();
		int fechaValida();
};

Fecha::Fecha(int wDia = 1, int wMes = 1, int wAnio = 1990){
	dia = wDia;
	mes = wMes;
	anio = wAnio;
}

void Fecha::leer(){
	dia = leerEntero("Dia",1,31);
	mes = leerEntero("Mes",1,12);
	anio = leerEntero("Anho",1990,2050);
}

void Fecha::muestra(){
	cout << dia << "/" << mes << "/" << anio;
}

void Fecha::muestraExtensa(){
	char tmeses[12][20] = {"Enero","Febrero","Marzo","Abril",
							"Mayo","Junio","Julio","Agosto",
							"Setiembre","Octubre","Noviembre","Diciembre"};

	cout << dia << " de " << tmeses[mes-1] << " de " << anio;
}

int Fecha::esBisiesto(){
	if (anio % 4 == 0 && anio % 100 != 0 || anio % 400 == 0 )
		return 0;

	return 1;
}

int Fecha::fechaValida(){
	int meses[13] = {0,31,29,31,30,31,30,31,31,30,31,30,31};

	if( meses[mes] < dia)
		return 0;

	if(mes == 2 && dia == 29 && !esBisiesto())
		return 0;

	return 1;
}
