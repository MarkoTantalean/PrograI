#define DELTA 5

class ListaProgramas{
	private:
		int total;
		int max;
		Programa *Data;

	private:
		void crecer();

	public:
		ListaProgramas();
		~ListaProgramas();
		void insertar(Programa);
		void registrar();
		//void buscar();
		//void mostrar();
};

ListaProgramas::ListaProgramas(){
	total = 0;
	max = 0;
	Data = NULL;
}

ListaProgramas::~ListaProgramas(){
	if(total > 0)
		delete[] Data;

	total = 0;
	max = 0;
	Data = NULL;
}

void ListaProgramas::crecer(){
	Programa *aux;
	aux = new Programa [max + DELTA];

	for (int i = 0; i < total; ++i)
		aux[i] = Data[i];

	if(Data != NULL)
		delete [] Data;

	Data = aux;
	max += DELTA;
}

void ListaProgramas::insertar(Programa P){
	if(total == max)
		crecer();

	Data[total] = P;
	total++;
}

void ListaProgramas::registrar(){
	Programa P;

	P.leer();
	insertar(P);
	cout << "\nPrograma registrado";
	getch();
}