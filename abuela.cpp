#include <iostream>

using namespace std;

int main(){

    float temp, res;

    cout<<"Give me the temperature of Fahrenheit just in numbers: ";
    cin>>temp;

    res = (temp-32) / 1.8;
    cout<<"The temperature in Centigrados is: " <<res<<endl;

    return 0;
}
