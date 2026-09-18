
#include <iostream>

using namespace std;

int main() {
    float n1, n2, n3, mayor;

    // ingrese los tres números
    cout << "Ingrese el primer numero: ";
    cin >> n1;
    cout << "Ingrese el segundo numero: ";
    cin >> n2;
    cout << "Ingrese el tercer numero: ";
    cin >> n3;

    
    mayor = n1;

    
    if (n2 > mayor) {
        mayor = n2;
    }

    
    if (n3 > mayor) {
        mayor = n3;
    }

   
    cout << "El mayor de los tres numeros es: " << mayor
    ;

   
}