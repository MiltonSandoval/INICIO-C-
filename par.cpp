#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	int numero;
	
	cout<<"Ingrese el numero:";
	cin>>numero;
	if (numero % 2 == 0)
	{
		cout<<"El numero:"<<numero<<"es PAR"<<endl;
	}
	else
	{
	cout<<"el numero:"<<numero<<" es IMPAR" << endl;	
	}
	
	
	
	return 0;
}

