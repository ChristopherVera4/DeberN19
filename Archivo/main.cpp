#include <iostream>
#include <stdlib.h>
#include <fstream>
using namespace std;
void archivo();
void lectura();
int main(){
 cout<<"** INGRESO DE DATOS PERSONALES **\n";
  archivo();
cout<<"** LECTURA DE ARCHIVO **\n";
  lectura();
  return 0;
}
void archivo(){
ofstream archivoprueba;
archivoprueba.open("Datos.txt",ios::out);
string nombre;
string apellido;
int x;
char f;
  do{
    cout<<"Ingrese el nombre: \n";
    getline(cin,nombre);
    cout<<"Ingrese el apellido: \n";
    getline(cin,apellido);
    cout<<"Ingrese la edad: \n";
    cin>>x;
    archivoprueba<<"Nombre: "<<nombre<<"\n"<<"Apellido: "<<apellido<<"\n"<<"Edad: "<<x<<endl;
    cout<<"Desea escribir mas nombres:  \n";
    cout<<"s/n\n";
    cin>>f;
    cin.ignore();
  }while(f=='s');
}
void lectura(){
  string texto;
  ifstream lectura;
  lectura.open("Datos.txt",ios::in);
  while(!lectura.eof()){
    getline(lectura,texto);
    cout<<texto<<endl;
  }
  lectura.close();
}




