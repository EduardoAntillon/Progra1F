#include <iostream>
using namespace std;

int main() {
	int area;
	
	cout<<"Ingresar un area: ";cin>>area;
	cout<<endl;
	switch(area){
		case 1: cout<<"Area comun."<<endl;break;
		case 3: cout<<"Area comun."<<endl;break;
		case 5: cout<<"Area especiifica."<<endl;break;
		case 7: cout<<"Area especifica."<<endl;break;
		default: cout<<"No nos encontramos en ese semestre."<<endl;break;
	}

	return 0;
}

