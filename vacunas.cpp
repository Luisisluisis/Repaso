#include <iostream>

using namespace std;

int main(){

    float pesobebe, mesesbebe, dosisvacuna;

    cout<<"Ingrese el peso del bebé en Kg: "<<endl;
    cin>>pesobebe;
    cout<<"Ingrese la edad en meses del bebe: "<<endl;
    cin>>mesesbebe;

    dosisvacuna = ((pesobebe+10)/(mesesbebe*10))*8;

    cout<<"La dosis del bebe es de: "<<dosisvacuna;
    return 0;
}

