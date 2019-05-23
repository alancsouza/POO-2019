#include <iostream>
using namespace std;

class Funcionario{
    private:
        string nome;
        string cpf;
        double salario;

    public:
        Funcionario(string n, string c, double s):nome(n),cpf(c),salario(s){}
        void setNome(string nn){nome = nn;}

        void reajustaSalario(double porcentagem){
            salario *= (1 + porcentagem/100);
        }


        void mostra(){
            cout << endl;
            cout <<"nome: " << nome << endl;
            cout <<"cpf: " << cpf << endl;
            cout <<"salario: " << salario;

        }

};

class Gerente: public Funcionario{
    private:
        int senha;
        int numeroFuncionariosGerenciados;

    public:
        Gerente(string n, string c, double s, int se, int nfg):Funcionario(n,c,s),senha(se),numeroFuncionariosGerenciados(nfg){}

        void setSenha(int ns){senha = ns;}

        // redefine o comportamento do método para reajustar o salario
        void reajustaSalario(double porcentagem, int anosServico){
            double bonus = 0.5*anosServico;
            Funcionario::reajustaSalario(porcentagem+bonus);
        }


        // redefine o comportamento da função membro mostra()
        void mostra(){
            Funcionario::mostra();
            cout << endl;
            cout <<"senha: " << senha << endl;
            cout <<"numero de Subordinados: " << numeroFuncionariosGerenciados << endl;
        }
};


int main()
{
    Gerente g("Fulano","048801976-34",10000,1234,5);

    g.mostra();

    // podemos chamar funções membro de Funcionario
    g.setNome("Joao da Silva");

    // podemos chamar funções membro de Gerente
    g.setSenha(4321);

    g.mostra();

    //g.reajustaSalario(10);  // Erro! Tentativa de chamar Funcionario::reajustaSalario

    g.reajustaSalario(10,12); // Ok! Gerente::reajustaSalario

    g.mostra();

    return 0;
}
