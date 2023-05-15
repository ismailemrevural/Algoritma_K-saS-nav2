#include <stdio.h>
#include <stdlib.h>


	struct queue //queue yapisi i�in bir struct tan�ml�yorum
	{
		int data;
		struct queue *next;
	};
	struct queue *front=NULL;//queue yap�s�n�n temel bile�enlerinden front (�n) tan�ml�yorum
	struct queue *rear=NULL;//queue yap�s�n�n temel bile�enlerinden rear (�n) tan�ml�yorum
	
	void addQueue()//ekleme i�lemi i�in bir fonksiyon tan�ml�yorum
	{
		int data;
		printf("Eklemek Istediginiz Elemani Giriniz \n");
		scanf("%d",&data);//eklemek istenen eleman� kullanicidan aliyorum
		printf("Girdiginiz Deger %d\n\n",data);
			
		if(front==NULL)//queue nin bo� ise bu ks��m isleniyor
		{
			struct queue *new=(struct queue *)malloc(sizeof(struct queue));//queue t�r�nden yeni bir d���m olusuturuluyor
			new->data=data;//yeni d���m�n datas� kullanicidan ald���m�z dataya esitleniyor
			new->next=NULL;//eleman bos queue ye yeni eklendi�i i�in ve ondan sonra baska eleman olmad��� i�in next k�sm� NULL(bos)deger g�stericektir
			front=rear=new;//tek eleman yeni d���m oldu�pu i�in front(�n)ve rear(arka) de�erler girdi�imiz de�ere esitleniyor
		}
		else//bu durum e�er queue doluysa
		{
			struct queue *new=(struct queue *)malloc(sizeof(struct queue));//ekelyece�imiz veri i�in bir queue t�r�nden d���m olu�tuuruyorz
			new->data=data;//yeni d���m�n datas� kullan�c�an al�n�an dataya esitleniyor
			new->next=NULL;//queue de eleman sona eklend�i�nden yen� d���m�n nexti NULL de�er g�stericek �ekilde e�itleniyor
			rear->next=new;//d���m eklenmeden �nceki mevcut queuedeki rear(arka) de�erin nexti art�k yeni eklenen new de�eri g�stereck �ekilde belirleniyor
			rear=new;//Son olarak eklenen d���m�n son d���m olarak de�istiri�liyor	
		}	
	}
	void dequeue()//bu fonksiyon kuyruktan eleman silmek i�indir
	{
		if(front==NULL)//e�er liste bo�sa bu ks��m ge�erlidir
		{
			printf("Liste Bos");
		}
		else//e�er liste doluysa bu k�s�m ge�erlidir
		{
			struct queue *temp=front;//haf�zdaki yeri bo�altmak i�in silece�miz front de�erini queue t�r�nden bir temp de�iskenine at�yoruz
			front=front->next;//mevcut front de�erdie front tan bir sonraki de�ere at�yoruz
			free(temp);//burada ise haf�zda front i�in ayr�lan yeri serbest b�rak�yourz
		}
	}
	void display()//bu fonksiyon g�r�nt�leme islemi icindir
	{
		if(front==NULL)//queue e�er bo�sa bu ks��m ge�erlidir
		{
			printf("Liste Bos");
		}
		else//queue e�er doluysa bu ks��m ge�erlidir
		{
		struct queue *index=front;//yazd�rma i�lemi i�in front de�eri tutan queue t�r�nden bir index pointeri tan�ml�yoruz
		printf("Queue :   ");
		while(index!=NULL)//index queue �zerinde gezinirken null de�ere gelene kadar devam edicek
		{
			printf("%d - ",index->data);//de�erleri ekrana yazd�r�yoruyz	
			index=index->next;//her bir d�ng� sonunda Gezinmenin devam� i�in front de�eri tutan indexi ondan sonra gelen elemana e�itliyorz			
		}
		printf("\n");
		}	
	}
	
int main() {
	int a;
	while(1)//program�n istenmedik�e kapanmamas� i�in while d�ng�s�n� baslatt�m
	{
		printf("Lutfen Assagidaki Islemlerden Birini Seciniz\n");
		printf("1.Ekleme\n2.Silme\n3.Goruntuleme\n4.Cikis\n\n");
		scanf("%d",&a);//kullan�c�dan istedi�i islemi al�yorum
		if(a==4){printf("Programndan Cikiliyor ...");}
		else{printf("Seciminiz %d \n",a);}
	switch(a)//al�nan a de�eri i�in switch ifadesini baslat�orum
	{
		case 1:
		addQueue();//1 durumu queueden eleman ekleme
		break;
		case 2:
		dequeue();//2 durumu queue den eleman silme
		break;
		case 3:
		display();//3 durumu queuedeki elemanlari ekrana yazd�rma
		break;
		case 4://4 durumu ise programndan ��k�� yap�l�yor
		return 0;
		default:
		printf("Lutfen Gecerli bir �slem giriniz\n"); 	
	}
}

	
	
	
	
	
	

	return 0;
}
