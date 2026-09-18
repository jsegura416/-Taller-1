/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
using namespace std;

int main() {
    int num1, num2, num3;

    // 1. Leer los tres enteros
    cout << "Ingresa tres enteros separados por un espacio: ";
    cin >> num1 >> num2 >> num3;

    // 2. Comprobar si están en orden ascendente (menor a mayor)
    bool ordenAscendente = (num1 <= num2) && (num2 <= num3);
    
    // 3. Comprobar si están en orden descendente (mayor a menor)
    bool ordenDescendente = (num1 >= num2) && (num2 >= num3);

    // 4. Emitir el mensaje
    if (ordenAscendente || ordenDescendente) {
        cout << "Los números SÍ están en orden numérico." << endl;
    } else {
        cout << "Los números NO están en orden numérico." << endl;
    }

    return 0;
}