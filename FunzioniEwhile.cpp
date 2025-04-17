#include<iostream>
using namespace std;

int chiediNumero(){
    int numero;
    cout<<"Inserisci un numero (interrompi se 0): "<<endl;
    cin>>numero;
    return numero;
}

int main(){
    int num;    
    int somma;
    
    //cout<<"Inserisci un numero (interrompi se 0): "<<endl;
    //cin>>num;

    num = chiediNumero();

    somma = num;
    while(num!=0) {
        num = chiediNumero();
    
        somma = somma + num;
    }

    cout<<"La somma finale dei numeri e' "<<somma<<endl; 

    return 0; 
}

// tipo_di_valore_restituito nome_funzione(parametri){
//    // corpo funnzione
//    return valori
// }


// while (num > 0 ) {  ciao }
// finche' il numero e' maggiore di zero ripeti --> ciao (tutto cio' che e' nelle parentesi)