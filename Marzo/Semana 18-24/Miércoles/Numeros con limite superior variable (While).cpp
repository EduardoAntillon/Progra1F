#include <iostream>
using namespace std;

int main() {
	int num1=0, num2;
	
	cout<<"Ingrese un numero por favor: "<<endl;
	cin>>num2;
	
	while(num1 < num2){
		cout<<"Aun no llegamos al limite: "<<num1<<endl;
		num1++;
	}
	
	return 0;
}

