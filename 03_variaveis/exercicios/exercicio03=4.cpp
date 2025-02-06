#include <iostream>

#include <locale.h>

using namespace std;

int main(){
	
	//Acentos - Trata
	setlocale(LC_ALL, "Portuguese");
	setlocale(LC_NUMERIC, "pt_BR");

	/**
	 * 	Crie um algoritmo que solicite ao usuário o valor que ele ganha por hora e o 
	 * 	número de horas que ele trabalhou durante o mês.
	 * 	Depois calcule e mostre o total que ele tem a recebe naquele mês.
	 * 	E também efetue os seguintes descontos.
	 * 
	 * 	1) 11% para o imposto de renda
	 * 	2) 8 para o INSS
	 * 	3) 5% para o sindicato
	 * 
	 * 	Faça o cálculo e imprima o resultado conforme mostrado abaixo:
	 * 		+ Salário Bruto : R$
	 * 		- IR (11%) : R$
	 * 		- INSS (8%) : R$
	 * 		- Sindicato (5%) : R$
	 * 		= Salário Líquido : R$
	 * 	Obs: Salário Bruto - Descontos = Salário Líquido
	 */

	double valorHora, horasTrabalhadas, salarioBruto, IR, INSS, sindicato, salarioLiquido, desconto;

	// Entrada dos valores de horas trabalhadas
	cout << "Digite o valor da sua hora de trabalho: ";
	cin >> valorHora;
	cout << "Valor Hora: R$ " << valorHora << endl;

	cout << "Digite quantas horas voce trabalhou: ";
	cin >> horasTrabalhadas;
	cout << "Horas trabalhas: " << horasTrabalhadas << endl;
	cout << "\n\n----------------------------------\n";

	salarioBruto = valorHora * horasTrabalhadas;
	cout << "	+ Salário bruto: " << salarioBruto << endl;
	
	// calcula o salário bruto com todos os descontos
	IR = salarioBruto * (11.0 / 100);
	cout << "	- IR (11%) : RS " << IR << endl;

	INSS = salarioBruto * (8.0 / 100);
	cout << "	- INSS (8%): R$ " << INSS << endl;

	sindicato = salarioBruto * (5.0 / 100);
	cout << "	- Sindicato (5%) : R$ " << sindicato << endl;

	salarioLiquido = salarioBruto - IR - INSS - sindicato;
	cout << "	= Salário líquido : R$ " << salarioLiquido << endl;
	
	
	system("PAUSE");
	return 0;
}