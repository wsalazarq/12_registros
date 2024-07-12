#include <iostream>
using namespace std;

struct persona{
    string nombre;
    int diaNacimeinto;
    int mesNacimiento;
    int anioNacimiento;
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
        cout<<"Ingrese el año de nacimiento de la persona "<<i + 1<<" : ";cin>>Datos[i].anioNacimiento;
        cout<<endl;
    }

    int mes;
    do {
        cout<<"Ingrese el numero de un mes: ";cin>>mes;
        if (mes != 0) {
            
            for (int i = 0; i < n; i++) {
                if (Datos[i].mesNacimiento == mes) {
                 
                    cout << "Nombre: " << Datos[i].nombre << endl;
                    cout << "Dia de nacimiento: "<<Datos[i].diaNacimeinto<<endl;
                    cout << "Mes de nacimiento: "<<Datos[i].mesNacimiento<<endl;
                    cout << "Año de nacimiento: "<<Datos[i].anioNacimiento<<endl;
                    cout << endl;
                }
            }
        }
    } while (mes != 0);
    
}    