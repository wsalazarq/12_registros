#include <iostream>
using namespace std;

struct EMP{
    int numero;
    string nombre;
    float ventas[12];
    float salario;
};

int main(){
    EMP EMPLEADO[50];
    
    int n;
    cout<<"Ingrese el numero de empleados: ";cin>>n;

    for (int i = 0; i < n; i++){
        cout<<"Ingrese el numero del empleado "<<i + 1<<" : ";cin>>EMPLEADO[i].numero;
        cin.ignore(); cout<<"Ingrese el nombre del empleado "<<i + 1<<" : "; getline(cin, EMPLEADO[i].nombre);

        for (int j = 0; j < 12; j++){
            cout<<"Ingrese las ventas del "<<j + 1<<" mes: ";cin>>EMPLEADO[i].ventas[j];
        }

        cout<<"Ingrese el salario del empleado: ";cin>>EMPLEADO[i].salario;    
        cout<<endl;    
    }

    for (int i = 0; i < n; i++){
        cout<<"Empleado: "<<i + 1<<endl;
        cout<<"Numero: "<<EMPLEADO[i].numero<<endl;
        cout<<"Nombre:"<<EMPLEADO[i].nombre<<endl;
        cout<<"Ventas: "<<endl;

        for (int j = 0; j < 12; j++){
            cout<<EMPLEADO[i].ventas[j]<<" ";
        }

        cout<<endl<<"Salario: "<<EMPLEADO[i].salario<<endl;
        cout<<endl; 
    }
    
    return 0; 
}