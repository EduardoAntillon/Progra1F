#include <iostream>
#include<cmath>
using namespace std;

int main() {
	double radio, area;
	double pi = 3.1415926535;
	
	cout<<"Escribir un radio para calcular su �rea: ";cin>>radio;cout<<endl;
	
	area = pi*pow(radio,2);
	cout.precision(7);
	
	cout<<"El �rea del c�rculo es: "<<area;
	
	return 0;
}

