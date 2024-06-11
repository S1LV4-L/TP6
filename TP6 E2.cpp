#include <iostream>
#include <vector>
#include <stdlib.h>
#include <time.h>
#include <math.h>
#include <algorithm>
using namespace std;

class triangulo
{
	private:
		float lado1, lado2, lado3;
	public:
		void start();
		void ladomayor();
		void equilatero();
};

void triangulo::start()
{
	cout<<"Ingrese el valor del primer lado: ";
	cin>>lado1;
	cout<<"Ingrese el valor del segundo lado: ";
	cin>>lado2;
	cout<<"Ingres el valor del tercer lado: ";
	cin>>lado3;
	cout<<endl;
}
void triangulo::ladomayor()
{
	if(lado1>lado2 && lado1>lado3) cout<<"Valor del lado mayor: "<<lado1;
	if(lado2>lado1 && lado2>lado3) cout<<"Valor del lado mayor: "<<lado2;
	if(lado3>lado1 && lado3>lado2) cout<<"Valor del lado mayor: "<<lado3;
	else cout<<"Los tres lados son iguales";
	cout<<endl;
}
void triangulo::equilatero()
{
	if(lado1==lado2 && lado1==lado3) cout<<"El triangulo es equilatero";
	else cout<<"El triangulo no es equilatero";
	cout<<endl;
}

int main()
{
	triangulo a;
	
	a.start();
	a.ladomayor();
	a.equilatero();
	
	return 0;
}
