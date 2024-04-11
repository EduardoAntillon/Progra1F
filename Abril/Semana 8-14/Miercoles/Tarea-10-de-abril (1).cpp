#include <iostream>
using namespace std;

void Datos();
string FuncionUnion(string palabra1, string palabra2);

string palabra1, palabra2;

int main() {
	Datos();
	FuncionUnion(palabra1,palabra2);
	
	return 0;
}
void Datos(){
	
	cout<<"Ingrese dos palabras: "<<endl;
	cout<<endl;
	cout<<"primer palabra: ";cin>>palabra1;
	cout<<"segunda palabra: ";cin>>palabra2;
	cout<<endl;
}
string FuncionUnion(string palabra1, string palabra2){
	cout<<palabra1<<palabra2<<endl;
	
	return palabra1;
	return palabra2;
}
