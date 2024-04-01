#include <iostream>
using namespace std;

int main() {
	int x, y, producto;
	
	cout<<"Introducir dos números para multiplicar;"<<endl;
	cout<<endl;
	cout<<"primer numero: ";cin>>x;
	cout<<"segundo numero: ";cin>>y;
	cout<<endl;
	producto = x * y;
	
	if(producto > 100){
		cout<<"El producto es: "<<producto<<" y es mayor a 100";
		cout<<endl;
	}
	if(producto < 100){
		cout<<"El producto es: "<<producto<<" y es menor a 100";
		cout<<endl;
	}
	if(producto == 100){
		cout<<"El producto es: "<<producto<<" y es igual a 100";
		cout<<endl;
	}
	
	
	return 0;
}

