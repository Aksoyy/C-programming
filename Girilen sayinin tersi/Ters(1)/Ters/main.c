#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int ters(int s)
{
	int b = 0; // basamak say�s� i�in
	int a=s; // girilen say�y� bir de�i�kene e�itledim. Basamak say�s�n� bulmak i�in
	while(a>0)
	{
		a=(a/10);
		b++; // basanamak say�s�n� buldum.
	}
	
	int t=pow(10,b-1); // 10'nun �st�n� ald�m  123 �rnek 3 basamakl� 10^3 = 1000 olur. 
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
