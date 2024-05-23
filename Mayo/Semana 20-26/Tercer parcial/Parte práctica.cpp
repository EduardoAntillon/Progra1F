#include <iostream>
#include <windows.h>
#include <time.h>
#include <string.h>

using namespace std;

void gotoxy(int x, int y);
void FuncionInicial();
void FuncionInterfaz(char MatrizT[3][3]);
int FuncionRemplazo(int pos, int x, int y);
int FuncionVerificar();

int x, y, dado, i, j, opcion;
char turno, pregunta;
char MatrizT[3][3], auxlr;

int main() {
	FuncionInicial();
	FuncionInterfaz(MatrizT);
	return 0;
}

void FuncionInicial() {
	auxlr = '1';
	
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			MatrizT[i][j] = auxlr++;
		}
	}
	
	srand(time(NULL));
	dado = 1+ rand()%(100);
	
	if(dado%2==0){
		turno = 'X';
	}
	else{
		turno = 'O';
	}
}

void FuncionInterfaz(char MatrizT[3][3]){
	bool estadoColumna = true, repeticion = true;
	
	do{
		int coordx = 70, coordy = 20;
		
		gotoxy(coordx-3,coordy-2);
		cout<<"El turno es de: "<<turno;
		
		for(i=0;i<3;i++){
			gotoxy(coordx,coordy);
			
			for(j=0;j<3;j++){
				if(j<2){
					if(estadoColumna==true){
						cout<<" "<<MatrizT[i][j]<<" ";
						estadoColumna=false;
					}
					else{
						cout<<char(186)<<" "<<MatrizT[i][j]<<" "<<char(186);
						estadoColumna = true;
					}
				}
				else{
					cout<<" "<<MatrizT[i][j]<<endl;
				}
			}
			
			if(i < 2){
				coordy+=2;
				gotoxy(coordx,coordy-1);
				cout<<char(205)<<char(205)<<char(205)<<char(206)<<char(205)<<char(205)<<char(205)<<char(206)<<char(205)<<char(205)<<char(205)<<endl;
			}		
		}
		
		if(FuncionVerificar()){
			gotoxy(coordx-2,coordy+2);
			cout<<"El ganador es: "<<turno;
			
			gotoxy(coordx-7,coordy+3);
			cout<<"¿Desea jugar nuevamente? s/n "; cin>>pregunta;
			
			if(pregunta == 's'){
				opcion = -1;
			}
			else {
				opcion = -2;
			}
			
			repeticion = FuncionRemplazo(opcion, coordx, coordy);
		}
		else {
			gotoxy(coordx-5,coordy+2);
			cout<<"Posicion seleccionada: ";cin>>opcion;
			repeticion = FuncionRemplazo(opcion, coordx, coordy);
		}
		
		system("cls");
		
	} while(repeticion == true);
	
}

int FuncionRemplazo(int pos, int x, int y){
	bool repetirOpcion = false;
	
	if((pos==0)||(pos>9)){
		repetirOpcion = true;
	}
	else {
		if(pos == -1){
			repetirOpcion = true;
			FuncionInicial();
		}
		
		if(pos == -2){
			repetirOpcion = false;
		}
		else {
			switch(pos){
			case 1:
				if(MatrizT[0][0] == 'X' || MatrizT[0][0] == 'O'){
					repetirOpcion = true;
				}
				else {
					MatrizT[0][0] = turno;
					repetirOpcion = FuncionVerificar();
				}
				
				break;
				
			case 2:
				if(MatrizT[0][1] == 'X' || MatrizT[0][1] == 'O'){
					repetirOpcion = true;
				}
				else {
					MatrizT[0][1] = turno;
					repetirOpcion = FuncionVerificar();
				}
				
				break;
				
			case 3:
				if(MatrizT[0][2] == 'X' || MatrizT[0][2] == 'O'){
					repetirOpcion = true;
				}
				else {
					MatrizT[0][2] = turno;
					repetirOpcion = FuncionVerificar();
				}
				
				break;
				
			case 4:
				if(MatrizT[1][0] == 'X' || MatrizT[1][0] == 'O'){
					repetirOpcion = true;
				}
				else {
					MatrizT[1][0] = turno;
					repetirOpcion = FuncionVerificar();
				}
				
				break;
				
			case 5:
				if(MatrizT[1][1] == 'X' || MatrizT[1][1] == 'O'){
					repetirOpcion = true;
				}
				else {
					MatrizT[1][1] = turno;
					repetirOpcion = FuncionVerificar();
				}
				
				break;
				
			case 6:
				if(MatrizT[1][2] == 'X' || MatrizT[1][2] == 'O'){
					repetirOpcion = true;
				}
				else {
					MatrizT[1][2] = turno;
					repetirOpcion = FuncionVerificar();
				}
				
				break;
				
			case 7:
				if(MatrizT[2][0] == 'X' || MatrizT[2][0] == 'O'){
					repetirOpcion = true;
				}
				else {
					MatrizT[2][0] = turno;
					repetirOpcion = FuncionVerificar();
				}
				
				break;
				
			case 8:
				if(MatrizT[2][1] == 'X' || MatrizT[2][1] == 'O'){
					repetirOpcion = true;
				}
				else {
					MatrizT[2][1] = turno;
					repetirOpcion = FuncionVerificar();
				}
				
				break;
				
			case 9:
				if(MatrizT[2][2] == 'X' || MatrizT[2][2] == 'O'){
					repetirOpcion = true;
				}
				else {
					MatrizT[2][2] = turno;
					repetirOpcion = FuncionVerificar();
				}
				
				break;			
			};
			
			if(repetirOpcion == false){
				repetirOpcion = true;
				
				if(turno == 'X'){
					turno = 'O';
				}
				else {
					turno = 'X';
				}
			}
			
		}		   
	}
	
	return repetirOpcion;
}

int FuncionVerificar() {
	bool completo = false;
	
	if(MatrizT[0][0] == 'X' || MatrizT[0][0] == 'O'){
		if(MatrizT[0][0] == MatrizT[0][1] && MatrizT[0][0] == MatrizT[0][2]){
			completo = true;
		}
	
		if(MatrizT[0][0] == MatrizT[1][0] && MatrizT[0][0] == MatrizT[2][0]){
			completo = true;
		}
	}

	if(MatrizT[1][1] == 'X' || MatrizT[1][1] == 'O'){
		if(MatrizT[1][1] == MatrizT[0][0] && MatrizT[1][1] == MatrizT[2][2]){
			completo = true;
		}
		
		if(MatrizT[1][1] == MatrizT[1][0] && MatrizT[1][1] == MatrizT[1][2]){
			completo = true;
		}

		if(MatrizT[1][1] == MatrizT[2][0] && MatrizT[1][1] == MatrizT[0][2]){
			completo = true;
		}
		
		if(MatrizT[1][1] == MatrizT[0][1] && MatrizT[1][1] == MatrizT[2][1]){
			completo = true;
		}
	}

	
	if(MatrizT[2][2] == 'X' || MatrizT[2][2] == 'O'){
		if(MatrizT[2][2] == MatrizT[2][0] && MatrizT[2][2] == MatrizT[2][1]){
			completo = true;
		}
		
		if(MatrizT[2][2] == MatrizT[0][2] && MatrizT[2][2] == MatrizT[1][2]){
			completo = true;
		}
	}
	
	return completo;
}

void gotoxy(int x, int y){	
	COORD coord;
	coord.X = x;
	coord.Y = y;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),coord);
}
