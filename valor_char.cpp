/*
TITULO: VALORES CHAR
Autor: Milton Sandoval Monasterio
Descripcion: Proceso para imprimir vocales con codigo ASCII
Fecha: 2024-01-12
*/

#include <iostream>
using namespace std;

int main(int argc, char *argv[]) 
{
	//Definicion y asignacion de valores char
	char letra;
	char vocal_may, vocal_min, char_arroba;
	letra='L';
	cout<<"Imprimiendo la letra 'L':"<<letra<<endl;
	//letra="l";//error por asignar mas de un caracter.
	//asignanando valores numericos.
	letra=65;
	cout<<"Imprimiendo ASCCI '65':"<<letra<<endl;
	//Asignando valores numericos a la variable vocal_may
	vocal_min = 160; // á EN CODIGO ASCCI
	cout<<"Imprimiendo las vocales minusculas con acento con codigo ASCCI:"<<endl;
	cout<<vocal_min<<", "; 
	vocal_min = 130;//é EN CODIGO ASCCI
	cout<<vocal_min<<", ";
	vocal_min = 161;//í EN CODIGO ASCCI
	cout<<vocal_min<<", ";
	vocal_min = 162;//ó EN CODIGO ASCCI
	cout<<vocal_min<<", ";
	vocal_min = 163;//ú EN CODIGO ASCCI
	cout<<vocal_min<<endl;
	cout<<"Imprimiendo las vocales Mayusculas con acento con codigo ASCCI:"<<endl;
	vocal_may = 181;//Á EN CODIGO ASCCI
	cout<<vocal_may<<", ";
	vocal_may = 144;//É EN CODIGO ASCCI
	cout<<vocal_may<<", ";
	vocal_may = 214;//Í EN CODIGO ASCCI
	cout<<vocal_may<<", ";
	vocal_may = 224;//Ó EN CODIGO ASCCI
	cout<<vocal_may<<", ";
	vocal_may = 233;//Ú EN CODIGO ASCCI
	cout<<vocal_may<<endl;
	cout<<"Imprimiendo el arroba con codigo ASCCI:"<<endl;
	char_arroba =64;//ARROBA EN CODIGO ASCCI
	cout<<char_arroba<<endl;
	cout<<"Imprimiendo una barra invertida con codigo ASCCI:"<<endl;
	char_arroba = 92;//BARRA INVERTIDA EN CODIGO ASCCI
	cout<<char_arroba<<endl;
	
	// DECLARACION DE UNA CADENA DE CARACTERES
	char nombre[]="MILTON";
	// Impresion de un nombre y de cada letra del nombre
	cout<<"Imprimiendo el NOMBRE:"<<nombre<<endl;
	cout<<"Imprimiendo nombre[0]:"<<nombre[0]<<endl;
	cout<<"Imprimiendo nombre[1]:"<<nombre[1]<<endl;
	cout<<"Imprimiendo nombre[2]:"<<nombre[2]<<endl;
	cout<<"Imprimiendo nombre[3]:"<<nombre[3]<<endl;
	cout<<"Imprimiendo nombre[4]:"<<nombre[4]<<endl;
	cout<<"Imprimiendo nombre[5]:"<<nombre[5]<<endl;
	nombre[0]='m';
	nombre[1]='i';
	nombre[2]='l';
	nombre[3]='t';
	nombre[4]='o';
	nombre[5]='n';
	cout<<"Imprimiendo el nombre en minuscula:"<<nombre<<endl;

	return 0;
}
