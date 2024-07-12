#include <iostream>
using namespace std;

int main(){
    struct Empleado{
        string nombre;
        char sexo;
        float sueldo;
    };

    int n;
    cout<<"Ingrese el numero de trabajadores: ";cin>>n;
    
    Empleado Datos[n];

    for (int i = 0; i < n; i++){
        cin.ignore(); 
        cout<<"Ingrese el nombre del empleado "<<i + 1<<" : "; 
        getline(cin, Datos[i].nombre);
        cout<<"Ingrese el sexo del empleado "<<i + 1<<" Masculino(M)  Femenino(F): ";cin>>Datos[i].sexo;
        cout<<"Ingrese el sueldo del empleado "<<i + 1<<" : ";cin>>Datos[i].sueldo;
        cout<<endl;
    }
    
    return 0;
}