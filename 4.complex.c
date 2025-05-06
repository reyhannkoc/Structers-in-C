#include <stdio.h>
struct cmp{
    int reel;
    int img;
};
struct cmp A1,A2,sonuc,result;

struct cmp func(struct cmp B1, struct cmp B2, char b){
    
    if(b=='+'){
        sonuc.reel = B1.reel + B2.reel;
        sonuc.img = B1.img + B2.img;
        
    }
    else{
        sonuc.reel = B1.reel - B2.reel;
        sonuc.img = B1.img - B2.img;
    }
    return sonuc;
}

int main()
{
    char opr;
    printf("reel: ");
    scanf("%d",&A1.reel);
    printf("img: ");
    scanf("%d",&A1.img);
    printf("reel: ");
    scanf("%d",&A2.reel);
    printf("img: ");
    scanf("%d",&A2.img);
    printf("yapmak istediğiniz işlemin operator unu giriniz: "); //scanf("%c",&dummy); -> boşluk yerine kullanabilirsin
    scanf(" %c",&opr);
    
    result = func(A1, A2, opr);
    printf("%d ",result.reel);
    if(result.img >= 0) printf("+ %d",result.img);
    else printf("%di",result.img);
    
    return 0;
}