// 1. A fin de recuperar la cartera morosa, a través de la secretaría de hacienda se ha decidido hacer un 
// descuento a los deudores morosos del impuesto predial para los estratos 1, 2 y 3 de acuerdo con las 
// siguientes condiciones:

// 2. Para deudas mayores a 60000 pesos y menores a 150000 pesos se da un descuento del 20% para deudas entre 
// 150000 pesos y 300000 se da un descuento del 30% para deudas mayores a 300000 hasta 800000 se da un 
// descuento del 40% para deudas mayores a 800000 se da un descuento del 50%. Calcular e imprimir el descuento 
// a realizar y el valor a pagar con descuento.


// 3. Una empresa de telefonía celular tiene esquemas de descuento en sus planes de prepago y postpago, así:
// a. Para prepago por compra de equipos entre $100000 y $900000, el descuento es del 10% y el 20% de
// descuento, superiores a $1000000.

// b. En postpago si el plan cuesta menos de $500.000, el descuento es de 15%, si está entre $500.000 y 
// 1000000 el descuento es del 20% y para valores superiores es del 25%.

// c. Dada la compra de un plan, identificar el descuento realizado y el valor neto de la compra.


// 4.Dado como dato el sueldo de un trabajador, aplíquele un aumento del 15% si su sueldo es inferior a 
// $1000000. Imprima en este caso el nuevo sueldo del trabajador.

// 5. Elaborar un programa, para calcular el salario semanal de un empleado al que se le paga 40000 pesos 
// por hora si estas no superan las 35 horas. Cada hora por encima de 35 se considera extras y se paga a 
// 5000 pesos
#include <iostream>
using namespace std;

int main() {
    const int salaryRegular = 40000;
    const int salaryExtra = 5000;
    const int regularHours = 35;
  
    int hoursWorked = 0;
    int totalSalary = 0;
   
    cout << "Digit the amount of hours worked: ";
    cin >> hoursWorked;
      
    if (hoursWorked <= regularHours){
      totalSalary = (hoursWorked * salaryRegular);
    }
    else { 
     // totalSalary = (regularHours*salaryRegular) + ((regularHours-hoursWorked)*salaryExtra)
      totalSalary = (regularHours * salaryExtra + (hoursWorked - regularHours) * salaryExtra);

      
      
    }
    cout << "The salary for " << hoursWorked << " hours of work is: " << totalSalary << endl;
    
  return 0;
}



// 6. Un primer automóvil se mueve de la ciudad A a la ciudad B, otro automóvil se mueve de la ciudad B a 
// la ciudad A, ambos se desplazan con movimiento rectilíneo uniforme. Si se conocen sus velocidades y la 
// distancia entre la ciudad A y la ciudad B, calcular el tiempo al cabo del cual los automóviles se
// encuentran.


// 7. Escriba un programa que usa while para sumar los números enteros de 1 a 100.
#include <iostream>
using namespace std;

int main() {
    int number = 1; // empieza desde el 1
    int addition = 0; // guardo la suma

    while (numero <= 100) {
        addition += number;
        number++;
    }
    cout << "The addition of the numbers between 1 and 100 is: " << suma << endl;

    return 0;
}

// 8. Escriba un programa para determinar si un entero es par o impar
#include <iostream>
using namespace std;

int main() {
    int number; // declaro la variable
    cout << "Digit the whole number"; // primer mensaje de entrada al usuario
    cin >> number;

  if (number % 2 == 0){ // se divide por 2 y si el resultado es igual a 0 es pq es divisible por 2 lo que significa que si es par
    cout << "The number " << number << " is par" << endl;
  else { // si el residuo no es divisible por 2 significa que es impar y se ejecuta solo else
    cout << "The number " << number << " is impar" << endl;
  
    return 0;
}
