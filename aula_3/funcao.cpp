#include <iostream>
#include <windows.h>

using namespace std;

void bemVindo() { cout << "sejam bem vindos"; }

int soma(int a, int b)
{
    int resultado = a + b;
    return resultado;
}

int main()
{

    UINT CPAGE_UTF8 = 65001;
    SetConsoleOutputCP(CPAGE_UTF8);

    int x = 100;
    int y = -50;
    int z = soma(x, y);
    cout << "a soma de " << x << " + " << y << " é " << z;

    return 0;
}
