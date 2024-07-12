#include <iostream>
using namespace std;

struct persona{
    string nombre;
    int diaNacimiento;
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

        do{
            cout<<"Ingrese el dia de nacimiento de la persona "<<i + 1<<" : ";cin>>Datos[i].diaNacimiento;
            if (Datos[i].diaNacimiento < 1 || Datos[i].diaNacimiento > 31){
                cout<<"El dia tiene que ser entre 1 y 31"<<endl;
            }
        } while (Datos[i].diaNacimiento < 1 || Datos[i].diaNacimiento > 31);

        do{
            cout<<"Ingrese el mes de nacimiento de la persona "<<i + 1<<" : ";cin>>Datos[i].mesNacimiento;
            if (Datos[i].mesNacimiento < 1 || Datos[i].mesNacimiento > 12){
                cout<<"El mes tiene que ser entre 1 y 12"<<endl;
            }
        } while (Datos[i].mesNacimiento < 1 || Datos[i].mesNacimiento > 12);

        cout<<"Ingrese el año de nacimiento de la persona "<<i + 1<<" : ";cin>>Datos[i].anioNacimiento;
        cout<<endl;
    }

    int mes;
    do {
        cout<<"Ingrese el numero de un mes (1 - 12): ";cin>>mes;
        if (mes < 0 || mes > 12){
            cout<<"El mes tiene que ser entre 1 y 12"<<endl;
        }else if (mes != 0){
            bool encontrado = false;
            for (int i = 0; i < n; i++) {
                if (Datos[i].mesNacimiento == mes) {
                    encontrado = true;
                    cout<<"Nombre: " << Datos[i].nombre << endl;
                    cout<<"Dia de nacimiento: "<<Datos[i].diaNacimiento<<endl;
                    cout<<"Mes de nacimiento: "<<Datos[i].mesNacimiento<<endl;
                    cout<<"Año de nacimiento: "<<Datos[i].anioNacimiento<<endl;
                    cout<< endl;
                }
            }
            if (encontrado == false) {
                cout<<"No hay personas que nacieron en el mes ingresado"<<endl;
            }
        }
        
    } while (mes != 0);
    
    return 0;
}    