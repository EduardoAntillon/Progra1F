#include <iostream>
using namespace std;

int main() {
	int x;
	
	cout<<"Ingresar año."<<endl;
	cin>>x;
	
	if(x%4 == 0){
		cout<<"El año es bisiesto."<<endl;
	}
	else{
		cout<<"El año no es bisiesto."<<endl;
	}
	
	
	
	return 0;
}

