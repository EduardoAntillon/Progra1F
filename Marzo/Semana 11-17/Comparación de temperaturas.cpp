#include <iostream>
using namespace std;

int main(){
    double grados;
    cout<<"Ingrese la temperatura en grados celsius: "<<endl;
    cout<<endl;
	cin >>grados;
    cout<<endl;
    if(grados<2){
        cout<<"est� haciendo fr�o.";
    }else if(grados>=2 && grados<10){
        cout<<"el ambiente est� templado";
    }else if(grados>=10){
        cout<<"hace mucho calor!!!";
    }
	
	return 0;
}
