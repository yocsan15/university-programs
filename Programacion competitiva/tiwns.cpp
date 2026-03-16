/* 
Este programa lee un número entero n desde la entrada estándar.
Luego crea un vector de tamaño n+1 y llena sus posiciones con los
números del 1 hasta n. Finalmente, imprime cada número en una
línea diferente.
*/
#include <iostream>
#include <vector>

using namespace std;

#define SPEED ios_base::sync_with_stdio(0); cin.tie(0);

int main() {
    SPEED;
    
    int n;
    if (!(cin >> n)) return 0; 

    vector<int> valor(n + 1); 
    
    for (int i = 1; i <= n; i++) {
        valor[i] = i; 
        cout << valor[i] << "\n"; 
    }

    return 0;
}
