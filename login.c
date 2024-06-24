#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "pt-br");
    int opcao, senha;
    char usuario;

    FILE *arq;

    arq = fopen("login.txt", "wb+");

    if(arq == NULL){
        printf("Erro ao criar arquivo!");
    }else{
        do{
            printf("1-Registrar-se\n2-Entrar\n3-Sair");
            scanf("%d", &opcao);

            switch (opcao){
            case 1:
                printf("Forneça o usuário: ");
                fgets(usuario, 100, arq);
                setbuf(stdin, NULL);
                printf("Forneça a senha (apenas números): ");
                fgets(senha, 100, arq);
                setbuf(stdin, NULL);
                break;
            case 2:
                printf("Usuário: ");
                scanf("%s", &usuario);
                printf("Senha: ");
                scanf("%d", &senha);

                /*if (usuario == usuario)*/
                break;
            
            default:
                break;
            }
            
        }while(opcao!=3);
    }

    fclose(arq);
    return 0;
}