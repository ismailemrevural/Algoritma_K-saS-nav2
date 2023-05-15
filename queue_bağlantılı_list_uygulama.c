#include <stdio.h>
#include <stdlib.h>


	struct queue //queue yapisi için bir struct tanýmlýyorum
	{
		int data;
		struct queue *next;
	};
	struct queue *front=NULL;//queue yapýsýnýn temel bileþenlerinden front (ön) tanýmlýyorum
	struct queue *rear=NULL;//queue yapýsýnýn temel bileþenlerinden rear (ön) tanýmlýyorum
	
	void addQueue()//ekleme iþlemi için bir fonksiyon tanýmlýyorum
	{
		int data;
		printf("Eklemek Istediginiz Elemani Giriniz \n");
		scanf("%d",&data);//eklemek istenen elemaný kullanicidan aliyorum
		printf("Girdiginiz Deger %d\n\n",data);
			
		if(front==NULL)//queue nin boþ ise bu ksýým isleniyor
		{
			struct queue *new=(struct queue *)malloc(sizeof(struct queue));//queue türünden yeni bir düðüm olusuturuluyor
			new->data=data;//yeni düðümün datasý kullanicidan aldýðýmýz dataya esitleniyor
			new->next=NULL;//eleman bos queue ye yeni eklendiði için ve ondan sonra baska eleman olmadýðý için next kýsmý NULL(bos)deger göstericektir
			front=rear=new;//tek eleman yeni düðüm olduðpu için front(ön)ve rear(arka) deðerler girdiðimiz deðere esitleniyor
		}
		else//bu durum eðer queue doluysa
		{
			struct queue *new=(struct queue *)malloc(sizeof(struct queue));//ekelyeceðimiz veri için bir queue türünden düðüm oluþtuuruyorz
			new->data=data;//yeni düðümün datasý kullanýcýan alýnýan dataya esitleniyor
			new->next=NULL;//queue de eleman sona eklendðiðnden yenü düðümün nexti NULL deðer göstericek þekilde eþitleniyor
			rear->next=new;//düðüm eklenmeden önceki mevcut queuedeki rear(arka) deðerin nexti artýk yeni eklenen new deðeri göstereck þekilde belirleniyor
			rear=new;//Son olarak eklenen düðümün son dðüüm olarak deðistiriþliyor	
		}	
	}
	void dequeue()//bu fonksiyon kuyruktan eleman silmek içindir
	{
		if(front==NULL)//eðer liste boþsa bu ksýým geçerlidir
		{
			printf("Liste Bos");
		}
		else//eðer liste doluysa bu kýsým geçerlidir
		{
			struct queue *temp=front;//hafýzdaki yeri boþaltmak için sileceðmiz front deðerini queue türünden bir temp deðiskenine atýyoruz
			front=front->next;//mevcut front deðerdie front tan bir sonraki deðere atýyoruz
			free(temp);//burada ise hafýzda front için ayrýlan yeri serbest býrakýyourz
		}
	}
	void display()//bu fonksiyon görüntüleme islemi icindir
	{
		if(front==NULL)//queue eðer boþsa bu ksýým geçerlidir
		{
			printf("Liste Bos");
		}
		else//queue eðer doluysa bu ksýým geçerlidir
		{
		struct queue *index=front;//yazdýrma iþlemi için front deðeri tutan queue türünden bir index pointeri tanýmlýyoruz
		printf("Queue :   ");
		while(index!=NULL)//index queue üzerinde gezinirken null deðere gelene kadar devam edicek
		{
			printf("%d - ",index->data);//deðerleri ekrana yazdýrýyoruyz	
			index=index->next;//her bir döngü sonunda Gezinmenin devamý için front deðeri tutan indexi ondan sonra gelen elemana eþitliyorz			
		}
		printf("\n");
		}	
	}
	
int main() {
	int a;
	while(1)//programýn istenmedikçe kapanmamasý için while döngüsünü baslattým
	{
		printf("Lutfen Assagidaki Islemlerden Birini Seciniz\n");
		printf("1.Ekleme\n2.Silme\n3.Goruntuleme\n4.Cikis\n\n");
		scanf("%d",&a);//kullanýcýdan istediði islemi alýyorum
		if(a==4){printf("Programndan Cikiliyor ...");}
		else{printf("Seciminiz %d \n",a);}
	switch(a)//alýnan a deðeri için switch ifadesini baslatýorum
	{
		case 1:
		addQueue();//1 durumu queueden eleman ekleme
		break;
		case 2:
		dequeue();//2 durumu queue den eleman silme
		break;
		case 3:
		display();//3 durumu queuedeki elemanlari ekrana yazdýrma
		break;
		case 4://4 durumu ise programndan çýkýþ yapýlýyor
		return 0;
		default:
		printf("Lutfen Gecerli bir Ýslem giriniz\n"); 	
	}
}

	
	
	
	
	
	

	return 0;
}
