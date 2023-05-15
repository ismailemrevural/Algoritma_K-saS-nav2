#include <stdio.h>
#include <stdlib.h>
void swap(int *x,int *y)//bubble sortta kullanýlacak yer deðiþtirme iþlemi için swap fonksiyonunu tanýmladým
{
	int temp;
	temp=*x;
	*x=*y;
	*y=temp;		
}
//bubble sort tanýmý her bir eleman yanýndaki eleman ile karþýlaþtýrýlýr. Eðer ilk elemanýn deðeri, ikinci elemanýn deðerinden büyükse, iki eleman yer deðiþtirir.
void bubbleSort(int arr[],int n)//kabarcýk sýralama fonksiyonunu tanýmladým
{
	int i,j;//döngü için deðiþken tanýmladým
	for(i=0;i<n;i++)
	{
		for(j=0;j< n -i- 1;j++)
		{
			if(arr[j]>arr[j+1])
			swap(&arr[j],&arr[j+1]);//yer deðiþtirme iþlemi için bir swap fonksiyonu kullanýdm
			
		}
		
	}	
}


	int ikiliArama(int arr[], int bas, int son, int x)
{
    if (son >= bas) {
        int orta = bas + (son - bas) / 2;
        // aranan deðer direk ortadaki deðerise
        if (arr[orta] == x)
            return orta;
        // eðer aranan ortadaki deðerden küçükse dizi sýralý olduðundan 
        // anacak sol alt dizide olabilir
        if (arr[orta] > x)
            return ikiliArama(arr, bas, orta - 1, x);
        // deðilse, 
        // anack sað alt dizide olabilir
        return ikiliArama(arr, orta + 1, son, x);
    }
    //aranan eleman dize yoksa buraya ulaþýrýz
    return -1;
}
	
	




int main() {

	int dizi[]={4,8,3,84,47,76,9,24,68};
	int n=sizeof(dizi)/sizeof(dizi[0]);//eleman sayýsýný dizininboyutunu dizinin ilk elemanýnýn boyutuna bölerek bulduk	
    bubbleSort(dizi,n);//bubbleSort fonksiyonunu çaðýrarak diziyi önce sýraladým
    printf("Aramak Istediginiz Elemani Giriniz\n");
    int aranan;
    scanf("%d",&aranan);//aranan elamaný kullanýcýdan alýyorum
	int sonuc=ikiliArama(dizi,0,n-1,aranan);//ve fonksiyonu sonuc deðiþkenine atayarak çaðýrýyorum
	if(sonuc==-1)
	{
		printf("Aranan Eleman Dizide Mevcut Degildir");
	}
	else
	{
		printf("Aradiginiz Eleman  Dizide Mevcuttur");
	}
	
	
	
	return 0;
}
