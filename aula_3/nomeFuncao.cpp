#include <iostream>

using namespace std;

double aplicarReajuste(const char* nome, double preco, double porcentagem) {
    double novoPreco = preco * (1 + porcentagem / 100);

    cout << "\n--- Resultado ---" << endl;
    cout << "Produto: " << nome << endl;
    cout << "Preco antigo: R$ " << preco << endl;
    cout << "Novo preco: R$ " << novoPreco << endl;

    return novoPreco;
}

int main() {
    char nome[100];
    double preco, porcentagem;

    cout << "Digite o nome do produto: ";
    cin.getline(nome, 100);

    cout << "Digite o preco atual: ";
    cin >> preco;

    cout << "Digite a porcentagem de reajuste: ";
    cin >> porcentagem;

    aplicarReajuste(nome, preco, porcentagem);

    return 0;
}