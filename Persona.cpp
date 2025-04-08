#include <iostream>
using namespace std;
class persona{
    //atributos
    protected :
    	string nombres,apellido,direccion,fecha_nacimiento;
    	int telefono;
    	
    	//metodos 1) constructor2) CRUD
    	protected :
    		persona(string nom,string ape,string dire, int tel,string fin){ 
    		nombres = nom;
    		apellido = ape;
    		direccion = dire;
    		telefono = tel;
    		fecha_nacimiento = fin;
    		
    		
			}
		void crear();
		void leer();
		void actualizar();
		void borrar();
			
    	
	
};

