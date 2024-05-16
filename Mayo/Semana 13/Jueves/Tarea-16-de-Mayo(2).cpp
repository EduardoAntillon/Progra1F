#include <iostream>
using namespace std;

string cifrar(const string & cadena);

int main() {
	string frase, fraseCifrada;
	
	cout<<"Ingrese una frase para cifrarla: ";
	getline(cin,frase);
	
	fraseCifrada = cifrar(frase);
	cout<<endl;
	cout<<"Frase cifrada: "<<fraseCifrada;
	
	return 0;
}

string cifrar(const string & cadena){
	int longitud, i;
	string resultado = cadena;
	longitud = resultado.length();
	
	for(i=0;i<longitud;i++){
		char caracter = resultado[i];
		if((caracter=='i')||(caracter=='I')){
			resultado[i]='1';
		}
		if((caracter=='e')||(caracter=='E')){
			resultado[i]='3';
		}
		if((caracter=='a')||(caracter=='A')){
			resultado[i]='4';
		}
		if((caracter=='o')||(caracter=='O')){
			resultado[i]='0';
		}
		if((caracter=='u')||(caracter=='U')){
			resultado[i]='*';
		}
	}
	return resultado;
}
