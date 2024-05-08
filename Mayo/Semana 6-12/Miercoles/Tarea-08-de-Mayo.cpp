#include <iostream>
using namespace std;

int main() {
	int vector[100], i, n, continuar = 0, vez;
	
	do{
		vez = continuar++;
		cout<<"Ingrese el tamaño del vector: ";cin>>n;
		cout<<"Ingrese los elementos del vector: "<<endl;
		
		for(i=0;i<n;i++){
			cout<<"Elemento "<<i+1<<": ";cin>>vector[i];
		}
		cout<<endl;
		cout<<"El vector genereado fue: "<<endl;
		for(i=0;i<n;i++){
			cout<<vector[i]<<endl;
		}
	} while(vez <= 5);
	cout<<"fin del programa.";
	
	return 0;
}

