#include <stdio.h>
#include <stdlib.h>


int lineerArama(int array[],int boyut,int aranan)//lineer arama fonksiyonunu tan�ml�yorum
{
	int i;
	for(i=0;i<boyut;i++)//donguyu ba�latarak arama islemini ger�ekle�tiriyiorum
	{
		if(aranan==array[i])//de�er kontrol islemi yap�yorum
		{
			return printf("Aradiginz eleman dizide bulunmaktadir");
		}	
	}
	return -1;	
}



int main() {

int elemanSayi;
printf("Dizinin Boyutunu Giriniz\n");
scanf("%d",&elemanSayi);//Dizinin boyutunu al�yorum
int dizi[elemanSayi];//dizinin boyutunu belirledim
printf("Dizi Elemanlarini Giriniz\n");
int i;
for(i=0;i<elemanSayi;i++)
{
	scanf("%d",&dizi[i]);//dizinin elemanlar�n� al�yorum
}
printf("Aranan Sayiyi Girin");
int aranan;
scanf("%d",&aranan);
int sonuc=lineerArama(dizi,elemanSayi,aranan);//lineerarama fonksiyonunu sonuc degiskenine at�yorum
if(sonuc==-1)//ko�ul kontrol ile kullan�c�yo bilgilendirme yap�yorum
{
	printf("Aradiginiz eleman dizide bulunmamaktadir");	
}
if(sonuc==1)
{
	printf("%d",sonuc);
}




	
	return 0;
}
