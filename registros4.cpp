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

    int maxMedallas = 0;
    int atletaMedallas; 
    bool encontrado = false;

    for (int i = 0; i < n; i++){
        if (atletas[i].pais == paisIngresado){
            encontrado = true;
            cout<<"Nombre: "<<atletas[i].nombres<<endl;
            cout<<"Pais: "<<atletas[i].pais<<endl;
            cout<<"Disciplina: "<<atletas[i].disciplina<<endl;
            cout<<"Numero de medallas: "<<atletas[i].numMedallas<<endl;
            cout<<endl;

            if (atletas[i].numMedallas > maxMedallas){
                maxMedallas = atletas[i].numMedallas;
                atletaMedallas = i;
            }
        }
    }

    if (encontrado == false){
        cout<<"No se encontro un atleta de ese pais"<<endl;
    }else{
        cout<<"Atleta con mas madallas del pais "<<paisIngresado<<" : "<<endl;
        cout<<"Nombre: "<<atletas[atletaMedallas].nombres<<endl;
        cout<<"Pais: "<<atletas[atletaMedallas].pais<<endl;
        cout<<"Disciplina: "<<atletas[atletaMedallas].disciplina<<endl;
        cout<<"Numero de medallas: "<<atletas[atletaMedallas].numMedallas<<endl;
    }
    
    return 0;
}