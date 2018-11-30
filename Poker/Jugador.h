class Jugador
{
	public: 
		const char *nombre;
		int ncartas;
		
		Jugador(const char *);
		const char * getNombre();
		void setMano(int *);
		int * getMano();
		int examinar();
		int getAlta();
		int getpmano();
		void setCarta(int);
		void borrar(int carta);
		bool pedir();
	
	private: 	
		static int mano[5];	
		static int pmano;
		static int caralta;
		void ordenar();
		bool ERM();	//Escalera Real Maxima
		bool ER(); 	// Escalera Real 
		bool poker();
		bool full();
		bool color();
		bool escalera();
		bool trio();
		bool pardoble();
		bool par();
};
