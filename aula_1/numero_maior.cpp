#include <iostream>
#include <windows.h>
 
using namespace std;
 
int main() {
  UINT CPAGE_UTF8 = 65001;
  SetConsoleOutputCP(CPAGE_UTF8);

 int valor_1, valor_2, valor_3, valor_4;

 cout << "insira o valor 1 ";
 cin >> valor_1;

 cout << "insira o valor 2 ";
 cin >> valor_2;

 cout << "insira o valor 3 ";
 cin >> valor_3;

 cout << "insira o valor 4 ";
 cin >> valor_4;

 if (valor_1 > valor_2 && valor_1 > valor_3 && valor_1 >valor_4)
 {
    cout << "o maior valor é o valor 1 que é " << valor_1;
 }

else if (valor_2 > valor_1 && valor_2 > valor_1 && valor_2 >valor_3)
 {
    cout << "o maior valor é o valor 2 que é  " << valor_2;
 }

 else if (valor_3 > valor_1 && valor_3 > valor_2 && valor_3 >valor_4)
 {
    cout << "o maior valor é o valor 3 que é " << valor_3;
 }

 else if (valor_4 > valor_1 && valor_4 > valor_2 && valor_4 >valor_3)
 {
    cout << "o maior valor é o valor 4 que é " << valor_4;
 }

  return 0;
}