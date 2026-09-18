
#include <iostream>
using namespace std;

int main() {
    int n1, n2, n3;

    // Leer los tres enteros
    cout << "Ingresa tres enteros separados por un espacio: ";
    cin >> n1 >> n2 >> n3;

    //  Comprobar si están en orden ascendente (menor a mayor)
    bool ordenAscendente = (n1 <= n2) && (n2 <= n3);
    
    // Comprobar si están en orden descendente (mayor a menor)
    bool ordenDescendente = (n1 >= n2) && (n2 >= n3);

    //  Emitir el mensaje
    if (ordenAscendente || ordenDescendente) {
        cout << "Los números SÍ están en orden numérico." ;
    } else {
        cout << "Los números NO están en orden numérico." ;
    }

    
}