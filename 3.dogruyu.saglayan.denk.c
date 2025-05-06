#include <stdio.h>
struct dogru{
  double m,b;  
};
struct nokta{
    double x,y;
    int sonuc;
};
struct dogru A;
struct nokta B[4];

int main()
{  
    int karar;
    printf("m ve b değerlerini giriniz: ");
    scanf("%lf%lf",&A.m, &A.b);
    int i=0;
    do{
        if(i>=4){
            break;
        }
        printf("x ve y değerlerini giriniz: ");
        scanf("%lf%lf",&B[i].x, &B[i].y);
        if(B[i].y == B[i].x*A.m + A.b){
            B[i].sonuc=1;
        }
        else{
            B[i].sonuc=0;
        }
        
        i++;
        
        printf("\nYeni bir nokta girmek istiyor musunuz? evet için 1, hayır için 2 tuşlayın  -> ");
        scanf("%d",&karar);
    
    }while(karar==1);
    
    for(int j=0; j<4; j++){
        if(B[j].sonuc==1){
        printf("\nDoğruyu sağlayan noktalar: %.2lf %.2lf",B[j].x, B[j].y);
    }
    }
    
    return 0;
}