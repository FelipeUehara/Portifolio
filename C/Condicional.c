//Inicializar as bibliotecas
#include<stdio.h>

void main(){
    //Inicializar as varíaveis
    int idade;
    
    //Aquisição de dados
    printf("Quantos anos voce tem?\n");
    scanf("%d",&idade);

    //IF ELSE
    if(idade >= 18){
        printf("Uau ! Voce ja e maior de idade (>=18)\n");
    }
    else{
        printf("Voce ainda nao e maior de idade(<18)\n");
    }

    //IF ELSEIF
    if((idade >=18)&&(idade <65)){
        printf("Voce pode trabalhar(>18 e <65)\n");
    }
    else if(idade > 65){
        printf("Voce pode se aposentar (>18 e >65)!\n");
    }
    
    //SWITCH CASE DEFAULT
    switch(idade){
        case 10:
            printf("Voce tem uma dezena de anos (10)!\n");
            break;
        case 70:
            printf("Voce tem sete dezenas de anos (70)!\n");
            break;
        default:
            printf("Nao sei quantas dezenas de anos voce tem (-10 e -70!)\n");
    }

}