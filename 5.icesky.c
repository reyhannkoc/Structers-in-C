#include <stdio.h>
#include <stdlib.h>
struct comp{
    char name[10];
    char surname[10];
    float per;
    float ant[4];
};
struct comp C1,A;

float func(struct comp A){
    float result=0;
    float min = A.ant[0];
    float max = A.ant[0];
    
    for(int i=0; i<4; i++){
        if(A.ant[i] < min){
            min = A.ant[i];
        }
        if(A.ant[i] > max){
            max = A.ant[i];
        }
        result += A.ant[i];
    }
    result = (result - max - min) / 2; 
    return result;
}
int main()
{
    printf("Yarışmacının: ");
    printf("\nAdı: ");
    scanf("%s",C1.name);
    printf("Soyadı: ");
    scanf(" %s",C1.surname);
    for(int i=0; i<4; i++){
        printf("%d. hakemin puanı: ",i+1);
        scanf("%f",&C1.ant[i]);
        
        if(C1.ant[i]>6 || C1.ant[i]<0){
            printf("HATA");
            exit(1);
        }
    }
    float result = func(C1);
    
    printf("%.2f",result);
    return 0;
}




