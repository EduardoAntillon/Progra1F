#include <iostream>
using namespace std;

int main() {
	int periodo;
	
	cout<<"Ingresar un a�o para determinar si es bisiesto o no."<<endl;
	cout<<endl;
	cin>>periodo;
	cout<<endl;
	if((periodo%4==0)&&(periodo%100!=0)){
		cout<<"El a�o es bisiesto."<<endl;
	}
	else{
		cout<<"El a�o no es bisiesto."<<endl;
	}
	
	return 0;
}

