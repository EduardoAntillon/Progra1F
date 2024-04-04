#include <iostream>
using namespace std;

int main() {
	int control = 1;
	
	do{
		cout<<"Hola estudiantes"<<endl;
		cout<<endl;
		cout<<"Bienvenidos al ciclo"<<endl;
		cout<<"¿Desea repetir?:"<<endl;
		cout<<" 1.(Si), 2. (No): ";cin>>control;
		cout<<endl;
		
		if(control==2){
			cout<<"Salimos del ciclo.";
		}
		else if((control!=1)&&(control!=2)){
			cout<<"Opcion no valida."<<endl;
		}
		cout<<endl;
	} while(control==1);
		
	
	
	
	
	
	
	
	
	
	
	return 0;
}

