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

    printf("Ýntegral Hesaplama Programýna Hoþgeldiniz ...\n");
    printf("\nÝntegralin üst sýnýr deðerini giriniz :");
    scanf("%d",&ustsinir);
    fflush(stdin);
    printf("Ýntegralin alt sýnýr deðerini giriniz :");
    scanf("%d",&altsinir);
    fflush(stdin);

    int i,j,katsayi;

    printf("Ýntegral alýnýcak fonksiyon kaç kat sayýlý ?:");
    scanf("%d",&katsayi);
    fflush(stdin);

    for(i=0;i<katsayi;i++)
    {
        printf("%d.kat sayiyi giriniz :",i+1);
        scanf("%d",&katsayilar[i]);
        fflush(stdin);
        printf("%d.kat sayinin üssünü giriniz :",i+1);
        scanf("%d",&usleri[i]);
        fflush(stdin);
    }
    printf("\nÝntegralini almak istediðiniz fonksiyon ..:\n");
    printf("Üst sýnýrýnýz : %d \t Alt sýnýrýnýz : %d\n",ustsinir,altsinir);
    for(i=0;i<katsayi;i++)
    {
        printf("%dx^%d ",katsayilar[i],usleri[i]);
    }
    printf("\n");
    printf("Ýntegrali alýnmýþ fonksiyonunuz :\n");
    for(i=0;i<katsayi;i++)
    {
        yenikatsayi[i]=katsayilar[i];
        yeniusler[i]=usleri[i]+1;
        printf("(%dx^%d)/%d ",yenikatsayi[i],yeniusler[i],yeniusler[i]);
    }
    printf("\n\nÝntegral alýnýyor... :\n");

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
    printf("\nÜst sýnýr degerimiz : %.2f\n",lalasonuc);
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
    printf("\nAlt sýnýr degerimiz : %.2f\n",lalasonuc1);
    printf("\nÝntegral sonucunuz : %.4f\n",lalasonuc-lalasonuc1);

  return 0;
}

