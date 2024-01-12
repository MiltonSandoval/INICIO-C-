#include <iostream>
using namespace std;

int main(int argc, char *argv[]) 
{
	//Declaracion y uso de bool.
	bool b0;
	b0=true;
	cout<<"Variable con valor VERDADERO:"<<b0<<endl;
	b0=false;
	cout<<"Variable con valor FALSO:"<<b0<<endl;
	//Asignacion de valores numericos.
	//Si es cero es FALSO, Si es diferente de cero es VERDADERO.
	b0=0;//El valor se vera como false
	cout<<"Variable con valor 0:"<<b0<<endl;
	b0=1;//el valor se vera como true.
	cout<<"Variable con valor 1:"<<b0<<endl;
	b0=-100;//El valor se vera como true.
	cout<<"Variable con valor -100:"<<b0<<endl;
	
	return 0;//se retorna 0 si el codigo esta bien
}

