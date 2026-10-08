#include <iostream>
#include <windows.h>

using namespace std;

int main()
{
    UINT CPAGE_UTF8 = 65001;
    SetConsoleOutputCP(CPAGE_UTF8);

    const int x = 2, y = 2;
    int vetor[x][y];
    double media = 0, soma = 0;
    vetor[0][0] = 1;
    vetor[0][1] = 25;
    vetor[0][0] = 2;
    vetor[1][0] = 23;

    return 0;
}