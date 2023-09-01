#include <stdio.h>

// banka yeni deneme.

int withdraw(int *balance,int cost){
	
		printf("Guncel bakiyeniz: %d\t",*balance);
		printf("Lutfen cekmek istediginiz miktari giriniz: ");
		scanf("%d",&cost);
		if (cost<0 || cost>*balance){
			printf("Lutfen gecerli bir tutar giriniz!\n");
	}
		
		else {
		*balance -= cost;
		printf("%d TL Cektiniz. Guncel bakiyeniz: %d\n",cost,*balance);
		
		}
		return *balance;	
	}	
int deposit(int *balance,int cost){	

		printf("Guncel bakiyeniz: %d\t",*balance);
		printf("Lutfen yatirmak istediginiz miktari giriniz: ");
		scanf("%d",&cost);
	if (cost < 0){

		printf("Gecersiz bir tutar girdiniz!\n");
		}
	else if (cost > 200000){
		printf("Bankamiz gunluk yatirma limitini astiniz!\n");
	
	}
	else{
		*balance += cost;
		printf("%d TL Yatirdiniz. Guncel bakiyeniz: %d\n",cost,*balance);
	}
	return *balance;
}
int transfer(int *balance,int cost){
	
		printf("Guncel bakiyeniz: %d\t",*balance);
		printf("Lutfen havale yapmak istediginiz miktari giriniz: ");
		scanf("%d",&cost);
	if (cost < 0 || cost>*balance){
		printf("Gecersiz bir tutar girdiniz!\n");
		}
	else if (cost > 200000){
		printf("Bankamiz gunluk yatirma limitini astiniz!\n");
}
	else {
		*balance -= cost;
		printf("%d TL Gonderdiniz. Guncel bakiyeniz: %d\n",cost,*balance);
	}
return *balance;	
}

int main(){
	
	int balance = 1000;
	int op;
	int cost;

while (op != 5){
		
	printf("Islemler\n1:Para Cekme\n2:Para Yatirma\n3:Havale Yapma\n4:Bakiye Sorgulama\n5:Kart Iade\n\n\n");
	
	printf("Islemi Seciniz: ");

	scanf("%d",&op);
	
	
	switch(op){
		
		case 1:
			withdraw(&balance,cost);
			break;			
		case 2:
			deposit(&balance,cost);
			break;
		case 3:
			transfer(&balance,cost);
			break;			
		case 4: 
			printf("Hesabinizda %d TL Bulunmaktadir.\n",balance);
			break;
		case 5:
			printf("Guvenli Cikis yapildi. Tekrar bekleriz.");
			break;
		default: {
			printf("Hatali tuslama yaptiniz.\n");	
		
			break;
		}			
		
	}	
}
	return 0;
}
