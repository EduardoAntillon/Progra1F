#include <iostream>
using namespace std;

void Datos();
void Funcion(int num);

int i, num, fact = 1, selector, multiplo;

int main() {
	
	Datos();
	Funcion(num);
	
	return 0;
}
void Datos(){
	cout<<"Ingrese un numero entero: ";cin>>num;cout<<endl;
	
	cout<<"Elija una funcion a realizar: "<<endl;
	cout<<endl;
	cout<<"Buscar los primeros 10 multiplos del numero. (1)"<<endl;
	cout<<"Calcular el factorial del numero. (2): "<<endl;
	cout<<"Los numeros de la serie de Fibonacci con "<<num<<" terminos. (3)"<<endl;
	cout<<endl;
}
void Funcion(int num){
	int x = 0, y = 1, z = 1;
	
	cout<<"Opcion: ";cin>>selector;
	cout<<endl;
	
	if((num==1)&&(selector==3)){
		cout<<"El numero de la serie de Fibonacci con "<<num<<" termino: "<<endl;
		cout<<endl;
		cout<<"0";
	}
	else if((num==2)&&(selector==3)){
		cout<<"Los numeros de la serie de Fibonacci con "<<num<<" terminos: "<<endl;
		cout<<endl;
		cout<<"0, 1";
	}
	else{
		switch (selector){
		case 1: 
			cout<<"Los 10 primeros multiplos de "<<num<<" son: "<<endl;
			cout<<endl;
			for(i=1;i<=10;i++){
				multiplo=num*i;
				cout<<multiplo<<endl;
			}  
			break;
			
		case 2: 
			for(i=1;i<=num;i++){
				fact*=i;
			}
			cout<<"El factorial del numero es: "<<fact<<endl; 
			break;
			
		case 3:
			cout<<"Los numeros de la serie de Fibonacci con "<<num<<" terminos: "<<endl;
			cout<<endl;
			cout<<"0, 1, ";
			for(i=1;i<=num-2;i++){
				
				z = x + y;
				
				x = y;
				y = z;
				
				if(i==num-2){
					cout<<z;
				}
				else{
					cout<<z<<", ";
				}
			} 
			break;
			
		default: cout<<"Opcion no valida.";
		}
	}
}
