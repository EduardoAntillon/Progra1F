#include <iostream>
using namespace std;

int main() {
	int periodo;
	
	cout<<"Ingrese un a�o para determinar si es bisiesto o no: ";cin>>periodo;
	cout<<endl;
	
	if((periodo%4==0)&&(periodo%100!=0)){
		cout<<"El a�o es bisiesto."<<endl;
	}
	else if(periodo%400==0){
		cout<<"El a�o es bisiesto."<<endl;
	}
	else{
		cout<<"El a�o no es bisiesto."<<endl;
	}
	return 0;
}

