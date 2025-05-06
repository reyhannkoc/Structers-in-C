#include <stdio.h>
#include <string.h>
struct araba{
    int satis;
    union{
        int satis_degeri;
        char model[10];
    }bilgi;
};
struct araba A;
int main()
{
    printf("Araç satıldı mı? Evet ise 1, hayır ise 2 i tuşlayın.\n");
    scanf("%d",&A.satis);
    if(A.satis == 1){
        strcpy(A.bilgi.model,"Anadolu");
        printf("\n%s",A.bilgi.model);
    }
    else if(A.satis == 2){
        A.bilgi.satis_degeri = 15000;
        printf("\n%d",A.bilgi.satis_degeri);
    }
    else{
        printf("\nLütfen geçerli bir tuşlama yapınız.");
        
    }

    return 0;
}