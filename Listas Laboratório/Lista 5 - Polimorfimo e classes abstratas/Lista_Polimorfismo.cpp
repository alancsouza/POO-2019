/*********************************************************************************************
	Exemplo que ilustra o uso de Classe Abstrata e Polimorfismo
*************************************************************************************************/

#include <iostream>
#include <cmath>
using namespace std;

class Funcao
{
    public:

		//funcao que obtem a integral da funcao pela regra do trapezio
		double getIntegral(double limiteInferior, double limiteSuperior, double intervalos);

		// funcao virtual representando a funcao cuja integral deve ser calculada
		virtual double func(double input) = 0;

		// destrutor
		//virtual ~Funcao(){}

};

double Funcao::getIntegral(double limiteInferior, double limiteSuperior, double intervalos)
{
	double total, aux1, aux2;
	total = 0;
	aux1 = 0;
	double deltax = (limiteSuperior - limiteInferior)/intervalos; //calculo de delta X
	double x = limiteInferior;
	aux2 = func(x);                               // calculo de y (do primeiro ponto)
	for (int i=0; i<intervalos; i++)
    {
		aux1 = aux2;
	    x = x + deltax;
		aux2 = func(x);
		total = total + ((aux1 + aux2)*deltax)/2;
	}
	return total;
}

//classe que implementa a funcao y = ax^2 + bx + c (segundo grau)
class Quadratica: public Funcao
{
    public:
		Quadratica(int ca, int cb, int cc):coeficienteA(ca),coeficienteB(cb),coeficienteC(cc){}
		double func(double input);
		virtual ~Quadratica(){}
	private:
		double coeficienteA;
		double coeficienteB;
		double coeficienteC;


};

// redefine o comportamento da funcao func
double Quadratica::func(double input)
{
	return coeficienteA*(input*input) + coeficienteB*input + coeficienteC;
}


//classe que inplementa a funcao y = sen(x)/x
class Senoide: public Funcao
{
    public:
		Senoide(){}
		double func(double input);
        virtual ~Senoide(){}
};


// redefine o comportamento da funcao func
double Senoide::func(double input)
{
	return sin(input)/input;
}


//classe que implementa a funcao y = ax + b
class Linear: public Funcao
{
    public:
		Linear(int ca,int cb):coeficienteA(ca),coeficienteB(cb){}
		double func (double input);
		virtual ~Linear(){}

	private:
		int coeficienteA;
		int coeficienteB;

};

//redefine o comportamento de func
double Linear::func(double input)
{
	return coeficienteA*input + coeficienteB;
}


//--------------------------------------------------------------------------------------------

int main()
{
    double resultado;

	//cria um container de ponteiros do tipo Funcao
	Funcao *f[3];

	f[0] = new Quadratica(1,2,4);
	f[1] = new Senoide();
	f[2] = new Linear(1,4);

	cout << "*** Calculo de integrais usando a regra do trapezio: ***"<<endl<<endl;
	cout << "*** Funcoes ***" << endl;
	cout << "(1) x^2 + 2x + 4" << endl;
	cout << "(2) sen(x) / x" << endl;
	cout << "(3) x + 4" << endl;
	cout << endl;

	for (int i=0; i<3; i++)
	{
		resultado = f[i]->getIntegral(1,4,1000);
		cout << "Integral da Funcao (" << i+1 << "): " << resultado;
		cout << endl;
	}

    for (int i=0; i<3; i++)
	{
        delete f[i];
	}

	return 0;
}







