#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	int num1=10, num2=10;
	
	cout<<"Con ciclo while: "<<endl;
	cout<<endl;
	while(num1 > 0){
		cout<<"El numero es: "<<num1<<endl;
		num1--;
	};
	cout<<endl;
	cout<<"Con ciclo do-while: "<<endl;
	cout<<endl;
	do{
		cout<<"El numero es: "<<num2<<endl;
		num2--;
	} while(num2 > 0);
	
	return 0;
}

