#include <iostream>
using namespace std;

int main(){
	string sabor;
	int num_sabores, i;
	
	cout<<"Ingrese el numero de sabores que desea en su helado, solamente que no puede ser mayor a 6 sabores: ";
	cin>>num_sabores;cout<<endl;
	
	if(num_sabores>6){
		cout<<"El numero de sabores no puede ser mayor a 6.";
	}
	else{
		for(i=1;i<=num_sabores;i++){
			cout<<"Sabor numero "<<i<<": ";cin>>sabor;
		}
		cout<<endl;
		cout<<"Orden registrada."<<endl;
	}
	
	return 0;
}

