#include <iostream>
using namespace std;

int main() {
	double x;
	
	cout<<"Ingresar un numero para verificar si esta en el rango: 1-100: "<<endl;
	
	cin>>x;
	
	if((x>=1)&&(x<=100)){
		cout<<"El numero esta en el rango."<<endl;
	}
	else{
		cout<<"El numero no esta en el rango."<<endl;
	}
	
	return 0;
}

