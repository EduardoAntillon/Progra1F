#include <iostream>
using namespace std;

int main() {
	float nota_1, nota_2, nota_3, nota_4, nota_5, promedio;
	
	cout<<"Ingresar 5 notas de un estudiante: "<<endl;
	cout<<endl;
	cout<<"Primer nota: ";cin>>nota_1;cout<<endl;
	cout<<"Segunda nota: ";cin>>nota_2;cout<<endl;
	cout<<"Tercer nota: ";cin>>nota_3;cout<<endl;
	cout<<"Cuarta nota: ";cin>>nota_4;cout<<endl;
	cout<<"Quinta nota: ";cin>>nota_5;cout<<endl;
	
	promedio = (nota_1 + nota_2 + nota_3 + nota_4 + nota_5)/5;
	
	if(promedio < 61){
		cout<<"No tiene permitido hacer su examen privado."<<endl;
	}
	else if((promedio >= 61)&&(promedio <= 75)){
		cout<<"Si realiza trabajo comunitario, puede hacer su examen privado."<<endl;
	}
	else if((promedio >= 75)&&(promedio <= 85)){
		cout<<"Promedio normal, puede hacer su examen privado."<<endl;
	}
	else if((promedio >= 85)&&(promedio <= 90)){
		cout<<"Promedio alto, si se gradúa será con honores."<<endl;
	}
	else if((promedio >= 90)&&(promedio <= 95)){
		cout<<"Promedio muy alto, si se gradúa será con máximos honores."<<endl;
	}
	else if(promedio > 95){
		cout<<"Puede exonerarse de examen privado."<<endl;
	}
	
	return 0;
}

