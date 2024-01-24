#include <iostream>
#include <random>
#include <limits> // Para std:: numeric limits

using namespace std;
//Declaracion de variables globales.
int aleatorio, num1;
//Declaracion de Funciones.
void solicitarNumero()//Funcion void que sirve para pedir  un numeros y almacenarlos en la variable "aleatorio"
{
    cout<<"Ingrese la cantidad de numeros a generar:";
    cin>>aleatorio;
}
//Funcion para generar un numero aleatorio entre 0 a 99.
int generador()
{
    random_device rd; //dispositivo para obtener una semilla aleatoria.
    mt19937 gen(rd()); //motor de generador Mersenne Twister
    uniform_int_distribution<> distrib(0,99);
    num1 = distrib(gen);
    return num1;
}
int main()
{
    int mayor = 0; // varaible que sirve para determinar que numero es el mayor de los generados.
    solicitarNumero();
    for(int i = 0; i < aleatorio; i++) //bucle que sirve para generar "n" numeros aleatorios.
    {
        cout<<generador()<<" ";//se genera y se imprime un numero aleatorio y se lo retorna en la variable "num1".
        if (num1 > mayor)//se inicia el bucle para determinar el numero mayor de todos los numeros generados.
        {
            mayor = num1;
        };
    };
    cout<<"El numero mayor es :"<<mayor<<endl;//se imprime el numero mayor de todos los generados
	return 0;
}

