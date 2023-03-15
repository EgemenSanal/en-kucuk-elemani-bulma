#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int enkucukBulma(){
	
	int boyut;
	int i;
	int minimum;
	int sayilar;
	
	printf("Kac Tane Sayi Girmek Istersiniz?\n");
	scanf("%d",&boyut);
	
	printf("Sayilari Giriniz\n");
	scanf("%d",&sayilar);
	
	minimum = sayilar; 
	
	for(i = 0;i <= boyut-2;i++){  
		scanf("%d",&sayilar);  
		if(sayilar < minimum){ 
			minimum = sayilar; 
		}
	}
	
	printf("EN KUCUK SAYI = %d\n",minimum);
	return 0; 
}
/*
boyut = n
8,9,10,11 = 4 islem
19.satirda 1
21.satirda 1+n-1+n-1 = 2n-1
23.satirda 1
24.satirda 1
29. satirda 1
T(n) = 2n+6 = O(n)


*/

int main(int argc, char *argv[]) {
	
	
	
	enkucukBulma();
	
	
	return 0;
}
