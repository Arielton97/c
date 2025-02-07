#ifndef Aluno_H_INCLUDED
#define ALUNO_H_INCLUDED

class Aluno
{
    public:

        // objetos
        int codigo;
        std::string nome;
        int idade;
        std::string sexo;

        // prototipação - apresentando na classe
        Aluno(int codigoAluno);

        void exibirDadosNaTela();
};

void Aluno::exibirDadosNaTela()
{

    std::cout << "Código: " << codigo << std::endl;
    std::cout << "Nome: " << nome << std::endl;
    std::cout << "Idade: " << idade << std::endl;
    std::cout << "Sexo: " << sexo << std::endl;
    std::cout << std::endl;

};

// método construtor
Aluno::Aluno(int codigoAluno)
{

    if ( codigoAluno == 1)
    {
        codigo = 1;
        nome = "Barbie Millicent";
        idade = 32;
        sexo = "Feminino";
    } else if ( codigoAluno == 2 )
    {
        codigo = 2;
        nome = "Ken";
        idade = 27;
        sexo = "Masculino";
    } else if ( codigoAluno == 3)
    {
        codigo = 3;
        nome = "Raquelle";
        idade = 27;
        sexo = "Feminino";
    } else if ( codigoAluno == 4 )
    {
        codigo = 4;
        nome = "Chelsea Millicent";
        idade = 27;
        sexo = "Feminino";
    }
    
    

};

#endif