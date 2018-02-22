#include<iostream>
#include<conio.h>

using namespace std;

struct Etapas{
    int horas;
    int minutos;
    int segundos;
}etapa[3], *puntero = etapa;

void pedirDatos();
void tiempoTotal(Etapas *);


int main(){

    pedirDatos();
    tiempoTotal(puntero);

    getch();
    return 0;
}


void pedirDatos(){
    for(int i=0;i<3;i++){
        cout<<"\nEtapa Nro "<<i+1<<"\n"<<endl;
        cout<<"ingrese horas: ";
        cin>>(puntero+i)->horas;
        cout<<"ingrese minutos: ";
        cin>>(puntero+i)->minutos;
        cout<<"ingrese segundos: ";
        cin>>(puntero+i)->segundos;
    }
}

void tiempoTotal(Etapas *puntero){
    int totalhoras=0, totalmins=0, totalsegs=0;
    for(int i=0;i<3;i++){
        totalsegs += (puntero+i)->segundos;
        if (totalsegs>=60){
            totalsegs-=60;
            totalmins++;
        }
        totalmins += (puntero+i)->minutos;
        if (totalmins>=60){
            totalmins-=60;
            totalhoras++;
        }
        totalhoras += (puntero+i)->horas;
    }

    cout<<"\nEl tiempo total es: \n";
    cout<<"Horas: "<<totalhoras<<endl;
    cout<<"Minutos: "<<totalmins<<endl;
    cout<<"Segundos: "<<totalsegs<<endl;

}
