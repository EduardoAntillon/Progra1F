#include <iostream>
using namespace std;

void Solicitud();
double FuncionSuma(double);
double FuncionMayor(double);
float FuncionPromedio(float);
void FuncionBusqueda(double);

double arreglo[5], suma, ele_m, aux;
int i, opcion, num, continuar;
float promedio;

int main() {
	
	do{
		Solicitud();
		cout<<endl;
		cout<<"Opcion: ";cin>>opcion;
		
		if(opcion==1){
			FuncionSuma(suma);
		}
		else if(opcion==2){
			FuncionMayor(aux);
		}
		else if(opcion==3){
			FuncionPromedio(promedio);
		}
		else if(opcion==4){
			FuncionBusqueda(num);
		}
		else {
			cout<<"Opcion no valida."<<endl;
		}
		cout<<endl;
		cout<<"Desea continuar: Si(1) No(0)."<<endl;
		cin>>continuar;
		
		system("cls");

	} while(continuar==1);
	
	return 0;
}
void Solicitud(){
	cout<<"Ingrese que desea realizar: "<<endl;
	cout<<endl;
	cout<<"Ingresar cinco numeros para sumarlos: (1)."<<endl;
	cout<<"Encontrar el elemento mayor de un vector generado de 5 elementos: (2)."<<endl;
	cout<<"Crear un promedio de 5 numeros: (3)."<<endl;
	cout<<"Buscar un numero de un vector de 10 elementos: (4)."<<endl;
}
double FuncionSuma(double){
	double suma = 0;
	
	cout<<"Ingrese cinco numeros para sumar: "<<endl;
	cout<<endl;
	
	for(i=0;i<5;i++){
		cout<<"Elemento "<<i+1<<": ";
		cin>>arreglo[i];
	}
	for(i=0;i<5;i++){
		suma+=arreglo[i];
	}
	cout<<"La suma es: "<<suma;
	
	return suma;
}
double FuncionMayor(double){
	
	cout<<"Ingrese los elementos del vector: "<<endl;
	
	for(i=0;i<5;i++){
		cout<<"Elemento "<<i+1<<": ";
		cin>>arreglo[i];
	}
	for(i=0;i<5;i++){
		if(arreglo[i]>ele_m){
			ele_m = arreglo[i];
		}
	}
	cout<<"El elemento mayor es: "<<ele_m;
	
	return ele_m;
}
float FuncionPromedio(float){
	float promedio;
	
	cout<<"Ingrese los 5 numeros para el promedio: ";
	
	for(i=0;i<5;i++){
		cout<<"Elemento "<<i+1<<": ";
		cin>>arreglo[i];
	}
	for(i=0;i<5;i++){
		suma+=arreglo[i];
	}
	promedio = suma/5;
	
	cout<<"El promedio es: "<<promedio;
	
	return promedio;
}
void FuncionBusqueda(double){
	bool status = false;
	int arreglo[10] = {-1,0,45,-6,6,36,72,28,81,16};
	double num;
	
	cout<<"Ingrese un numero entero para verificar si pertenece al vector programado: ";
	cin>>num;
	
	for(i=0;i<10;i++){
		if(num==arreglo[i]){
			status = true;
			break;
		}
		
	}
	if(status==true){
		cout<<"Felicidades."<<endl;
	}
	else{
		cout<<"Mala suerte."<<endl;
	}
}
