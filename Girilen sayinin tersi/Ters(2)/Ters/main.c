#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int ters(int s)
{
	int t=pow(10,floor(log10(abs(s)))); // 10'nun �st�n� ald�m  123 �rnek 3 basamakl� 10^2 = 100 olur. 
	int toplam=0;
	while(t>0)
	{
		toplam += (s%10)*t; //Says�n�n modunu al�p �st ile �arp�yorum �rnek 123%10 = 3 * 100  = 300 olur.Toplam = 0+300 = 300 olur.
		s=s/10; //Say�y� 10 ar 10 ar b�lerek gidiyorum. �rnek 123/10 = 12
		t=t/10; // �st� 10 ar 10 ar b�lerek 0 kadar gidiyorum. �rnek 100 /10 = 10 �st 10>0 dan b�y�k  oldu�u i�in tekrar while'a d�ner
	}
	return toplam;
}


int main(int argc, char *argv[]) 
{
	int s;
	
	printf("Sayi giriniz : ");scanf("%d",&s);
	printf("\nSonuc : %d \n\n", ters(s)*3 );
	
	system("pause");
	return 0;
}
