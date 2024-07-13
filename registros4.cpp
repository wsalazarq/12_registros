#include <iostream>
using namespace std;

struct AT{
    string nombres;
    string pais;
    string disciplina;
    int numMedallas;
};

int main(){
    int n;
    cout<<"Ingrese el numero de atletas: ";cin>>n;
    AT atletas[n];

    for (int i = 0; i < n; i++){
        cin.ignore(); 
        cout<<"Ingrese el nombre del atleta "<<i + 1<<" : "; 
        getline(cin, atletas[i].nombres);
        cout<<"Ingrese el pais del atleta "<<i + 1<<" : ";cin>>atletas[i].pais;
        cout<<"Ingrese la disciplina del atleta "<<i + 1<<" : ";cin>>atletas[i].disciplina;
        cout<<"Ingrese el numero de medallas del atleta "<<i + 1<<" : ";cin>>atletas[i].numMedallas;
        cout<<endl;
    }

    string paisIngresado;
    cout<<"Ingrese un pais: ";cin>>paisIngresado;

    bool encontrado = false;

    for (int i = 0; i < n; i++){
        if (atletas[i].pais == paisIngresado){
            encontrado = true;
            cout<<"Nombre: "<<atletas[i].nombres<<endl;
            cout<<"Pais: "<<atletas[i].pais<<endl;
            cout<<"Disciplina: "<<atletas[i].disciplina<<endl;
            cout<<"Numero de medallas: "<<atletas[i].numMedallas<<endl;
            cout<<endl;
        }
    }
    return 0;
}