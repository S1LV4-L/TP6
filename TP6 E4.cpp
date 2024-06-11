#include <iostream>
#include <vector>
#include <stdlib.h>
#include <time.h>
#include <math.h>
#include <algorithm>
using namespace std;

class empleado
{
	private:
		string nombre;
		float sueldo;
	public:
		void load();
		void data();
		void taxes();
};

void empleado::load()
{
	cout<<"Ingrese el nombre del empleado: ";
	getline(cin, nombre);
	cout<<"Ingrese el sueldo del empleado: ";
	cin>>sueldo;
	cout<<endl;
}
void empleado::data()
{
	cout<<"Nombre del empleado: "<<nombre;
	cout<<endl;
	cout<<"Sueldo del empleado: "<<sueldo<<"$";
	cout<<endl;
}
void empleado::taxes()
{
	if(sueldo>3000) cout<<"El empleado debe pagar impuestos";
	else cout<<"El empleado no debe pagar impuestos";
}

int main()
{
	empleado emp1;
	
	emp1.load();
	emp1.data();
	emp1.taxes();
	
	return 0;
}

