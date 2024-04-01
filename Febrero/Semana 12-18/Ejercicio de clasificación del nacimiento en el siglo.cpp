#include<iostream>

using namespace std;

int main(){
	
	int year;
	
	cout<<"Escribir año de nacimiento: ";cin>>year;cout<<endl;
	
	if(year > 2000){
		cout<<"El usuario es del siglo 21.";cout<<endl;
	}
	else{
		cout<<"El susuario se del siglo 20.";cout<<endl;
	}
	
	return 0;
}
