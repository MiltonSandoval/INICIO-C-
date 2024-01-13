#include <iostream>
using namespace std;
//#define PI 3.1416; //Definimos una constante llamada PI

int main(int argc, char *argv[]) 
{
	const float PI = 3.1416; //Definimos una constante llamada PI
	double diametro, circunferencia;
	circunferencia=40;
	diametro=circunferencia/PI;
	cout<<"El diametro de la circunferencia de 40 es: " <<diametro;//<<endl;
	//PI=0 //error por asignacion a la constante pi
	return 0;
}

