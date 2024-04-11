#include <iostream>
using namespace std;

void FuncionOpcion();

int main() {
	cout<<"Elija una opcion del siguente menu: "<<endl;
	
	cout<<"Digitar un numero. (1)"<<endl;
	cout<<"Digitar una palabra. (2)"<<endl;
	cout<<"Digitar un letra. (3)"<<endl;
	
	
	FuncionOpcion();
	
	return 0;
}
void FuncionOpcion(){
	int selector, num, continuar;
	string palabra;
	char letra;
	
	cout<<"Opcion: ";cin>>selector;cout<<endl;
	do{
		switch(selector){
			case 1:
				cout<<"Numero: "<<endl;
				
				cin>>num;cout<<endl; 
				cout<<"Numero digitado: "<<num<<endl;break;
			case 2:
				cout<<"palabra: "<<endl;
				cin>>palabra;cout<<endl;
				cout<<"Palabra digitada: "<<palabra<<endl;
				 
				break;
			case 3:
				cout<<"letra: ";cin>>letra;cout<<endl;
				cout<<"Letra digitada: "<<palabra<<endl;break;
				
			default:
				cout<<"Opcion no existente."<<endl;
		}
		cout<<"Desea continuar. Si: (1) No: (0)"<<endl;
		cin>>continuar;
		if(continuar==0){
			cout<<"Finalizacion del programa"<<endl;
		}
		else if((continuar!=0)&&(continuar!=1)){
			cout<<"Eleccion no existente."<<endl;
		}
	} while(continuar==1);
	
}
