#define DELTA 5

class ListaProgramas{
	private:
		int total;
		int max;
		Seccion *Data;

	private:
		void crecer();

	public:
		ListaProgramas();
		~ListaProgramas();
		void insertar();
		void buscar();
		void mostrar();
};