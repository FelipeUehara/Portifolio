//Contagem
#include<stdio.h>

void main(){
    int data;
    int x;
    int y;

    printf("Contagem de 0 a 9\n");
    for(data = 0; data < 10; data ++){
        printf("%d ",data);
    }

    printf("\n\nContagem de 0 a 99 pulando linha a cada 10 numeros\n");
    for(y = 0; y < 10; y++){
        for(x = 0; x < 10; x++){
            data = 10*y + x;
            printf("%2.d ",data);
        }
        printf("\n");
    }

    printf("\nContagem ate o valor indicado\n");
    scanf("%d",&data);
    printf("\n");
    x = 0;
    while(x != data){
        x++;
        printf("%d\n",x);
    }
}