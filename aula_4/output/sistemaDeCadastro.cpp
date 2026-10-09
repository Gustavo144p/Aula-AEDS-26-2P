#include <iostream>
#include <windows.h>

using namespace std;

int const MAX = 1;

struct cadastro
{
    struct data
    {
        int dia, mes, ano;
    };

    string nome;
    int cpf;
    char sexo;
    data dataN;
};

int main()
{
    UINT CPAGE_UTF8 = 65001;
    SetConsoleOutputCP(CPAGE_UTF8);

    char menu;
    string Vnome;
    int Vcpf, Vdia, Vano, Vmes, vsexo;

    cadastro dados[MAX];
    do
    {
        cout << " ////  ESCOLHA QUAL SUA AÇÃO  //// \n C para cadastrar \n N para pesquisar por nome \n P para pesquisar por cpf \n D para pesquisar por data de nascimento \n A para atualizar dados \n S para sair \n digite M para quantos homens cadastrados e F para mulheres \n";
        cin >> menu;

        for (int i = 0; i < MAX; i++)
        {
            switch (menu)
            {
            case 'c':
                cout << "insira o nome \n ";
                cin >> dados[i].nome;
                cout << "insira o cpf \n";
                cin >> dados[i].cpf;
                cout << "insira o dia de nascimento \n";
                cin >> dados[i].dataN.dia;
                cout << "insira o mes de nascimento \n";
                cin >> dados[i].dataN.mes;
                cout << "insira o ano de nascimento \n";
                cin >> dados[i].dataN.ano;
                cout << "insira o sexo M para masculino F para feminino \n";
                cin >> dados[i].sexo;
            
                break;

            case 'a':
                cout << "insira o nome que deseja atualizar \n";
                cin >> dados[i].nome;
                cout << "insira o cpf ";
                cin >> dados[i].cpf;
                break;

                case 'm':
                cout << vsexo;
                break;

            case 'p':
                cout << "insira o cpf \n";
                cin >> Vcpf;

                if (dados[i].cpf == Vcpf)
                {
                    cout << "encontrado \n";
                    cout << dados[i].cpf << "\n";
                }
                break;

            case 'N':
                cout << "insira o nome \n";
                cin >> Vnome;

                if (dados[i].nome == Vnome)
                {
                    cout << "encontrado \n";
                    cout << dados[i].nome << "\n";
                }

                break;

            case 'd':
            cout << "insira o dia de nascimento \n";
            cin >> Vdia;
            cout << "insira o mes de nascimento \n";
            cin >> Vmes;
            cout << "insira o ano de nascimento \n";
            cin >> Vano;

            if (dados[i].dataN.dia == Vdia && dados[i].dataN.mes == Vmes && dados[i].dataN.ano == Vano)
            {
                cout << "encontrado \n";
                cout << dados[i].nome << "\n";
            }

            break;

            default:
                break;

            }
        }
    } while (menu != 's');

  

    return 0;
}