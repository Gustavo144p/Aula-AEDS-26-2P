#include <iostream>
#include <string>
#include <windows.h>

using namespace std;

const int MAX = 100;

string nomes[MAX];
int cods[MAX];
int quants[MAX];
double valores[MAX];
int total = 0;

// prototipos
void cadastrar(string nomes[], int cods[], int quants[], double valores[], int &total);
void pesquisar(string nomes[], int cods[], int quants[], double valores[], int total);
void reporRetirar(int cods[], int quants[], int total);
void atualizar(string nomes[], int cods[], double valores[], int total);
char menu();
// prototipo

int main()
{
  SetConsoleOutputCP(65001);
  char op;

  do
  {
    op = menu();

    switch (op)
    {
    case 'c':
      cadastrar(nomes, cods, quants, valores, total);
      break;
    case 'p':
      pesquisar(nomes, cods, quants, valores, total);
      break;
    case 'r':
      reporRetirar(cods, quants, total);
      break;
    case 'a':
      atualizar(nomes, cods, valores, total);
      break;
    case 's':
      cout << "Saindo...\n";
      break;
    default:
      cout << "Opcao invalida!\n";
      break;
    }
  } while (op != 's');

  return 0;
}

char menu()
{
  char op;
  cout << "\n MENU \n";
  cout << "C - cadastrar\n";
  cout << "P - pesquisar\n";
  cout << "R - repor / retirar estoque\n";
  cout << "A - atualizar nome/valor\n";
  cout << "S - sair\n";
  cout << "Opcao: ";
  cin >> op;
  return tolower(op);
}

void cadastrar(string nomes[], int cods[], int quants[], double valores[], int &total)
{
  if (total >= MAX)
  {
    cout << "Estoque cheio!\n";
    return;
  }
  cout << "Nome do produto: ";
  cin >> nomes[total];
  cout << "Codigo: ";
  cin >> cods[total];
  cout << "Quantidade: ";
  cin >> quants[total];
  cout << "Valor: ";
  cin >> valores[total];

  total++;
  cout << "Cadastrado com sucesso!\n";
}

void pesquisar(string nomes[], int cods[], int quants[], double valores[], int total)
{
  if (total == 0)
  {
    cout << "Nenhum produto cadastrado.\n";
    return;
  }
  int vcod;
  cout << "Codigo para pesquisar: ";
  cin >> vcod;

  for (int i = 0; i < total; i++)
  {
    if (cods[i] == vcod)
    {
      cout << "\n ENCONTRADO \n";
      cout << "Nome: " << nomes[i] << "\n";
      cout << "Codigo: " << cods[i] << "\n";
      cout << "Quant: " << quants[i] << "\n";
      cout << "Valor: " << valores[i] << "\n";
      return;
    }
  }
  cout << "Nao encontrado!\n";
}

void reporRetirar(int cods[], int quants[], int total)
{
  int vcod, qtd;

  cout << "Codigo do produto: ";
  cin >> vcod;
  cout << "Qtd (+ para repor / - para retirar): ";
  cin >> qtd;

  if (qtd < total)
  {
    cout << "não retire uma quantidade maior que a do estoque";
  }
  else
  {
    for (int i = 0; i < total; i++)
    {
      if (cods[i] == vcod)
      {
        quants[i] += qtd;
        cout << "Novo estoque: " << quants[i] << "\n";
        return;
      }
    }
    cout << "Codigo nao existe!\n";
  }
}

void atualizar(string nomes[], int cods[], double valores[], int total)
{
  int vcod;
  cout << "Codigo para atualizar: ";
  cin >> vcod;

  for (int i = 0; i < total; i++)
  {
    if (cods[i] == vcod)
    {
      cout << "Novo nome: ";
      cin >> nomes[i];
      cout << "Novo valor: ";
      cin >> valores[i];
      cout << "Atualizado!\n";
      return;
    }
  }
  cout << "Codigo nao existe!\n";
}