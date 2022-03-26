#include <stdio.h>

int pw(int, int);

int main()
{
   int s, sonuc, gecici, bdeger, basamak,sayac = 1, toplam = 0, adet = 0,ekadar ;
   printf("LUTFEN KACA KADAR KONTROL ETMEK ISTIYORSANIZ GIRINIZ\n");
   scanf("%d", &ekadar);
 
   
   while(sayac < ekadar)	{
   s = sayac;
   sonuc = 0;
   basamak = 0;
   gecici = s;
   while (gecici != 0) {
      basamak++;
      gecici = gecici/10;
   }

   gecici = s;

   while (gecici != 0) {
      bdeger = gecici%10;
      sonuc = sonuc + pw(bdeger, basamak);
      gecici = gecici/10;
   }
	// 1 ise direk armstrong diğer bir basamakli sayilar armstrgon degil
   if ( (s == 1) ||  ( ( s == sonuc) && (basamak !=1)))
   	{
   		// basmasını istemiyorsan burayı yoruma al
   		printf("%d ARMSTRONG SAYIDIR.\n", s);
		adet++;
		toplam += s;
	}
     


  sayac++;
  }
  
   printf("Armstrong sayi adedi: %d \n", adet);
   printf("Armstrong sayilarin toplami: %d \n", toplam);
  
   return 0;
}

// fonksiyon kullanmanız istenilmiyorsa yolladidim ikici kodu kullanirsin aynisi zaten
int pw(int s, int r) {
   int c, p = 1;

   for (c = 1; c <= r; c++)
      p = p*s;

   return p;
   
}
