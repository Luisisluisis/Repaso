#include <iostream>

using namespace std;

int main(){

    int eleccion, rnd;
    char res;

    cout<<"Elije una: [1] Cara [2] Sello"<<endl;
    cin>>eleccion;
    
    if (eleccion < 1 || eleccion > 2) {
      cout << "Elección no válida. Intente de nuevo." <<endl;
    
	return 0;
    }
	
	rnd = rand() % 2;
	
	if (eleccion == 1) {
      res = rnd ? 'S' : 'C';
    } else {
      res = rnd ? 'C' : 'S';
    }
    
    cout << "Le tocó: " <<res<<endl;

    return 0;
}
