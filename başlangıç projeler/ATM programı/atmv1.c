#include <stdio.h>



int main(){
	
	int islem;
	int bakiye =1000;
	int tutar;
	
	
	printf("Islemler\n1:Para Cekme\n2:Para Yatirma\n3:Havale Yapma\n4:Bakiye Sorgulama\n5:Kart Iade\n\n\n");
	
	printf("Islemi Seciniz:");
	scanf("%d",&islem);
	

	
	switch(islem){
		case 1:
		
			printf("Guncel bakiyeniz:%d\n",bakiye);
			printf("Cekilecek Tutar:");
			scanf("%d",&tutar);
			if (tutar > bakiye){
			printf("Bakiye Yetersiz!\n");
			break;
			
		}
			else{
			
			bakiye -= tutar;
			printf("%d TL Cektiniz.Guncel bakiye %d",tutar,bakiye);
			break;
			
		
	}
		   	
		case 2:
			
			printf("Guncel bakiyeniz:%d\n",bakiye);
			printf("Lutfen yatirmak istediginiz tutari giriniz:");
			scanf("%d",&tutar);
			
			if (tutar <= 0)	{
				
			printf("Gecersiz bir tutar girdiniz!");
			
		}
			else{
			bakiye += tutar,
			printf("%d TL Yatirdiniz. Guncel Bakiyeniz: %d",tutar,bakiye);
			
			break;
				
		}	
		case 3:
			
			printf("Guncel bakiyeniz:%d\n",bakiye);
			printf("Havale yapmak istediginiz tutari giriniz:");
			scanf("%d",&tutar);
			
			if (tutar > bakiye){
			
			printf("Bakiye Yetersiz!\n");
			break;
			
		}
			else{
			
			bakiye -= tutar;
			printf("%d TL Gonderdiniz. Guncel Bakiyeniz: %d",tutar,bakiye);
			break;
		}
		case 4:
		
			printf("Guncel bakiyeniz %d TL'dir",bakiye);
			break;
			
		case 5:
		
			printf("Basariyla Guvenli cikis yaptiniz! Tekrar bekleriz.");
			break;
		default:
			printf("Gecersiz islem yaptiniz!");
			break;
		}
	
	return 0;
	}


		
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	

