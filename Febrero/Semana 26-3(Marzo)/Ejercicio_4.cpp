#include <iostream>
using namespace std;

int main() {
	int x;
	
	cout<<"Ingresar a�o."<<endl;
	cin>>x;
	
	if(x%4 == 0){
		cout<<"El a�o es bisiesto."<<endl;
	}
	else{
		cout<<"El a�o no es bisiesto."<<endl;
	}
	
	
	
	return 0;
}

