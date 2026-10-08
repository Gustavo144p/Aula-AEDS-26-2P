#include <iostream>
#include <windows.h>

using namespace std;

int main()
{
    UINT CPAGE_UTF8 = 65001;
    SetConsoleOutputCP(CPAGE_UTF8);

    float valor_1, valor_2;
    char operador;

    while (valor_1 && valor_2 != 0)
    {
        cout << "digite seu primeiro valor ";
    cin >> valor_2;

    cout << "digite seu segundo valor ";
    cin >> valor_1;

    cout << "digite seu operador ";
    cin >> operador;


    switch (operador)
    {

    case '+':
        cout << "o resultado e  " << valor_1 + valor_2 << "\n" ;
        break;
    case '-':
        cout << "o resultado e  " << valor_1 - valor_2 << "\n";
        break;
    case '*':
        cout << "o resultado e " << valor_1 * valor_2 << "\n";
        break;

    case '/':
        cout << "o resultado e " << valor_1 / valor_2 << "\n";
        break;

    case 0:
        return 0;
        break;

    default:
        break;
    }
    }
    

    

    return 0;
}