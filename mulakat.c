#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct adayBilgi {
    char *isim;
    char *soyisim;
    char *universite;
    int YDS;
    float GANO;
    char *tel;
  };
struct digerBilgi{
    float kilo;
    float boy;
    int yil;
    char *yer;
};
struct mulakatKayit{
    char * mulakatiYapan;
    char * mulakatTarih;
    struct adayBilgi aday;
    struct digerBilgi adayy;
};

int main(){
    char d2[30];
    char d1[30];
//aday1 bilgileri
struct mulakatKayit aday[5];

    aday[1].mulakatiYapan="Banu Gundogan";
    aday[1].mulakatTarih="04.09.2003";
    aday[1].aday.isim="berat";
    aday[1].aday.soyisim="tasbasi";
    aday[1].aday.universite="ODTU";
    aday[1].aday.YDS=77;
    aday[1].aday.GANO=2.52;
    aday[1].aday.tel="5557776688";
    aday[1].adayy.kilo=88;
    aday[1].adayy.boy=1.77;
    aday[1].adayy.yil=1990;
    aday[1].adayy.yer="ankara";
//aday2 bilgileri

    aday[2].mulakatiYapan="Banu Gundogan";
    aday[2].mulakatTarih="04.09.2003";
    aday[2].aday.isim="ahmet";
    aday[2].aday.soyisim="yılmaz";
    aday[2].aday.universite="ITU";
    aday[2].aday.YDS=87;
    aday[2].aday.GANO=2.80;
    aday[2].aday.tel="5558889988";
    aday[2].adayy.kilo=97;
    aday[2].adayy.boy=1.83;
    aday[2].adayy.yil=1986;
    aday[2].adayy.yer="istanbul";
//aday3 bilgileri

    aday[3].mulakatiYapan="selim kaya";
    aday[3].mulakatTarih="05.09.2003";
    aday[3].aday.isim="ayse";
    aday[3].aday.soyisim="gungor";
    aday[3].aday.universite="YTU";
    aday[3].aday.YDS=84;
    aday[3].aday.GANO=3.61;
    aday[3].aday.tel="5052348602";
    aday[3].adayy.kilo=60;
    aday[3].adayy.boy=1.60;
    aday[3].adayy.yil=1989;
    aday[3].adayy.yer="bursa";
//aday4 bilgileri

    aday[4].mulakatiYapan="selim kaya";
    aday[4].mulakatTarih="04.09.2003";
    aday[4].aday.isim="hakkı";
    aday[4].aday.soyisim="yildirim";
    aday[4].aday.universite="NEU";
    aday[4].aday.YDS=71;
    aday[4].aday.GANO=3.18;
    aday[4].aday.tel="5537008739";
    aday[4].adayy.kilo=79;
    aday[4].adayy.boy=1.75;
    aday[4].adayy.yil=1990;
    aday[4].adayy.yer="ankara";
//aday5 bilgileri

    aday[5].mulakatiYapan="mehmet atay";
    aday[5].mulakatTarih="06.09.2003";
    aday[5].aday.isim="feyza";
    aday[5].aday.soyisim="metin";
    aday[5].aday.universite="ODTU";
    aday[5].aday.YDS=86;
    aday[5].aday.GANO=2.33;
    aday[5].aday.tel="5055575680";
    aday[5].adayy.kilo=58;
    aday[5].adayy.boy=1.65;
    aday[5].adayy.yil=1994;
    aday[5].adayy.yer="yozgat";

void bilgileriYazdir(){
int i;
    for(i=1;i<6;i++){
    printf("\n%d.aday bilgileri-----------\n",i);
    printf("%d.aday isim: %s\n", i, aday[i].aday.isim);
    printf("%d.aday soyisim: %s\n", i, aday[i].aday.soyisim);
    printf("%d.aday mezun oldugu universite: %s\n", i, aday[i].aday.universite);
    printf("%d.aday YDS notu: %d\n", i, aday[i].aday.YDS);
    printf("%d.aday GANO : %f\n", i, aday[i].aday.GANO);
    printf("%d.aday telefon numarası: %s\n", i, aday[i].aday.tel);
    printf("%d.aday kilo: %.2f\n", i, aday[i].adayy.kilo);
    printf("%d.aday boy: %.2f\n", i, aday[i].adayy.boy);
    printf("%d.aday dogum yili: %d\n", i, aday[i].adayy.yil);
    printf("%d.aday dogum yeri: %s\n", i, aday[i].adayy.yer);
    }
};

void boyKilo(){
    int i;
    float enYuksekOran=-1;
    for(i=1;i<6;i++){
            float oran=(aday[i].adayy.boy)/(aday[i].adayy.kilo);
    if(enYuksekOran<oran){
            enYuksekOran=oran;
        }
    }printf("en yuksek oran:%f",enYuksekOran);};

void yds(){
    int i;
    char d2[30];
    char d1[30];
    d2[30]=strcpy(d2,aday[1].aday.isim);
    d1[30]=strcpy(d1,aday[1].aday.isim);
    float enYuksekYDS=-1;
    float enDusukYDS=500;
    for(i=1;i<6;i++){
        float ydsnot=aday[i].aday.YDS;
        if(enYuksekYDS<ydsnot){
                enYuksekYDS=ydsnot;
                d1[30]=strcpy(d1,aday[i].aday.isim);
        }
    }
    for(i=1;i<6;i++){
        float ydsnot=aday[i].aday.YDS;
        if(enDusukYDS>ydsnot){
        enDusukYDS=ydsnot;
        d2[30]=strcpy(d2,aday[i].aday.isim);
    }
    }printf("en yuksek yds notu:%f,kisi:%s\n",enYuksekYDS,d1);
     printf("en dusuk yds notu:%f,kisi:%s\n",enDusukYDS,d2);
    };

void gano(){
    int i;
    char d2[30];
    char d1[30];
    d2[30]=strcpy(d2,aday[1].aday.isim);
    d1[30]=strcpy(d1,aday[1].aday.isim);
    float enYuksekgano=-1;
    float enDusukgano=500;
    for(i=1;i<6;i++){
        float ganonot=aday[i].aday.GANO;
        if(enYuksekgano<ganonot){
                enYuksekgano=ganonot;
                d1[30]=strcpy(d1,aday[i].aday.isim);
        }
    }
    for(i=1;i<6;i++){
        float ganonot=aday[i].aday.GANO;
        if(enDusukgano>ganonot){
        enDusukgano=ganonot;
        d2[30]=strcpy(d2,aday[i].aday.isim);
    }
    }printf("en yuksek gano notu:%f,kisi:%s\n",enYuksekgano,d1);
     printf("en dusuk gano notu:%f, kisi:%s\n",enDusukgano,d2);
    };

void bastakiSondaki(){
    int i;
    char d2[30];
    char d1[30];
    d2[30]=strcpy(d2,aday[1].aday.isim);
    d1[30]=strcpy(d1,aday[1].aday.isim);
    int basHarf;
    int enSondaki=96;
    int enBastaki=123;
    for(i=1;i<6;i++){
        if(aday[i].aday.isim[0]<enBastaki){
            enBastaki=aday[i].aday.isim[0];
            d1[30]=strcpy(d1,aday[i].aday.isim);
    }
    }
    for(i=1;i<6;i++){

        if(aday[i].aday.isim[0]>enSondaki){
            enSondaki=aday[i].aday.isim[0];
            d2[30]=strcpy(d2,aday[i].aday.isim);
    }

    }
    printf("son siradaki:%s\n",d2);
    printf("ilk siradaki:%s\n",d1);

    };

void isimUzunluk(){
	int i;
	char d2[30];
	char d1[30];
	d2[30]=strcpy(d2,aday[0].aday.isim);
	d1[30]=strcpy(d1,aday[0].aday.isim);
	float min=30;
	float max=-1;
        for(i=1;i<6;i++){
		if(strlen(aday[i].aday.isim)<min){
			min=strlen(aday[i].aday.isim);
			d2[30]=strcpy(d2,aday[i].aday.isim);
		}
	}printf("en kisa isim %f harf:%s\n",min,d1);
	printf("en uzun isim %f harf:%s\n",max,d2);
};

void terstenIsim(struct adayBilgi *aday66){//struct mulakatKayit *aday){/*
    int i;
    int min;
    char dizi[30];
    char *d;

    d[30] = strcpy(d, aday[0].aday.isim);
    min = strlen(aday[0].aday.isim);

    for (i=1;i<5;i++){
        if(strlen(aday[i].aday.isim)<min){
            min = strlen(aday[i].aday.isim);
            d[15] = strcpy(d, aday[i].aday.isim);
        }
    }
    printf("%s\n", strrev(d));
};

int secim;

do{
    printf("\n\nmenuden secim yapiniz:");
    printf("********MENU*********\n");
    printf("1.Tum Adaylarin Bilgisini Sirasiyla Ekrana Yazdir\n");
    printf("2.Kilo/Boy Orani En Yuksek Ve En Dusuk Aday\n");
    printf("3.YDS Notu En Yuksek Ve En Dusuk Aday\n");
    printf("4.GANO Notu En Yuksek Ve En Dusuk Aday\n");
    printf("5.Isminin Bas Harfi Alfabede En Onde ve En Sonda Gelen Aday\n");
    printf("6.Isminin Karakter Sayisi En Fazla Ve En Az Olan Aday\n");
    printf("7.Isminin Karakter Sayisi En Az Olan Adayin Adini Tersten Yazdirma\n\n");

    scanf("%d",&secim);

switch(secim){
case 1:
bilgileriYazdir();
break;
case 2:
boyKilo();
break;
case 3:
yds();
break;
case 4:
gano();
break;
case 5:
bastakiSondaki();
break;
case 6:
isimUzunluk();
break;
case 7:
    struct adayBilgi adayx1;
    strcpy(adayx1.isim, "George Orwell");
    terstenIsim(adayx1));
break;
default:
printf("MENUDEN secim yapiniz.");
}
}while(secim!=-1);
return 0;
}
