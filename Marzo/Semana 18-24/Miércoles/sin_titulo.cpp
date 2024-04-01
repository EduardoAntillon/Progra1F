#include <iostream>
using namespace std;

int main() {
	int num, i, suma = 0;
	
	cout<<"Ingrese un numero: ";cin>>num;
	cout<<endl;
	
	if(num%2==0){
		for(i=0;i<=num;i++){
			if(i%2==0){
				suma += i;
			}
		}
		cout<<"La suma de todos los numeros pares hasta el numero es: "<<suma;
	}
	
	else if(num%2!=0){
		for(i=0;i<=num;i++){
			if(i%2!=0){
				suma += i;
			}
		}
		cout<<"La suma de todos los numeros impares hasta el numero es: "<<suma;
	}
	
	return 0;
}

