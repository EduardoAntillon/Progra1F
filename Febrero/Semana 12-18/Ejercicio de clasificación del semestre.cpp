#include <iostream>

using namespace std;

int main(){
	int cursos;
	
	cout<<"Bienvenido usuario, introduzca su número de cursos: ";cin>>cursos;
	cout<<endl;
	
	if(cursos == 5){
		cout<<"Primer semestre."<<endl;
	}
	if(cursos >= 7){
		cout<<"No se sabe el semestre."<<endl;
	}
	
	return 0;
}
