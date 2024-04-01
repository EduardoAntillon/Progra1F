#include <iostream>
using namespace std;

int main() {
	float nota_1, nota_2, nota_3, promedio;
	
	cout<<"Digite las 3 notas del alumno: "<<endl;
	cout<<endl;
	cout<<"Nota #1: ";cin>>nota_1;cout<<endl;
	cout<<"Nota #2: ";cin>>nota_2;cout<<endl;
	cout<<"Nota #3: ";cin>>nota_3;cout<<endl;
	
	if((nota_1 > 61)&&(nota_2 > 61)&&(nota_3 > 61)){
		promedio = (nota_1+ nota_2 + nota_3)/3;
		
		cout<<"El promedio del alumno es: "<<promedio<<endl;
	}
	else{
		cout<<"Debe tener sus cursos en limpio. "<<endl;
	}
	
	
	
	
	return 0;
}

