#include <iostream>
#include <locale.h>
using namespace std;

int main() {
    setlocale(LC_ALL,"");
    // Declaração de variáveis
    int numero, dobro;

    // Solicita ao usuário para inserir um número
    cout << "Insira um número: ";
    cin >> numero;

    // Calcula o dobro
    dobro = 2 * numero;

    // Exibe o resultado
    cout << "O dobro de " << numero << " é: " << dobro << endl;

    return 0;
}
