#include"stdio.h"
#include"stdlib.h"


int main(int argc, char const *argv[])
{
    int escolha, idade;
    float peso, altura, imc;

    inicio:

    printf("MENU principal\n1-pessoal\n2-financeiro\n3-academico\n4-utilidades\n0-sair\n");
        scanf("%i", &escolha);

        switch (escolha){
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
                        break;  
        case 2:
            printf("bem vindo a area financeira");
                break;
        case 3:
            printf("bem vindo a area academica");
                break;
        case 4:
            printf("bem vindo a area utilidades");
                break;
        case 0:
            printf("obrigado pelo acesso");
                goto fim;
        default:
        printf("escolha invalida, por favor selecione um dos numeros\n");
            goto inicio;
        }
        
    
        fim:
        
    return 0;
}
