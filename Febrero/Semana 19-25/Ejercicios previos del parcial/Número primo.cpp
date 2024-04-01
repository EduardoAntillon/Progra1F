#include <iostream>
using namespace std;

int main() {
	int i, num, j;
	
	cout<<"Escribir un número para determinar si es primo o no: ";cin>>num;
	
	for(i=1;num>i;i++){
		while(num%i==0){
			j = i++;
		}
	}
	
	if(j==1){
		cout<<"El número es primo."<<endl;
	}
	else if((j==2)&&(num==2)){
		cout<<"El número es primo."<<endl;
	}
	else{
		cout<<"El número no es primo."<<endl;
	}
	
	return 0;
}

