#include <stdio.h>

int main() {
	int sayi,t;
	printf("Faktoriyel hesaplama programina hos geldiniz!\n");
	printf("Lutfen faktoriyelini hesaplamak istediðiniz sayiyi giriniz: ");
	scanf("%d",&sayi);
	t = 1;
	for(sayi; sayi > 0; sayi--) {
		t = t * sayi;
	}
	printf("\n Sayinin faktoriyeli: %d",t);
	return 0;
}
