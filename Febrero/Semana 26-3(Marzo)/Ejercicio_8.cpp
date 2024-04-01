#include <iostream>
using namespace std;

int main() {
	int x, y;
	
	cout<<"Ingresar dos edades para verificar si tienen la misma edad o no."<<endl;
	
	cout<<"Primer edad: ";cin>>x;
	cout<<"Segunda edad: ";cin>>y;
	
	if(x!=y){
		cout<<"Las edades son distintas."<<endl;
	}
	else{
		cout<<"Las edades son iguales."<<endl;
	}
	
	return 0;
}

