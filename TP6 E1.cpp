#include <iostream>
#include <vector>
#include <stdlib.h>
#include <time.h>
#include <math.h>
#include <algorithm>
using namespace std;

class Persona
{
	private:
		string nombre;
		int edad;
	public:
		void inicializar();
		void imprimir();
		void MayorDeEdad();
};

void Persona::inicializar()
{
	cout<<"Ingrese nombre: ";
	getline(cin, nombre);
	cout<<"Ingrese edad: ";
	cin>>edad;
}
void Persona::imprimir()
{
	cout<<"Nombre: ";
	cout<<nombre;
	cout<<endl;
	cout<<"Edad: ";
	cout<<edad;
	cout<<endl;
}
void Persona::MayorDeEdad()
{
	if(edad>=18)
	{
		cout<<"Es mayor de edad";
		cout<<endl;
	}
	else
	{
		cout<<"Es menor de edad";
		cout<<endl;
	}
}

int main()
{
	Persona persona1;
	Persona persona2;
	
	persona1.inicializar();
	persona1.imprimir();
	persona1.MayorDeEdad();
	
	persona2.inicializar();
	persona2.imprimir();
	persona2.MayorDeEdad();
	
	return 0;
}
