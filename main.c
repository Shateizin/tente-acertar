#include <stdio.h>
#include <stdlib.h>
int main(){
    int ale;
    int num;
    int tent;
    ale = rand() % 15;
    for (tent=0; num != ale;tent=tent+1)
    {
        printf("Chute um numero: ");
        scanf("%d", &num);
        if(num>ale)
        {
            printf("Tente um numero menor\n");
        }
        if(num<ale)
        {
            printf("Tente um numero maior\n");
        }
    }
    printf("\nVocê acertou");
    printf("\nNumero de tentativas: %d", tent);
    return 0;
    
 }
