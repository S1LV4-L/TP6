#include <iostream>
#include <vector>
#include <stdlib.h>
#include <time.h>
#include <math.h>
#include <algorithm>
using namespace std;

class cuadrado
{
	private:
		int lado;
	public:
	    void start();
	    void perimetro();
	    void area();
};

void cuadrado::start()
{
	cout<<"Ingrese el valor de un lado del cuadrado: ";
	cin>>lado;
}
void cuadrado::perimetro()
{
	cout<<"Valor del perimetro: "<<lado+lado+lado+lado;
	cout<<endl;
}
void cuadrado::area()
{
	cout<<"Area del cuadrado: "<<lado*lado;
	cout<<endl;
}

int main()
{
	cuadrado a;
	
	a.start();
	a.perimetro();
	a.area();
	
	return 0;
}
