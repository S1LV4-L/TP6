#include <iostream>
#include <vector>
#include <stdlib.h>
#include <time.h>
#include <math.h>
#include <algorithm>
using namespace std;

class operaciones
{
	private:
		float v1, v2;
	public:
		void start();
		void suma();
		void resta();
		void multpl();
		void div();
};

void operaciones::start()
{
	cout<<"Ingrese el primer valor: ";
	cin>>v1;
	cout<<"Ingrese el segundo valor: ";
	cin>>v2;
}
void operaciones::suma()
{
	cout<<"Resultado de la suma: "<<v1+v2;
	cout<<endl;
}
void operaciones::resta()
{
	cout<<"Resultado de la resta: "<<v1-v2;
	cout<<endl;
}
void operaciones::multpl()
{
	cout<<"Resultado de la multiplicacion: "<<v1*v2;
	cout<<endl;
}
void operaciones::div()
{
	cout<<"Resultado de la division: "<<v1/v2;
}

int main()
{
	operaciones a;
	
	a.start();
	a.suma();
	a.resta();
	a.multpl();
	a.div();
	
	return 0;
}
