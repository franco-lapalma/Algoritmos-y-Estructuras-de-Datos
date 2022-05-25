#include <cassert>
int main () {
     //booleanos
    assert(true);
    assert(not false); 
    //and or != == not
    
    //caracteres
    assert('a' != 'b');
    assert('d' + 'q' == 0xD5);
    //assert('ı'== 0XD5);   
    //std::cout << "(" <<char(213)<<")";
    //printf("%c",213);
    assert( 'C' - 'A' == 2);
    assert('C' - 2 == 'A');
    assert('C' + 2 == 'E');
    assert('C' - 2 == 65);
    assert('C' - 2 == 65 and 'C' - 2 == 'A');
    //assert('q' - 'd' == '♪');
    //probar mas valores  suma  resta  desigualdades  

    //Enteros
//mas operaciones
    assert(123 == 123);

    //Punto Flotante (reales)(double) otros tipos flotantes:(float) y(long double)
    assert(0.23 > -1.0); 
    assert(3E2 == 3e2 );
    assert(3E2 == 3*10*10 );
    assert(3E2 == 300.0 );
    assert(3E6 == 3000000.0 );
    assert(3E6 == 3'000'000.0 );
    assert(2.0 + 1 == 3.0);
    assert(1.0);
    //separador de digitos '
    //probar sumar 10 veces 0.1
    //mas operaciones, averiguar rangos y maximos
    //estos son los tipos de asserts vistos en clase con ejemplos

    //mas tipos de datos  
}