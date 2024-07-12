#include <iostream>
using namespace std;

struct Empleado{
    string nombre;
    char sexo;
    float sueldo;
};

int main(){

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
    
    float MaxSalario, MinSalario;
    MaxSalario = Datos[0].sueldo;
    MinSalario = Datos[0].sueldo;
    int min = 0, max = 0;

    for (int i = 0; i < n; i++){
        
        if (Datos[i].sueldo > MaxSalario){
            MaxSalario = Datos[i].sueldo;
            max = i;
        }

        if (Datos[i].sueldo < MinSalario){
            MinSalario = Datos[i].sueldo;
            min = i;
        }
    }

    cout<<"Datos del empleado con mayor sueldo: "<<endl;
    cout<<"Nombre :"<<Datos[max].nombre<<endl;
    cout<<"Sexo :"<<Datos[max].sexo<<endl;
    cout<<"Sueldo :"<<Datos[max].sueldo<<endl;

    cout<<"Datos del empleado con menor sueldo: "<<endl;
    cout<<"Nombre :"<<Datos[min].nombre<<endl;
    cout<<"Sexo :"<<Datos[min].sexo<<endl;
    cout<<"Sueldo :"<<Datos[min].sueldo<<endl;

    return 0;
}