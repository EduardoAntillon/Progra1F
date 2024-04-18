#include <iostream>
#include <cmath>

using namespace std;


double Hipotenusa(double ladox, double ladoy);
float Angulo(float angulo1, float angulo2);
int Factorial(int num);
float Vuelto(float dinero1, float dinero2);

double x, y, ladox, ladoy;
float alfa, beta, angulo1, angulo2, dinero1, dinero2;
int num;

int main() {
	int selector, continuar;	
	do{
		cout<<"Seleccione del siguiente menu una opcion: "<<endl;
		cout<<"Hallar la hipotenusa de un triangulo rectangulo. (1)"<<endl;
		cout<<"Hallar el angulo faltante de un triangulo. (2)"<<endl;
		cout<<"Hallar el factorial de un numero. (3)"<<endl;
		cout<<"Hallar un vuelto. (4)"<<endl;
		cout<<endl;
		cout<<"Opcion: ";cin>>selector;
		if(selector == 1){
			Hipotenusa(ladox, ladoy);
		}
		else if(selector == 2){
			Angulo(angulo1,angulo2);
		}
		else if(selector == 3){
			Factorial(num);
		}
		else if(selector == 4){
			Vuelto(dinero1,dinero2);
		}
		cout<<"Desea repetir: Si.(1) No(0): ";cin>>continuar;cout<<endl;
		system("cls");
	} while(continuar==1);
	return 0;
	
}
double Hipotenusa(double ladox, double ladoy){
	double hip, hip_2;
	cout<<"Ingrese el lado horizontal: ";cin>>x;cout<<endl;
	cout<<"Ingrese el lado vertical: ";cin>>y;cout<<endl;
	
	hip_2 = pow(x,2) + pow(y,2);
	hip = sqrt(hip_2);
	
	cout<<"La hipotenusa tiene el valor de: "<<hip<<endl;
	cout<<endl;
	return hip;
}
float Angulo(float angulo1, float angulo2){
	float gamma;
	cout<<"Ingrese los angulos en grados sexagesimales: "<<endl;
	cout<<"Angulo 1: ";cin>>alfa;cout<<endl;
	cout<<"Angulo 2: ";cin>>beta;cout<<endl;
	if((alfa<0)||(beta<0)){
		cout<<"Angulos no validos."<<endl;
	}else{
		gamma = 180-alfa-beta;
		cout<<"EL angulo faltante es de: "<<gamma<<" grados."<<endl;
	}
	cout<<endl;
	return gamma;
}
int Factorial(int num){
	int i, aux = 1;
	cout<<"Escriba el numero: ";cin>>num;
	for(i=1;i<=num;i++){
		aux*=i;
	}
	cout<<"El factorial del numero es: "<<aux<<endl;
		
	cout<<endl;
	return aux;
}
float Vuelto(float dinero1, float dinero2){
	float dinero3;
	cout<<"Digite cantidad a pagar: ";cin>>dinero1;
	cout<<"Digite cantidad que se pago: ";cin>>dinero2;
	cout<<endl;
	if(dinero1<dinero2){
		dinero3 = dinero2-dinero1;
		cout<<"El vuelto es de: "<<dinero3<<endl;
	}
	else if(dinero1>dinero2){
		dinero3 = dinero1-dinero2;
		cout<<"Faltan: "<<dinero3<<endl;
	}
	cout<<endl;
	return dinero3;
}
