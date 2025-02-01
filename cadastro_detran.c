#include <stdio.h>
#include <string.h>

int main()
{

    int opcao = 0;
    int tipo_consulta;
    int cadastros = 0;
    char placa_checagem;
    char placa[100][3];
    long long int cpf[100];
    long long int cpf_checagem;
    char nome[100][3];
    char nome_checagem;
    int idade[100];
    char sexo[100];



    printf("Seja bem-vindo(a) ao sistema de cadastro e consulta do DETRAN \n");

    while (opcao != 3)
    {
        
        printf("Escolha uma opção: \n");
        printf("1 - Cadastrar motorista \n");
        printf("2 - Consultar motorista \n");
        printf("3 - Sair \n");
        scanf("%d", &opcao);


        if(opcao == 1)
        {

            
            if(cadastros != 0)
            {

                printf("Informe o CPF do motorista: \n");
                scanf("%lld", &cpf_checagem);

                for (int x = 0; x < cadastros; x++)
            {
                
                if(cpf_checagem == cpf[x])
                {

                    printf("Motorista ja está cadastrado! \n");

                }
                else
                {

                    
                    cpf[cadastros] = cpf_checagem;

                    printf("Informe a placa do veiculo: \n");
                    scanf(" %s", &placa[cadastros]);

                    printf("Informe o nome do motorista: \n");
                    scanf(" %s", &nome[cadastros]);

                    printf("Informe a idade do motorista: \n");
                    scanf(" %d", &idade[cadastros]);

                    printf("Qual o sexo do motorista: \n");
                    printf("M - Masculino \n");
                    printf("F - Feminino \n");
                    scanf(" %c", &sexo[cadastros]);


                    cadastros += 1;

                    printf("Cadastro realizado com sucesso! \n");

                }
            }

            }
            else
            {

                printf("Informe a placa do veiculo: \n");
                scanf(" %s", &placa[cadastros]);

                printf("Informe o CPF do motorista: \n");
                scanf(" %lld", &cpf[cadastros]);

                printf("Informe o nome do motorista: \n");
                scanf(" %s", &nome[cadastros]);

                printf("Informe a idade do motorista: \n");
                scanf(" %d", &idade[cadastros]);

                printf("Qual o sexo do motorista: \n");
                printf("M - Masculino \n");
                printf("F - Feminino \n");
                scanf(" %c", &sexo[cadastros]);


                cadastros += 1;

                printf("Cadastro realizado com sucesso! \n");

            }


        }

        if(opcao == 2)
        {


                printf("Informe o CPF do motorista: \n");
                scanf("%lld", &cpf_checagem);

                for(int x = 0; x < cadastros; x++)
                {

                    if(cpf_checagem == cpf[x])
                    {

                        printf("Segue abaixo so dados do motorista: \n");
                        printf("Nome: %s\n", nome[x]);
                        printf("CPF: %lld\n", cpf[x]);
                        printf("Idade: %d\n", idade[x]);
                        printf("Sexo: %c\n", sexo[x]); 
                        printf("Placa do veiculo: %s\n", placa[x]);

                    }
                    else
                    {

                        printf("Motorista não encontrado! \n");

                    }

                }


        }
        
    }
    
    



    

}