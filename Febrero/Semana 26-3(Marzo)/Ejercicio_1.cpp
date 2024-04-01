#include <iostream>
using namespace std;

int main() {
	double x, y;
	
	cout<<"Ingrese dos numeros para verificar cual es mayor: "<<endl;
	cin>>x;cout<<endl;
	cin>>y;cout<<endl;
	if(x > y){
		cout<<"El numero mayor es: "<<x;
	}
	else if(y > x){ 
		cout<<"El numero mayor es: "<<y;
	}
	else{
		cout<<"Ambos numeros son iguales."<<endl;
	}
	
	return 0;
}

