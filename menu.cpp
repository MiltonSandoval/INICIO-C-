/*
TITULO: MENU
Autor: Milton Sandoval Monasterio
Descripcion: Proceso para crear un menu en c++
Fecha: 2024-01-15
*/
#include <iostream> // Se trae la libreria para  mostrar y recibir datos
using namespace std;//Dar acceso al espacio de nombres (namespace) std
/*
DATOS DE INICIO DEL PROGRAMA
MENU
1. opcion uno
2. opcion dos
0. salir
*/
int main(int argc, char *argv[])
{
	int opcion;//se crea la varaible opcion de tipo int
	do //se inicia el bucle do-while para imprimir el menu y pedir las opciones
	{
		cout<<"MENU PRINCIPAL" "\n";
		cout<<"1. Opcion uno" "\n";
		cout<<"2. Opcion dos" "\n";
		cout<<"0. salir" "\n";
		cout<<"Ingrese su opcion:";//se pide la opcion para almacenarla en la variable opcion
		cin>>opcion;//se guarda la opcion
		switch (opcion)//se crea el switch para revisar la opcion ingresada
		{
		case 1: cout<<"Eligio la opcion 1" << endl;
		break;
		case 2: cout<<"Eligio la opcion 2" << endl;
		break;
		case 0: cout<<"Eligio salir, vuelva pronto" <<endl;
		break;
		default:cout<<"Opcion incorrecta"<<endl;//si se da un numero que no esta en el menu, imprimira opcion incorrecta
		};
	}while (opcion != 0);//aqui se sale del bucle si la opcion es 0
	return 0;
}

