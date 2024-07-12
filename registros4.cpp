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


    return 0;
}