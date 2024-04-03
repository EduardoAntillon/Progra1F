#include <iostream>
using namespace std;

int main() {
	int i, lim, x = 0, y = 1, z = 1;
	
	cout<<"Escribir un numero como numero de terminos de la serie de Fibonacci: ";
	cin>>lim;
	cout<<"La sucesion es: ";
	cout<<"0, 1, ";
	
	for(i=1;i<=lim-2;i++){
		z = x + y;
		
		x = y;
		y = z;
		
		if(i==lim-2){
			cout<<z;
		}
 		else{
			cout<<z<<", ";
		}
	}
	
	return 0;
}

