/*
Este programa calcula el número n de la serie de Fibonacci.
Primero lee un número entero desde la entrada estándar.
Luego utiliza una función que calcula el valor de Fibonacci
de forma iterativa (usando un ciclo) para evitar recursión
y mejorar el rendimiento. Finalmente imprime el valor de n
y el resultado correspondiente de la serie de Fibonacci.
*/
#include <iostream>

using namespace std;

#define SPEED ios_base::sync_with_stdio(0); cin.tie(0);
typedef unsigned long long ull;

ull fib(int n) {
    if (n == 0) return 0;
    if (n == 1) return 1;

    ull a = 0; 
    ull b = 1; 
    ull r = 0;

    
    for (int i = 2; i <= n; i++) {
        r = a + b; 
        a = b;     
        b = r;     
    }
    return b;
}

int main() {
    SPEED;
    ull n; 
    if (!(cin >> n)) return 0;
    
    cout << "n = " << n << "\n" << fib(n) << endl;
    return 0;
}
