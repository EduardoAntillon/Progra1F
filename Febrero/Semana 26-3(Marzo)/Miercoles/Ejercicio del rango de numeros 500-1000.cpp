#include <iostream>
using namespace std;

int main() {
	int x;
	
	cout<<"Ingresar un numero para determinar si esta en el rango de 500-1000: "<<endl;
	cin>>x;
	
	if((x>=500)&&(x<=1000)){
		cout<<"El numero esta en el rango dado."<<endl;
	}
	else{
		cout<<"El numero no esta en el rango dado."<<endl;
	}
	
	return 0;
}

