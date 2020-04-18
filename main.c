#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main()
{
    int q, p, opcao, resultado, opcaoValida;
    setlocale (LC_ALL, "portuguese");
    while(opcao != 8) {
        printf("Bem vindo ao programa de c�lculo de l�gica proposicional! :) \n");
        p = 2;
        q = 2;
        while(p != 0 && p != 1) {
            printf("Para come�ar, escolha o valor da proposi��o 'p', digite 1 para Verdadeiro e 0 para falso. \n");
            scanf("%d", &p);
            if(p != 0 && p != 1) {
                printf("Valor inv�lido, favor digite novamente! \n");
            }
        }
        while(q != 0 && q != 1) {
            printf("Muito bem! Agora escolha o valor da proposi��o 'q', sendo 1 para Verdadeiro e 0 para falso\n");
            scanf("%d", &q);
            if(q != 0 && q != 1) {
                printf("Valor inv�lido, favor digite novamente! \n");
            }
        }
        opcaoValida = 0;
        while(opcaoValida == 0) {
            printf("Agora em seguida, escolha a opera��o l�gica que deseja realizar neste menu \n \n");
            printf("1. ~q \n");
            printf("2. ~p \n");
            printf("3. p ^ q \n");
            printf("4. p v q \n");
            printf("5. p _V_ q \n");
            printf("6. p -> q \n");
            printf("7. p <-> q \n");
            printf("8. Sair \n");
            scanf("%d", &opcao);
            if(opcao >= 1 && opcao <= 8) {
                opcaoValida = 1;
            }
            else {
                printf("Op��o inv�lida, por favor digite novamente! \n");
            }
        }
        switch(opcao) {
            case 1:
                if(p == 0) {
                    resultado = 1;
                }
                else {
                    resultado = 0;
                }
                break;
            case 2:
                if(q == 0) {
                    resultado = 1;
                }
                else {
                 resultado = 0;
                }
                break;
            case 3:
                if(p == 1 && q == 1) {
                    resultado = 1;
                }
                else {
                    resultado = 0;
                }
                break;
            case 4:
                if(p == 1 || q == 1) {
                    resultado = 1;
                }
                else {
                    resultado = 0;
                }
                break;
            case 5:
                if((p == 1 && q == 0) || (p == 0 && q == 1)){
                    resultado = 1;
                }
                else {
                    resultado = 0;
                }
                break;
            case 6:
                if(q == 1 || (q == 0 && p == 0)) {
                    resultado = 1;
                }
                else {
                    resultado = 0;
                }
                break;
            case 7:
                if((q == 1 && p == 1) || (q == 0 & p == 0)) {
                    resultado = 1;
                }
                else {
                    resultado = 0;
                }
                break;
            default:
                break;
        }
        if(opcao != 8) {
            if(resultado == 1 ){
                printf("O resultado l�gico � 1, portanto verdadeiro! \n \n");
            }
            else {
                printf("O resultado l�gico � 0, portanto falso! \n \n");
            }
        }
    }
    printf("Processo Finalizado!");
}
