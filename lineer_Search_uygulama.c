#include <stdio.h>
#include <stdlib.h>


int lineerArama(int array[],int boyut,int aranan)//lineer arama fonksiyonunu tanýmlýyorum
{
	int i;
	for(i=0;i<boyut;i++)//donguyu baþlatarak arama islemini gerçekleþtiriyiorum
	{
		if(aranan==array[i])//deðer kontrol islemi yapýyorum
		{
			return printf("Aradiginz eleman dizide bulunmaktadir");
		}	
	}
	return -1;	
}



int main() {

int elemanSayi;
printf("Dizinin Boyutunu Giriniz\n");
scanf("%d",&elemanSayi);//Dizinin boyutunu alýyorum
int dizi[elemanSayi];//dizinin boyutunu belirledim
printf("Dizi Elemanlarini Giriniz\n");
int i;
for(i=0;i<elemanSayi;i++)
{
	scanf("%d",&dizi[i]);//dizinin elemanlarýný alýyorum
}
printf("Aranan Sayiyi Girin");
int aranan;
scanf("%d",&aranan);
int sonuc=lineerArama(dizi,elemanSayi,aranan);//lineerarama fonksiyonunu sonuc degiskenine atýyorum
if(sonuc==-1)//koþul kontrol ile kullanýcýyo bilgilendirme yapýyorum
{
	printf("Aradiginiz eleman dizide bulunmamaktadir");	
}
if(sonuc==1)
{
	printf("%d",sonuc);
}




	
	return 0;
}
