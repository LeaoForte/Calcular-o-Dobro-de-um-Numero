# Calcular-o-Dobro-de-um-Número
#include <iostream>: Inclui a biblioteca que permite entrada/saída no console.
using namespace std;: Permite usar os objetos e funções da biblioteca padrão C++ sem precisar digitar std:: antes de cada um deles.
int main() { ... }: É a função principal do programa. Todo código em C++ começa a execução a partir desta função.
int numero, dobro;: Declaração de duas variáveis inteiras, numero (o número que o usuário irá inserir) e dobro (o resultado do cálculo).
cout << "Insira um numero: ";: Exibe a mensagem para o usuário inserir um número.
cin >> numero;: Lê o número que o usuário insere e o armazena na variável numero.
dobro = 2 * numero;: Calcula o dobro do número inserido.
cout << "O dobro de " << numero << " e: " << dobro << endl;: Exibe o resultado.
return 0;: Indica que o programa terminou com sucesso.
