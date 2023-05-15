#include <stdio.h>
#include <stdlib.h>
void swap(int *x,int *y)//bubble sortta kullan�lacak yer de�i�tirme i�lemi i�in swap fonksiyonunu tan�mlad�m
{
	int temp;
	temp=*x;
	*x=*y;
	*y=temp;		
}
//bubble sort tan�m� her bir eleman yan�ndaki eleman ile kar��la�t�r�l�r. E�er ilk eleman�n de�eri, ikinci eleman�n de�erinden b�y�kse, iki eleman yer de�i�tirir.
void bubbleSort(int arr[],int n)//kabarc�k s�ralama fonksiyonunu tan�mlad�m
{
	int i,j;//d�ng� i�in de�i�ken tan�mlad�m
	for(i=0;i<n;i++)
	{
		for(j=0;j< n -i- 1;j++)
		{
			if(arr[j]>arr[j+1])
			swap(&arr[j],&arr[j+1]);//yer de�i�tirme i�lemi i�in bir swap fonksiyonu kullan�dm
			
		}
		
	}	
}


	int ikiliArama(int arr[], int bas, int son, int x)
{
    if (son >= bas) {
        int orta = bas + (son - bas) / 2;
        // aranan de�er direk ortadaki de�erise
        if (arr[orta] == x)
            return orta;
        // e�er aranan ortadaki de�erden k���kse dizi s�ral� oldu�undan 
        // anacak sol alt dizide olabilir
        if (arr[orta] > x)
            return ikiliArama(arr, bas, orta - 1, x);
        // de�ilse, 
        // anack sa� alt dizide olabilir
        return ikiliArama(arr, orta + 1, son, x);
    }
    //aranan eleman dize yoksa buraya ula��r�z
    return -1;
}
	
	




int main() {

	int dizi[]={4,8,3,84,47,76,9,24,68};
	int n=sizeof(dizi)/sizeof(dizi[0]);//eleman say�s�n� dizininboyutunu dizinin ilk eleman�n�n boyutuna b�lerek bulduk	
    bubbleSort(dizi,n);//bubbleSort fonksiyonunu �a��rarak diziyi �nce s�ralad�m
    printf("Aramak Istediginiz Elemani Giriniz\n");
    int aranan;
    scanf("%d",&aranan);//aranan elaman� kullan�c�dan al�yorum
	int sonuc=ikiliArama(dizi,0,n-1,aranan);//ve fonksiyonu sonuc de�i�kenine atayarak �a��r�yorum
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
