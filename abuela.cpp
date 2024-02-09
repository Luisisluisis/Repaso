#include <iostream>

using namespace std;

int main(){

    float temp, res;

    cout<<"Ingrese la temperatura Fahrenheit en números: ";
    cin>>temp;

    res = (temp-32) /1.8;

    cout<<"Su temperatura en Centigrados es: "<<res<<endl;

    return 0;
}
