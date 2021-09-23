#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i;

    do{
    printf("==========NUMEROS PRIMOS==========");
    
    printf("\nDigite um numero de 0 a 100 e verifique se eh primo ou nao \(-1 para sair\): \n");
    scanf("%i", &i);

    if ( i <= 100 ){
    
    switch(i){
    case 2: 
    case 3:
    case 5: 
    case 7:
    case 11: 
    case 13: 
    case 17: 
    case 19: 
    case 23: 
    case 29: 
    case 31: 
    case 37: 
    case 41: 
    case 43: 
    case 47: 
    case 53: 
    case 59: 
    case 61: 
    case 67: 
    case 71: 
    case 73: 
    case 79: 
    case 83:
    case 89:
    case 97: 
    printf("\nO numero digitado eh primo!\n\n");
    break;

    case -1:
    printf("\nObrigado por usar nosso programa, ate logo!\n\n");
    break;

    default:
    printf("\nO numero digitado nao eh primo!\n\n");
    }
    
    system("pause");
    system("cls");
    }else {
        printf("\nValor invalido!\n\n");
    system("pause");
    system("cls");
    }
    
    }while( i != -1);
    
    
    return 0;
    }