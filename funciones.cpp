#include <iostream>
#include <random>
#include <limits> // Para std:: numeric limits
	
using namespace std;
//DECLARAR FUNCIONES
int sumar(int num1, int num2)
{
	int suma;
	suma = num1 + num2;
	return suma;
}

int main() 
{
	int a,b;
    cout<<"Ingrese el primer numero:";
    cin>>a;
    cout<<"Ingrese el segundo numero:";
    cin>>b;
	cout<<"Suma de 2 numeros: " <<sumar(a,b)<<"\n";
    cout<<"Ingrese el primer numero:";
    cin>>a;
    cout<<"Ingrese el segundo numero:";
    cin>>b;
	cout<<"Suma de 2 numeros: " <<sumar(a,b)<<"\n";
	
	return 0;
}

