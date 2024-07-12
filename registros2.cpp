#include <iostream>
using namespace std;

struct persona{
    string nombre;
    char DNI[8];
    int edad;
};

int main(){
    
    int n;
    cout<<"Ingrese el numero de personas: ";cin>>n;
    persona Datos[n];

    for (int i = 0; i < n; i++){
        cin.ignore(); 
        cout<<"Ingrese el nombre de la persona "<<i + 1<<" : "; 
        getline(cin, Datos[i].nombre);
        cout<<"Ingrese el DNI de la persona "<<i + 1<<" : ";cin>>Datos[i].DNI;
        cout<<"Ingrese la edad de la persona "<<i + 1<<" : ";cin>>Datos[i].edad;
        cout<<endl;
    }
    
    return 0; 
}