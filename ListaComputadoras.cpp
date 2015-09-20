#define DELTA 5

class ListaComputadoras{
	private:
		int total,
		int max;
		Computadora *Data;

	private:
		void crecer();

	public:
		ListaComputadoras();
		~ListaComputadoras();
		void insertar(Computadora C);
		void buscar();
		void mostrar();
};