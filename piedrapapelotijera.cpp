#include <iostream>
#include <vector>

using namespace std;

int main() {
  
  vector<string> opciones = {"Piedra", "Papel", "Tijera"};

 
  int eleccion;
  cout << "Elige tu opción (0: Piedra, 1: Papel, 2: Tijera): ";
  cin >> eleccion;

  int maquinaEleccion = (eleccion + 1) % 3;

  
  cout << "Yo: " << opciones[eleccion] << endl;
  cout << "Máquina: " << opciones[maquinaEleccion] << endl;

 
  if (eleccion == maquinaEleccion) {
    cout << "Empate!" << endl;
  } else if ((eleccion == 0 && maquinaEleccion == 2) ||
               (eleccion == 1 && maquinaEleccion == 0) ||
               (eleccion == 2 && maquinaEleccion == 1)) {
      cout << "Ganaste!" << endl;
    } else {
      cout << "Perdiste!" << endl;
    }

  return 0;
}
