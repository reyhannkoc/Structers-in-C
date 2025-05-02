#include <stdio.h>
#include <math.h>
struct noktatipi{
    int x,y;
};

struct noktatipi oku(void);

float mesafe_fonk(struct noktatipi*, struct noktatipi*);
int main(){
    struct noktatipi n1, n2;
    n1 = oku();
    n2 = oku();
    
    float mesafe;
    mesafe = mesafe_fonk(&n1, &n2);
    printf("iki noktanın arasındaki: %5.2f", mesafe);
    return 0;
}
struct noktatipi oku(void){
    struct noktatipi gecici;
    printf("noktanın x ve y kordinatlarını giriniz: ");
    scanf("%d%d", &gecici.x, &gecici.y);
    return gecici;
}
float mesafe_fonk(struct noktatipi *a , struct noktatipi *b ){
    
    float mes = sqrt(pow((a->x - b->x),2) + pow((a->y - b->y),2));
    
    return mes;
}

