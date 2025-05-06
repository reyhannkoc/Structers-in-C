#include <stdio.h>
#include <stdlib.h>
struct comp{
    char name[10];
    char surname[10];
    float per;
    float ant[4];
};
struct comp C1[3] , A;

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
    float result[3];
    
    for(int j=0; j<3; j++){
    printf("\n%d Yarışmacının: ",j+1);
    printf("\nAdı: ");
    scanf("%s",C1[j].name);
    printf("Soyadı: ");
    scanf(" %s",C1[j].surname);
    for(int i=0; i<4; i++){
        printf("%d. hakemin puanı: ",i+1);
        scanf("%f",&C1[j].ant[i]);
        
        if(C1[j].ant[i]>6 || C1[j].ant[i]<0){
            printf("HATA");
            exit(1);
        }
    }
    
    result[j] = func(C1[j]);
    
    printf("%.2f",result[j]);
    }
    
    
    float maxx = 0;
    int index=0;
    for(int k=0; k<3; k++){
        
        if(result[k]>maxx){
            maxx = result[k];
            index = k;
        }
        
    }
    printf("\nBirinci:\n%s %s %f",C1[index].name, C1[index].surname, result[index]);
    return 0;
}




