#include <iostream>
#include <windows.h>

using namespace std;

int main()
{
    UINT CPAGE_UTF8 = 65001;
    SetConsoleOutputCP(CPAGE_UTF8);

    const int temp = 10;
    double temperatura[temp];
    double media = 0, soma = 0;

    for (int i = 0; i < temp; i++)
    {
        cout << "digite uma temperatura ";
        cin >> temperatura[i];
        soma += temperatura[i];
        media = soma/temp;;
    }
    cout << "soma das temperaturas" <<" "<< soma << "\n";
    cout << "media das temperaturas" <<" "<< media;

    return 0;
}        