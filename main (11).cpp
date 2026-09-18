
#include <iostream>
using namespace std;
float calcularst (float sueldo,float v1,float v2,float v3,float st,float vt)
{
    float aux;
    
    aux = vt = ((v1+v2+v3)*0.1);
    st = sueldo + vt;
    return aux;
    
}
 int main()
{
    //variables de entrada
    float sueldo;
    float v1;
    float v2; 
    float v3;
    //v. de salida
    float st;
    float vt; 

    //condiciones
    cout<<"Ingresa el sueldo";
    cin>>sueldo;
    cout<<"Ingresa el valor de la primera venta";
    cin>>v1;
    cout<<"Ingresa el valor de la segunda venta";
    cin>>v2;
    cout<<"Ingresa el valor de la tercera venta";
    cin>>v3;
    vt = calcularst (sueldo,v1, v2,v3,st, vt);
    st = sueldo + vt;
    cout<<"Tu comision es "<<vt<< " y tu sueldo es "<<st;
}