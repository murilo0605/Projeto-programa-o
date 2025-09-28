#include"stdio.h"
#include"stdlib.h"
#include"string.h"


int main(int argc, char const *argv[])
{
    //variaveis
    char usuario[30];
    char senha[30];
    char USU[30];
    char SEN[30];
    int nota1, nota2, nota3, nota4;
    int soma, media, dobro;
    int escolha, idade;
    float peso, altura, imc;

    //Cadastro PRONTO
    printf("\n\t\t\t---CADASTRO---\n\t\t\t\n");
        printf("crie seu login, primeiro digite seu nome de usuario\n");
            scanf("%s", &USU);

            //criador de senha PRONTO

                    printf("crie sua senha, senha nao pode ser menor que 6 caracteres e nao pode ser igual a 123456\n");
                        scanf("%s", &SEN);
                            int tamanho = strlen(SEN);
                                if (strcmp(SEN, "123456" )== 0 || tamanho < 6){
                                    printf(" senha fraca");
                                        goto fim;
                                }
                                        else{
                                            printf("login efetuado com sucesso");
                                                goto conti;
                                    }
    conti:
    //LOGIN PRONTO
            printf("\n\t\t\t---LOGIN---\n\t\t\t\n");
                printf("digite seu nome de usuario\n");
                    scanf("%s", &usuario);
                        printf("digite sua senha\n");
                            scanf("%s", &senha);
                                if (strcmp(usuario, USU) == 0 && strcmp(senha, SEN) == 0){
                                    printf("o login foi efetuado com sucesso bem-vindo %s", usuario);
                                    goto inicio;
                                }
                                else{
                                    printf("usuario ou senha incorretos");
                                    goto fim;
                                }
    //posição do goto PRONTO
    inicio:
    //menu principal PRONTO
    printf("\n\t\t\t---MENU PRINCIPAL---\n\t\t\t     1-pessoal\n\t\t\t     2-financeiro\n\t\t\t     3-academico\n\t\t\t     4-utilidades\n\t\t\t     0-sair\n");
        scanf("%i", &escolha);

        switch (escolha){
            //area pessoal PRONTA
        case 1:
            printf("bem vindo a area pessoal\ndigite sua idade\n");
                scanf("%i", &idade);
                    printf("digite seu peso em quilos\n");
                        scanf("%f", &peso);
                            printf("digite sua altura em metros\n");
                                scanf("%f", &altura);

            imc = peso/(altura*altura);
                printf("seu IMC e %.2f", imc);
                    if (idade < 16){
                        printf("\nvoce nao vota");
                    }
                    else if (idade >= 18 && idade <=70){
                        printf("\nvoce vota");
                    }
                    else if (idade == 16||17 || idade > 70){
                        printf("\nseu voto opcional");
                    }
                    goto inicio;
                        break;  
        //area financeira PRONTA
        case 2:
            printf("bem vindo a area financeira\n");

            float salario;
    float total;

    printf("digite seu salario: \n");
    scanf("%f", &salario);

    total=salario*12;

    printf("seu salario anual e: %.2f\n", total);

    float dias;
    float diaria;
    float totalD;

    printf("digite quantos dias voce trabalhou: \n");
    scanf("%f", &dias);

    printf("digite o valor da diaria: \n");
    scanf("%f", &diaria);

    totalD=dias*diaria;

    printf("o total da sua diaria foi: %.2f\n", totalD);

    float dolar;
    float real;
    float euro;

    printf("digite o valor em reais: \n");
    scanf("%f", &real);

    dolar=real/5.37;

    printf("o valor em dolar e: %.2f\n", dolar);

    euro=real/6.26;

    printf("o valor em euro e: %.2f\n", euro);

            goto inicio;
                break;
        //area academica PRONTA
        case 3:
            printf("bem vindo a area academica\n");
                printf("digite sua primeira nota\n");
                    scanf("%i", &nota1);
                        printf("\ndigite sua segunda nota\n");
                            scanf("%i", &nota2);
                                printf("\ndigite sua terceira nota\n");
                                    scanf("%i", &nota3);
                                        printf("\ndigite sua quarta nota\n");
                                            scanf("%i", &nota4);
                                            
            soma = nota1+nota2+nota3+nota4;
            media = soma/4;
            dobro = media*2;

        printf("\nsua soma das notas e igual a: %i, a media e igual a %i e o dobro da media e igual a: %i", soma, media, dobro);

        if (media >= 7){
            printf("\n sua media foi %i voce esta aprovado", media);
        }
        else if (media >= 4 && media <= 7){
            printf("\nsua media foi %i voce esta de recuperacao", media);
        }
        else{
            printf("\n sua media foi %i voce esta reprovado", media);
        }
        goto inicio;
            break;
            //area de utilidades
        case 4:
            printf("bem vindo a area utilidades\n");
            goto inicio;
                break;
                //sair do sistema PRONTA
        case 0:
            printf("obrigado pelo acesso\n");
                goto fim;
                //alerta e retorno para o menu principal PRONTA
        default:
        printf("escolha invalida, por favor selecione um dos numeros\n");
            goto inicio;
        }
        
    //saida do codigo
        fim:
        
    return 0;
}

