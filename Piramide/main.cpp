#include <iostream>
#include <stdlib.h>
#include <fstream>
using namespace std;
void archivo();
void lectura();
char triangulo(int x);
int main(){
  int n;
  cout<<"** PIRAMIDE **\n";
  archivo();
}
void archivo(){
ofstream archivoprueba;
archivoprueba.open("Piramide.txt",ios::out);
int n;
cout << "Ingrese un numero entero positivo\n";
  cin >>n;
	archivoprueba<<triangulo(n);

archivoprueba.close();
}
void lectura(){
  string texto;
  ifstream lectura;
  lectura.open("Piramide.txt",ios::in);
  while(!lectura.eof()){
    getline(lectura,texto);
    cout<<texto<<endl;
  }
  lectura.close();
}


char triangulo(int x){
  if (x % 2 == 0) {

		for (int i = 0; i < x; i++) {
			i--;
			cout << "\t\t";
			for (int j = 0; j < x; j++)
			{
				if (x % 2 == 0) {
					cout << "* ";
				}
				else {
					cout << "- ";
				}
			}
			cout << "\n";
			x--;
		}
	}
	else {

		for (int i = 0; i < x; i++) {
			i--;
			cout << "\t\t";
			for (int j = 0; j < x; j++)
			{
				if (x % 2 != 0) {
					cout << "* ";
				}
				else {
					cout << "- ";
				}
			}
			cout << "\n";
			x--;
		}

	}
  return 0;
}



