#include <iostream>
using namespace std;

void notas(float nota_[]);
void funcionpromedio(float nota_[], float suma);
float Mostrar_datos(float promedio);

int i, suma=0;
float nota_[100], promedio;
int main() {
	
	notas(nota_);
	funcionpromedio(nota_[]);
	Mostrar_datos(promedio);

	return 0;
}
void notas(float nota_[]){
	cout<<"Ingrese las notas del alumno: "<<endl;
	cout<<endl;
		for(i=0;i<5;i++){
			cout<<"Ingrese la nota "<<i+1<<": ";cin>>nota_[i];
		}
}
void Funcionpromedio(float, float){
		
		for(i=0;i<5;i++){
			suma+=nota_[i];
		}
		promedio = suma/5;		
		cout<<"El promedio es: "<<promedio;
	}
float Mostrar_datos(float promedio){
	cout<<"El promedio es: "<<promedio<<endl;
	
	return promedio;
}
