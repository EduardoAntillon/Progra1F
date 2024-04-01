#include <iostream>
using namespace std;

int main() {
	int numero, i, factorial = 1;
	
	cout<<"Ingresar un numero para hallar su factorial: ";cin>>numero;cout<<endl;
	
	for(i=1;i<=numero;i++){
		factorial*=i;
	}
	cout<<"El factorial es: "<<factorial<<endl;
	
	return 0;
}

