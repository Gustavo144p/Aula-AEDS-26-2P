#include <iostream>
#include <windows.h>

using namespace std;

int const max_alunos = 1;

struct aluno
{
    struct data
    {
        int dia, mes, ano;
    };

    string nome, pai, mae;
    int matricula, cpf;
    bool estudando;
    data dataN;
};

int main()
{
    UINT CPAGE_UTF8 = 65001;
    SetConsoleOutputCP(CPAGE_UTF8);
    aluno dados[max_alunos];
    for (int i = 0; i < max_alunos; i++)
    {
        dados[i].matricula = i;

        cout << "nome do aluno ";
        cin >> dados[i].nome;

        cout << "cpf do aluno ";
        cin >> dados[i].cpf;

        cout << "insira o dia de nascimento do aluno ";
        cin >> dados[i].dataN.dia;
        cout << "insira o mes de nascimento do aluno ";
        cin >> dados[i].dataN.mes;
        cout << "insira o ano de nascimento do aluno ";
        cin >> dados[i].dataN.ano;

        cout << "nome do pai do aluno ";
        cin >> dados[i].pai;

        cout << "nome da mãe do aluno " << endl;
        cin >> dados[i].mae;
    }

    string Palunos;

    cout << "o nome do aluno ";
    cin >> Palunos;

    for (int i = 0; i < max_alunos; i++)
    {
        if (dados[i].nome == Palunos)
        {
            cout<< dados[i].nome << endl<< dados[i].cpf << endl<< dados[i].pai << endl << dados[i].mae << endl;
            cout<< dados[i].dataN.dia << "/" << dados[i].dataN.mes << "/" << dados[i].dataN.ano;
        }
    }

    return 0;
}