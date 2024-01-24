/*
TITULO: PROGRAMA PARA PROBAR EL LIMITE DE LAS VARIABLES
Autor: Milton Sandoval Monasterio
Descripcion: Proceso para ver que pasa si se pasa del limite de las variables
Fecha: 2024-01-11
*/

#include <iostream> // Se trae la libreria para  mostrar y recibir datos
using namespace std;//Dar acceso al espacio de nombres (namespace) std

int main(int argc, char *argv[]) //Funcion principal main para retornar un entero.
{
	short int numero_entero_p;
	unsigned short int numero_entero_p1;
	unsigned int numero_entero_using;
	int numero_entero;
	float numero_decimal;
	double numero_decimal_g;
	//Asignando valores limite de los tipos de datos
	numero_entero_p = -32770;
	cout<<"Numero entero pequeno:" <<numero_entero_p<<endl;//IMPRESION DE LA VARIABLE numero_entero_p
	numero_entero_p1 = 65000;
	cout<<"Numero entero pequeno positivo:" <<numero_entero_p1<<endl;//IMPRESION DE LA VARIABLEnumero_entero_p1
	numero_entero_using = 4294967296;//ASIGNACION DE UN VALOR QUE ESTA EN EL LIMITE DEL TIPO DE DATO
	cout<<"Numero entero positivo:" <<numero_entero_using<<endl;//IMPRESION DE LA VARIABLE numero_entero_using 
	numero_entero = 2147483650;//ASIGNACION DE UN VALOR QUE SUPERA EL LIMITE DEL TIPO DE DATO
	cout<<"Numero entero:" <<numero_entero<<endl;//IMPRESION DE LA VARIABLE numero_entero
	//ASIGNACION ENTRE VARIABLES
	numero_entero_p1=numero_entero_p;//NO es correcto !!
	cout<<"Numero entero peque�o 1ra asignacion:"<<numero_entero_p1<<endl;
	//randon de datos short int -32768 al 32767
	numero_entero_p=32769;
	numero_entero_p1=numero_entero_p;
	cout<<"Numero entero peque�o 2da asignacion:"<<numero_entero_p1<<endl;
	numero_entero_p=32760;
	numero_entero_p1=numero_entero_p;
	cout<<"Numero entero peque�o 3ra asignacion:"<<numero_entero_p1<<endl;
	return 0;//RETORNO DE 0 PARA TERMINAR EL PROGRAMA
}

