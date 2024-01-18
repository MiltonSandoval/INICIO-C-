/*
TITULO: PROGRAMA PARA IMPRIMIR N TABLAS DE MULTIPLICAR
Autor: Milton Sandoval Monasterio
Descripcion: programa que imprime n tabla de multiplicar
Fecha: 2024-01-17
*/


#include <iostream>
using namespace std;

int main(int argc, char *argv[]) 
{
	int numero_tabla;//se crea la variable que almacenara la opcion del usuario
	
	cout<<"Tabla de multiplicar" "\n";
	cout<<"Imprimir la tabla del:";//se pide al usuario ingresar el numero de la tabla que desea imprimir.
	cin>>numero_tabla;//el numero se almacena en esta variable
	/*
	se inicializa el bucle for para empezar a imprimir la tabla hasta el 10,
	se crea la variable contador de tipo entero para hacer el conteo hasta 10 y para que nos ayude 
	a imprimir las tablas.
	la tabla se imprime usando el numero dado y usando la variable contador para que conforme el bucle avanze, 
	la variable contador sirva para multiplicar y para imprimir la tabla.
	*/
	for (int contador = 1; contador < 11; contador++)
	
	{
		cout<<numero_tabla<<"*"<<contador<<"="<<numero_tabla * contador<<"\n";
	}
	return 0;//retorna 0 si todo esta bien
}

