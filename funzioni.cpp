#include <iostream>
using namespace std;

int somma(int a, int b) {
    return a + b;
}

int main (){
    int primonumero;
    cout<<"Inserisci il primo numero da sommare : "<<endl;
    cin>>primonumero;
    
    int secondonumero;
    cout<<"inserisci il secondo numero da sommare : "<<endl;
    cin>>secondonumero;
    cout<<"La somma dei numeri e : "<<somma(primonumero, secondonumero)<<endl;
    return 0;
    }

