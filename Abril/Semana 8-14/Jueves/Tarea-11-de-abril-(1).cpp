#include <iostream>
using namespace std; 

void FuncionMenu();

int main() {
	cout<<"Elija una opcion del siguiente menu: "<<endl;
	
	FuncionMenu();
	
	return 0;
}

void FuncionMenu(){
	int selector;
	
	cout<<"Opcion 1: (1)"<<endl;
	cout<<"Opcion 2: (2)"<<endl;
	cout<<"Opcion 3: (3)"<<endl;
	cout<<"Opcion 4: (4)"<<endl;
	cout<<"Opcion 5: (5)"<<endl;
	cout<<"Opcion: ";
	cin>>selector;
	cout<<endl;
	
	switch(selector){
		case 1: 
			cout<<"Opcion 1 elegida"<<endl;break;
		case 2:
			cout<<"Opcion 2 elegida."<<endl;break;
		case 3:
			cout<<"Opcion 3 elegida."<<endl;break;
		case 4:	
			cout<<"Opcion 4 elegida."<<endl;break;
		case 5:
			cout<<"Opcion 5 elegida."<<endl;break;
	}		
}
