#include <iostream>
using namespace std;

struct persona{
    string nombre;
    int diaNacimeinto;
    int mesNacimiento;
    int AnioNacimiento;
};

int main(){
    
    int n;
    cout<<"Ingrese el numero de personas: ";cin>>n;
    persona Datos[n];

    for (int i = 0; i < n; i++){
        cin.ignore(); 
        cout<<"Ingrese el nombre de la persona "<<i + 1<<" : "; 
        getline(cin, Datos[i].nombre);
        cout<<"Ingrese el dia de nacimiento de la persona "<<i + 1<<" : ";cin>>Datos[i].diaNacimeinto;
        cout<<"Ingrese el mes de nacimiento de la persona "<<i + 1<<" : ";cin>>Datos[i].mesNacimiento;
        cout<<"Ingrese el año de nacimiento de la persona "<<i + 1<<" : ";cin>>Datos[i].AnioNacimiento;
        cout<<endl;
    }
}    