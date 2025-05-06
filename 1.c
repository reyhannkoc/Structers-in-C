#include <stdio.h>
#include <string.h>
struct ogr{
    int no;
    char ad[10];
    char soyad[10];
    int yas;
};
struct ogr ogrenci1;
struct ogr ogrenci2;

int main()
{
    ogrenci1.no = 522;   //struct ogr ogrenci1 = {552,"Arda","Turhan",11};
    strcpy(ogrenci1.ad,"Arda");
    strcpy(ogrenci1.soyad,"Turhan");
    ogrenci1.yas = 11;
    
    ogrenci2 = ogrenci1;
    printf("öğrenci: %d %s %s %d",ogrenci2.no,ogrenci2.ad,ogrenci2.soyad,ogrenci2.yas);
    

    return 0;
}