#include <iostream>
using namespace std;

int main() {
	int numero, i;
	
	cout<<"Escribir un numero para descomponerlo en sus factores primos: ";
	cin>>numero;cout<<endl;
	
	cout<<"Los factores del numero son:"<<endl;
	for(i=1;i<=numero;i++){
		if((numero%i==0)&&(i<numero)){
			cout<<i<<", ";
		}
		if(i==numero){
			cout<<i;
		}
	}
	
	return 0;
}

