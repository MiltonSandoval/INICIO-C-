#include <iostream>
using namespace std;

void ingresar(int &a, int &b)
{
	cout<<"Ingresar un numero:";
	cin>>a;
	cout<<"Ingresar otro numero:";
	cin>>b;

}

void sumar(int a, int b , int &resultado)
{
	resultado = a+b;
}

void primo(int a, string &resultadoA)
{
	cout<<"Ingrese un numero:";
	cin>>a;
	if ((a % a == 0) and (a % 1 == 0) and (a % a+1 == 0))
	{
		resultadoA = "ESTE NUMERO ES UN NUMERO PRIMO", a;
		cout<<resultadoA;
	}
	
}
void menuopcion(int opcion, int a, int b, int &resultado)
{
	
	
}

int main(int argc, char *argv[]) {
	int a,b,resultado,opcion;
	string resultadoA;
	do
	{
		cout<<"(1).INGRESAR NUMEROS"<<"\n";
		cout<<"(2).SUMAR LOS NUMEROS"<<"\n";
		cout<<"(3).VERIFICAR SI LOS NUMEROS SON PRIMOS"<<"\n";
		cout<<"(0).SALIR";
		primo(a, resultadoA);
		
	
	}while(opcion == 0);
	
	return 0;
}

