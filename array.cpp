/* Creare un array di interi , assegnarci i valori 17,22,73 e stamparli uno ad uno a schermo */
#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;

int main(){
    int ris=2;
    while( ris < 10){
        
        srand(time(NULL)); // PRIMA INIZIALIZZA LA GENERAZIONE DI VALORI CASUALI
        ris = rand()%10+1;
        cout<<ris<<endl; //STAMPA UN NUMERO COMPRESO TRA 0 E 9
    }  
}