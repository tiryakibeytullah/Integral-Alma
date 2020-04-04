#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){

    setlocale(LC_ALL, "Turkish");

    int altsinir,ustsinir;
    int katsayilar[10]={0};
    int usleri[10]={0};
    int yenikatsayi[10]={0};
    int yeniusler[10]={0};

    printf("�ntegral Hesaplama Program�na Ho�geldiniz ...\n");
    printf("\n�ntegralin �st s�n�r de�erini giriniz :");
    scanf("%d",&ustsinir);
    fflush(stdin);
    printf("�ntegralin alt s�n�r de�erini giriniz :");
    scanf("%d",&altsinir);
    fflush(stdin);

    int i,j,katsayi;

    printf("�ntegral al�n�cak fonksiyon ka� kat say�l� ?:");
    scanf("%d",&katsayi);
    fflush(stdin);

    for(i=0;i<katsayi;i++)
    {
        printf("%d.kat sayiyi giriniz :",i+1);
        scanf("%d",&katsayilar[i]);
        fflush(stdin);
        printf("%d.kat sayinin �ss�n� giriniz :",i+1);
        scanf("%d",&usleri[i]);
        fflush(stdin);
    }
    printf("\n�ntegralini almak istedi�iniz fonksiyon ..:\n");
    printf("�st s�n�r�n�z : %d \t Alt s�n�r�n�z : %d\n",ustsinir,altsinir);
    for(i=0;i<katsayi;i++)
    {
        printf("%dx^%d ",katsayilar[i],usleri[i]);
    }
    printf("\n");
    printf("�ntegrali al�nm�� fonksiyonunuz :\n");
    for(i=0;i<katsayi;i++)
    {
        yenikatsayi[i]=katsayilar[i];
        yeniusler[i]=usleri[i]+1;
        printf("(%dx^%d)/%d ",yenikatsayi[i],yeniusler[i],yeniusler[i]);
    }
    printf("\n\n�ntegral al�n�yor... :\n");

    float ustintdeger=0;
    float ustintdeger1=0;
    float lalasonuc=0;

    float altintdeger=0;
    float altintdeger1=0;
    float lalasonuc1=0;
    for(i=0;i<katsayi;i++)
    {
        float sonuc=1;

        for(j=0;j<yeniusler[i];j++)
        {
            sonuc=sonuc*ustsinir;
        }
        ustintdeger=(sonuc*yenikatsayi[i]);
        ustintdeger1=(sonuc*yenikatsayi[i])/yeniusler[i];
        lalasonuc+=ustintdeger1;
    }
    printf("\n�st s�n�r degerimiz : %.2f\n",lalasonuc);
    for(i=0;i<katsayi;i++)
    {
        float sonuc=1;
        for(j=0;j<yeniusler[i];j++)
        {
            sonuc=sonuc*altsinir;
        }
        altintdeger=(sonuc*yenikatsayi[i]);
        altintdeger1=(sonuc*yenikatsayi[i])/yeniusler[i];
        lalasonuc1+=altintdeger1;
    }
    printf("\nAlt s�n�r degerimiz : %.2f\n",lalasonuc1);
    printf("\n�ntegral sonucunuz : %.4f\n",lalasonuc-lalasonuc1);

  return 0;
}

