#include "persona.cpp"
#include <iostream>
using namespace std;
class cliente: persona{
	        // atributo
	        private :
	            string nit ;
	        // metodos constructor, get set, crud
			public :
			    cliente(){
				} 
				cliente(string nom,string ape,string dir, int tel,string fin, string n):persona(nn,ap,dir,tel,fin){
					nit= n;
				}  
				void leer (){
					cout<<"nit: "<<nit<<end;
					cout<<"nombre: "<<nombre<<end;
					cout<<"apellidos: "<<apellidos<<end;
					cout<<"direccion: "<<direccion<<end;
					cout<<"telefon: "<<telefono<<end;
					cout<<"fecha nacimiento: "<<fecha_nacimineto<<end;
					
				
				}
};
