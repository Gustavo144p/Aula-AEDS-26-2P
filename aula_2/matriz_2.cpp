#include <iostream>
#include <windows.h>

using namespace std;

int main()
{
    UINT CPAGE_UTF8 = 65001;
    SetConsoleOutputCP(CPAGE_UTF8);

    string nomes[5];
    float soma = 0;
    float idade[5];

    for (int x = 0; x < 5; x++)
    {
        cout << "insira o " << x + 1 << "° nome:";
        cin >> nomes[x];
        cout << "qual a idade de " << nomes[x] << "?";
        cin >> idade[x];
        soma += idade[x];
    }
    cout << "A lista de participantes e composta por: \n";
    for (int x = 0; x < 5; x++)
    {
        cout << nomes[x] << "idade: " << idade[x];
    }
    cout << "A media e de " << soma/5 << "anos.";


    return 0;
}