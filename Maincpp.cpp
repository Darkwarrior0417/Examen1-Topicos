
#include <iostream>

using namespace std;


int main() {

    /**
 * @date 15/02/2024
 * @version 1.0
 * @brief Programa en C++ para leer una matriz de 3x3 y crear su matriz transpuesta.
 * @author Arturo Solis Flores
 */

    // Declaración de la matriz original y la matriz transpuesta
    int matriz[3][3];
    int transpuesta[3][3];

    // Lectura de la matriz original
    cout << "Introduce los elementos de la matriz 3x3:" << endl;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cout << "Introduce el numero [" << i << "][" << j << "]: ";
            cin >> matriz[i][j];
        }
    }

    // Calculando la matriz transpuesta
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            transpuesta[j][i] = matriz[i][j];
        }
    }

    // Mostrando la matriz original
    cout << "Matriz Original:" << endl;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cout << matriz[i][j] << " ";
        }
        cout << endl;
    }

    // Mostrando la matriz transpuesta
    cout << "Matriz Transpuesta:" << endl;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cout << transpuesta[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
