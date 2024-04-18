#include <iostream>
#include <windows.h>
using namespace std;

void Menu();
void gotoxy(int x, int y);

int x, y;

int main() {
	
	gotoxy(x,y);
	Menu();
	
	return 0;
}
void Menu(){
	int opcion, selector, coordx, coordy, i, continuar; 
	string nombre, palabra;
	double num;
	do{
		cout<<"Elija uno de los dos menus: "<<endl;
		cout<<endl;
		cout<<"Menu 1. (1)"<<endl;
		cout<<"Menu 2. (2)"<<endl;
		cout<<endl;
		cout<<"Opcion: ";cin>>opcion;
		cout<<endl;
		if(opcion==1){
			cout<<"Opciones del menu 1:"<<endl;
			cout<<endl;
			cout<<"Ingresar dos numeros, como coordenadas para imprimir: Hola mundo (1)."<<endl;
			cout<<"Ingresar un numero para imprimirlo en el centro de la pantalla (maximize la consola y desplazece hasta arriba si no lo esta, por favor). (2)"<<endl;
			cout<<"Ingresar una palabra para imprimirla 10 veces en cualquier parte de la pantalla. (3)"<<endl;
			cout<<endl;
			cout<<"Opcion: ";cin>>selector;cout<<endl;
			switch(selector){
			case 1: 
				cout<<"Coordenada en x:";cin>>coordx;cout<<endl;
				cout<<"Coordenada en y:";cin>>coordy;cout<<endl;
				gotoxy(coordx, coordy);
				cout<<"Hola mundo. "<<endl;break;
			case 2:
				cout<<"Numero a mostrar: ";cin>>num;
				gotoxy(80,30);
				cout<<num<<endl;break;
			case 3:
					cout<<"Ingresar palabra: ";cin>>palabra;cout<<endl;
					cout<<"Coordenada en x:";cin>>coordx;cout<<endl;
					cout<<"Coordenada en y:";cin>>coordy;cout<<endl;
					gotoxy(coordx,coordy);
					for(i=1;i<=10;i++){
						cout<<palabra<<endl;
					}break;
			}
		}
		else if(opcion==2){
			cout<<"Menu 2: "<<endl;
			cout<<endl;
			cout<<"Dirigirse a las coordenadas (30, 30) e imprimir el caracter Ascii raro. (1) "<<endl;
			cout<<"Saludar a un compañero desde la consola (2)"<<endl;
			cout<<endl;
			cout<<"Opcion: ";cin>>selector;
			cout<<endl;
			switch(selector){
			case 1:
				gotoxy(30,30);
				cout<<"@";
				cout<<endl;break;
			case 2: 
					cout<<"Ingrese el nombre de un compañero para saludar: ";cin>>nombre;
					cout<<endl;
					cout<<"Hola "<<nombre<<endl;break;
			}	
		}
		cout<<endl;
		cout<<"Desea continuar: Si (1), No (0)."<<endl;
		cout<<endl;
		cout<<"Decision: ";cin>>continuar;
		cout<<endl;
	} while(continuar==1);
	
}
void gotoxy(int x, int y){
	
	COORD coord;
	coord.X = x;
	coord.Y = y;
		SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),coord);
}
