#include <iostream>
using namespace std;

class Funcionario {
private:
    string nome;
    string cpf;
    double salario;
    
public:
    Funcionario(string n, string c, double s): nome(n), cpf(c), salario(s){}
    void setNome(string nn){nome = nn;}

    void reajustaSalario(double porcentagem){
        salario *= (1 + porcentagem/100);
    }

    void mostra(){
        cout << endl;
        cout << "nome: " << nome << endl;
        cout << "cpf: " << cpf << endl;
        cout << "salário: " << salario << endl;
    }
};

class Gerente: public Funcionario {
private:
    int senha;
    int NumeroFuncionariosGerenciados;

public:
    Gerente(string n, string c, double s, int se, int nfg): Funcionario(n,c,s), senha(se), NumeroFuncionariosGerenciados(nfg){}
    void setSenha (int ns){senha = ns;}

    // Redefine o comportamento da função membro para reajustar o salário
    void reajustaSalario(double porcentagem, int anosServico){
        double bonus = 0.5 * anosServico;
        Funcionario::reajustaSalario(porcentagem+bonus);
    }
    // Redefine o comportamento da função membro mostra()
    void mostra(){
        Funcionario::mostra();
        cout << endl;
        cout << "Senha: " << senha << endl;
        cout << "Número de subordinados: " << NumeroFuncionariosGerenciados << endl;
    }
};

int main(){
    Gerente g("Fulano", "048801976-34", 10000, 1234, 5);
    g.mostra();

    // Podemos chamar funções membro de Funcionário
    g.setNome("Joao da Silva");

    // Podemos chamar funções membro de Gerente
    g.setSenha(4321);

    g.mostra();

    // g.reajustaSalario(10); // Erro! Tentativa de chamar Funcionario::reajustaSalario(double)

    g.reajustaSalario(10,12); // OK! Gerente::reajustaSalario(double, int)

    g.mostra();

    return 0;
}