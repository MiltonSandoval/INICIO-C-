#include <iostream>
#include <random>
#include <limits> // Para std:: numeric limits

using namespace std;
//Declaracion de variables globales.
int aleatorio, num1, contador;
//Declaracion de Funciones.
void solicitarNumero()//Funcion void que sirve para pedir  un numeros y almacenarlos en la variable "aleatorio"
{
	cout<<"Ingrese la cantidad de numeros impares a generar:";
	cin>>aleatorio;
}
//Funcion para generar un numero aleatorio entre 0 a 99.
int generador()
{
	static random_device rd; //dispositivo para obtener una semilla aleatoria.
	static mt19937 gen(rd()); //motor de generador Mersenne Twister
	uniform_int_distribution<> distrib(0,99);
	distrib(gen);
	return distrib(gen);
}
//funcion que sirve para verificar que el numero es impar.
bool verificador(int numero)
{
	return ( numero % 2 != 0 );
}

int main()
{
	//se solicita el numero.
	solicitarNumero();
	while (contador < aleatorio)
	{
		//se guarda ell numero generado en la variable num1
		num1 = generador();
		//si la funcion verificador devuelve 1, se imprime el numero impar
		if(verificador(num1)) //se verifica que el numera sea impar.
		{
			cout<<"Impar:"<<num1<<endl;//se imprime el numero.
			contador = contador + 1;
		}
	}
	return 0;
}
