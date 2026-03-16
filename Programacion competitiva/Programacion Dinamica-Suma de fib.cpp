/*
Este programa calcula el n-ésimo número de Fibonacci utilizando
recursión con memorización (programación dinámica).

Primero se lee un número entero n desde la entrada estándar.
Luego se utiliza un vector llamado "memo" para almacenar los valores
de Fibonacci que ya han sido calculados, evitando repetir cálculos
innecesarios.

La función fib(n, memo) calcula el valor de Fibonacci de forma
recursiva, pero antes de realizar el cálculo revisa si el resultado
ya se encuentra guardado en el vector memo.

Finalmente el programa imprime el resultado correspondiente al
número de Fibonacci solicitado.
*/
#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

ll fib(int n, vector<ll>& memo) {
    if (n <= 1) return n;

    if (memo[n] != -1) {
        return memo[n];
    }
    memo[n] = fib(n - 1, memo) + fib(n - 2, memo);
    return memo[n];
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int n;
    if (!(cin >> n)) return 0;

    vector<ll> memo(n + 1, -1);

    cout << "Fibonacci de " << n << " es: " << fib(n, memo) << endl;

    return 0;
}
