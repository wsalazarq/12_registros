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

    int maxVenA = 0, pos = 0;
    
    for (int i = 0; i < n; i++){
        int VenA = 0;

        for (int j = 0; j < 12; j++){
            VenA = VenA + EMPLEADO[i].ventas[j];
        }

        if (VenA > maxVenA){
            maxVenA = VenA;
            pos = i;
        }
       
       if (VenA > 100){
            EMPLEADO[i].salario = EMPLEADO[i].salario * 1.10;
        }
    }

    cout<<"Venta Anual Maxima"<<endl;
    cout<<"Numero: "<<EMPLEADO[pos].numero<<endl;
    cout<<"Nombre: "<<EMPLEADO[pos].nombre<<endl;

    cout<<"Ventas menores a 30 unidades en el mes de diciembre: "<<endl;
    for (int i = 0; i < n; i++){
        int ventasI = EMPLEADO[i].ventas[11];

        if (ventasI < 30){
            cout<<"Numero: "<<EMPLEADO[i].numero<<endl;
            cout<<"Nombre: "<<EMPLEADO[i].nombre<<endl;
        }
    }
    return 0; 
}