#include <iostream>
#include <cctype>


using namespace std;

int main(int argc, char *argv[]) {
	char caracter; //CREAMOS UNA VARIABLE DE TIPO CHAR LLAMADA CARACTER
	cout<<"Ingrese una letra:";
	cin>>caracter; // SE ALMACENA EL CARACTER EN LA VARIABLE 'CARACTER'
	caracter = tolower(caracter); //SE UTILIZA LA FUNCION TOLOWER PARA VOLVER EN MINUSCULA 
	//LO QUE AlMACENA LA VARIABLE
	switch(caracter)//switch CON OPCIONES PARA VER SI ES UNA VOCAL O NO 
	{
		case 'a':	
		case 'e':
		case 'i':
		case 'o':
		case 'u': cout<<"Es vocal";
		break;
		default: cout<<"No es vocal";
		break;
	};
	return 0;
}

