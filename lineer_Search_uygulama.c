#include <stdio.h>
#include <stdlib.h>


int lineerArama(int array[],int boyut,int aranan)//lineer arama fonksiyonunu tanımlıyorum
{
	int i;
	for(i=0;i<boyut;i++)//donguyu başlatarak arama islemini gerçekleştiriyiorum
	{
		if(aranan==array[i])//değer kontrol islemi yapıyorum
		{
			return printf("Aradiginz eleman dizide bulunmaktadir");
		}	
	}
	return -1;	
}



int main() {

int elemanSayi;
printf("Dizinin Boyutunu Giriniz\n");
scanf("%d",&elemanSayi);//Dizinin boyutunu alıyorum
int dizi[elemanSayi];//dizinin boyutunu belirledim
printf("Dizi Elemanlarini Giriniz\n");
int i;
for(i=0;i<elemanSayi;i++)
{
	scanf("%d",&dizi[i]);//dizinin elemanlarını alıyorum
}
printf("Aranan Sayiyi Girin");
int aranan;
scanf("%d",&aranan);
int sonuc=lineerArama(dizi,elemanSayi,aranan);//lineerarama fonksiyonunu sonuc degiskenine atıyorum
if(sonuc==-1)//koşul kontrol ile kullanıcıyo bilgilendirme yapıyorum
{
	printf("Aradiginiz eleman dizide bulunmamaktadir");	
}
if(sonuc==1)
{
	printf("%d",sonuc);
}




	
	return 0;
}
