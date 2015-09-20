#include <iostream.h>
#include <conio.h>

/*

	esBisiesto();
	fechaValida();
	comparaFecha(); // 1 0 -1
*/
class Fecha
{
	private:
		int dia;
		int mes;
		int anio;


	public:

		Fecha(int wDia = 1, int wMes = 1, int wAnio = 1990) //Constructor con parametros con valor por defecto
		{
			dia = wDia;
			mes = wMes;
			anio = wAnio;
		}

		int getDia(){
			return dia;
		}

		void setDia(int wDia){
			dia = wDia;
		}

		int getMes(){
			return mes;
		}

		void setMes(int wMes){
			mes = wMes;
		}

		int getAnio(){
			return anio;
		}

		void setAnio(int wAnio){
			anio = wAnio;
		}

		void muestra(){
			cout << dia << "/" << mes << "/" << anio;
		}

		void muestraExtensa(){
			char tmeses[12][20] = {"Enero","Febrero","Marzo","Abril",
									"Mayo","Junio","Julio","Agosto",
									"Setiembre","Octubre","Noviembre","Diciembre"};

			cout << dia << " de " << tmeses[mes-1] << " de " << anio;
		}

		void leer(){
			cout << "\nDia: ";
			cin >> dia;
			cout << "\nMes: ";
			cin >> mes;
			cout << "\nAnio: ";
			cin >> anio;
		}

};
