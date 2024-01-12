/*
TITULO: PRIMER PROGRAMA CON COMENTARIOS
Autor: Juan David Meza Gonzalez
Descripcion: Primer programa para analizar su estructura.
Fecha: 2024-01-10
*/

#include <iostream> // Se trae la libreria para  mostrar y recibir datos
using namespace std; //Dar acceso al espacio de nombres (namespace) std

int main() // Funcion principal main para retornar un entero.
{
	
	int numero;// Declaracion de la variable numero como entero.
	numero = 5+5;// Asignacion de la suma 5+5 a la variable numero.
	/*
	Se imprime el resultado de la adicion en la variable
	numero y al final un salto de linea
	*/
	cout <<"El resultado de la suma es:"<<numero <<"\n";
	return 0;// Retorno de 0 para finalizar el programa.
}
