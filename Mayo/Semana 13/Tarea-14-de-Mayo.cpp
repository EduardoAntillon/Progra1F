#include <iostream>
using namespace std;

void Datos();
void FuncionRevez(double arreglo[], int size);
void FuncionClon(double arreglo4[],double arreglo2[], int size);
void FuncionPositivo(double arreglo[], int size);
void FuncionSeparador(double arreglo2[], double arreglo3[], int arreglo1[], int size);

int i, n, selector, size, continuar, arreglo1[100];
double arreglo2[100], arreglo3[100], arreglo[100], arreglo4[100];

int main() {
	do{
		cout<<"Elija una opcion para realizar: "<<endl;
		cout<<endl;
		cout<<"Rellenar un vector al revez:(1)"<<endl;
		cout<<"Clonar un vector: (2)"<<endl;
		cout<<"Convertir todos los numeros de un vector a numeros positivos: (3)"<<endl;
		cout<<"Separar la parte entera y decimal de un vector de numeros en otros dos: (4)"<<endl;
		cout<<endl;
		cout<<"Opcion: ";cin>>selector;
		
		if(selector==1){
			FuncionRevez(arreglo, size);
		}
		else if(selector==2){
			FuncionClon(arreglo4,arreglo2, size);
		}
		else if(selector==3){
			FuncionPositivo(arreglo, size);
		}
		else if(selector==4){
			FuncionSeparador(arreglo2,arreglo3,arreglo1, size);
		}
		else{
			cout<<"Opcion no valida."<<endl;
		}
		
		cout<<"Desea repetir: Si.(1) No(0): ";cin>>continuar;cout<<endl;
		system("cls");
	} while(continuar==1);
	
	return 0;
}
void FuncionRevez(double arreglo[],int size){
	cout<<"Rellene un vector de atras hacia delante: "<<endl;
	cout<<"Numero de elementos del vector: ";cin>>n;
	cout<<endl;
	for(i=n-1;i>=0;i--){
		cout<<"Elemento: "<<i+1<<": ";cin>>arreglo[i];		
	}
	cout<<"El vector generado es: "<<endl;
	
	for(i=0;i<n;i++){
		cout<<arreglo[i]<<endl;
	}
}
void FuncionClon(double arreglo4[],double arreglo2[], int size){
	cout<<"Rellene un arreglo para clonarlo posteriormante: "<<endl;
	cout<<"Digite el numero de elementos: ";cin>>n;cout<<endl;
	for(i=0;i<n;i++){
		cout<<"Elemento "<<i+1<<": ";cin>>arreglo4[i];
	}
	for(i=0;i<n;i++){
		arreglo2[i]=arreglo4[i];
	}
	cout<<endl;
	
	cout<<"El vector clonado es: "<<endl;
	for(i=0;i<n;i++){
		cout<<arreglo2[i]<<endl;
	}	
}
void FuncionPositivo(double arreglo[], int size){
	cout<<"Ingrese el numero de elementos del vector: ";cin>>n;cout<<endl;
	cout<<"Ingrese los elementos del vector: "<<endl;
	
	for(i=0;i<n;i++){
		cout<<"Elemento: "<<i+1<<":";cin>>arreglo[i];
	}
	cout<<endl;
	cout<<"El vector con todos los elementos positivos es: "<<endl;
	for(i=0;i<n;i++){
		if(arreglo[i]<0){
			arreglo[i]*=-1;
		}
		cout<<arreglo[i]<<endl;
	}	
}
void FuncionSeparador(double arreglo2[], double arreglo3[], int arreglo1[], int size){
	cout<<"Digite el numero de elementos del vector a generar: ";cin>>n;
	
	cout<<"Digite los elementos del vector: "<<endl;
	
	for(i=0;i<n;i++){
		cout<<"Elemento "<<i+1<<":  ";cin>>arreglo2[i];
	}
	for(i=0;i<n;i++){
		arreglo1[i]=arreglo2[i];
	}
	cout<<endl;
	for(i=0;i<n;i++){
		cout<<"La parte entera de los elementos es: "<<arreglo1[i]<<endl;
	}
	cout<<endl;
	for(i=0;i<n;i++){
		arreglo3[i] = arreglo2[i] - arreglo1[i];
		cout<<"La parte decimal de los elementos es: "<<arreglo3[i]<<endl;
	}	
}
