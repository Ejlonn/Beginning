#include <stdio.h>

int add(int x,int y){
	
	int sum = 0;
	sum=(x+y);
	return sum;
	
}
int minus(int x,int y){
	
	int sum=0;
	sum=(x-y);
	return sum;
}
int multiplicate(int x,int y){
	
	int sum=1;
	sum = x*y;
	return sum;
	
}
int divide(int x,int y){
	
	int sum=1;
	sum= x/y;
	return sum;
}
int module(int x,int y){	
	int sum=1;
	sum=x%y;
	return sum;		
}


int main(){
	
	char op;
		
while(op !='q'){
	printf("Hesap Makinesi.\nToplama icin: '+'\nCikartma icin: '-'\nCarpma icin: '*'\nBolme icin: '/'\nBolumlerinden kalani Bulmak icin: '%%'\nCikis yapmak icin q tusuna basiniz.\n\n");
	printf("Bir islem seciniz: ");
	scanf("%c",&op);
	switch(op){	
		int sum;
		int num1,num2;
		case '+':
			printf("Lutfen ilk sayiyi giriniz: ");
			scanf("%d",&num1);
			printf("Lutfen ikinci sayiyi giriniz: ");
			scanf("%d",&num2);
			sum= add(num1,num2);
			printf("Iki sayinin toplamlari sonucu: %d\n",sum);
			printf("Devam etmek icin bir tusa basiniz:");
			printf("\n");
			getchar();		
			getchar();
			break;
		case '-':
			printf("Lutfen ilk sayiyi giriniz: ");
			scanf("%d",&num1);
			printf("Lutfen ikinci sayiyi giriniz: ");
			scanf("%d",&num2);
			sum= minus(num1,num2);
			printf("Iki sayinin farklari sonucu: %d\n",sum);
			printf("Devam etmek icin bir tusa basiniz:");
			printf("\n");
			getchar();		
			getchar();
			break;
		case '*':
			printf("Lutfen ilk sayiyi giriniz: ");
			scanf("%d",&num1);
			printf("Lutfen ikinci sayiyi giriniz: ");
			scanf("%d",&num2);
			sum= multiplicate(num1,num2);
			printf("Iki sayinin carpimlari sonucu: %d\n",sum);
			printf("Devam etmek icin bir tusa basiniz:");
			printf("\n");
			getchar();		
			getchar();
			break;
		case '/':
			printf("Lutfen ilk sayiyi giriniz: ");
			scanf("%d",&num1);
			printf("Lutfen ikinci sayiyi giriniz: ");
			scanf("%d",&num2);
			sum= divide(num1,num2);
			printf("Iki sayinin bolumleri sonucu: %d\n",sum);
			printf("Devam etmek icin bir tusa basiniz:");
			printf("\n");
			getchar();		
			getchar();
			break;
		case '%':
			printf("Lutfen ilk sayiyi giriniz: ");
			scanf("%d",&num1);
			printf("Lutfen ikinci sayiyi giriniz: ");
			scanf("%d",&num2);
			sum= module(num1,num2);
			printf("Ilk sayinin ikinci sayiya bolumunden kalan: %d\n",sum);
			printf("Devam etmek icin bir tusa basiniz:");
			printf("\n");
			getchar();		
			getchar();
			break;
		case 'q':
			printf("Cikis yaptiniz.");
			break;
		default: 
			printf("Gecersiz bir giris yaptiniz.\n");
			printf("Devam etmek icin lutfen entera basiniz:\n");
			getchar();
			getchar();
			break;
	}
	
	
	
	
}
		
	return 0;
}

