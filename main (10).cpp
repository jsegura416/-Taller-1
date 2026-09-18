#include <iostream>
#include <math.h>
using namespace std;

float Calcularmin (float x )
{
    float m;
    m = x/60;
    
    return m;
};
main()
{
    float min;
    float seg; //v. entrada
      //v. salida
    cout<<"Ingresa los segundos: ";
    cin>>seg;
   min = Calcularmin (seg);
    cout<<" segundos en minutos  : "<<min;
}