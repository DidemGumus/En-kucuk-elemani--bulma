
#include <stdio.h>



int main(){
    printf("----  BIR DIZIDEKI EN KUCUK ELEMANI BULMA  ----\n\n");//1 saniyede gerçekleşir.
    int elemansay;//1 saniyede gerçekleşir.
    printf("LUTFEN ELEMAN SAYISI GIRINIZ:");//1 saniyede gerçekleşir.
    scanf("%d",&elemansay);//1 saniyede gerçekleşir.
    printf("\n--------------------------------\n");//1 saniyede gerçekleşir.
    
    int sayi[elemansay];//1 saniyede gerçekleşir.
    int enkucuk;//1 saniyede gerçekleşir.
    int k;//1 saniyede gerçekleşir.
      for( k=0 ; k<elemansay ; k++){//n + 1 saniyede gerçekleşir.
          printf("%d. sayiyi giriniz : ",k+1);// n saniyede gerçekleşir
          scanf("%d", &sayi[k]);//n saniyede gerçekleşir.
     }

    enkucuk = sayi[0];// 1 saniyede gerçekleşir.

      for( k=0 ; k<elemansay; k++){//n + 1 saniyede gerçekleşir.
          
          if(enkucuk > sayi[k])// n saniyede gerçekleşir.
          enkucuk = sayi[k]; // n saniyede gerçekleşir.
     }

    printf("--------------------------------\n\n");// 1 saniyede gerçekleşir
    printf("Bu dizideki en kucuk sayi : %d ", enkucuk);// 1 saniyede gerçekleşir.
    
    return 0;// 1 saniyede gerçekleşir.
 }
// T(n) = 1+1+1+1+1+1+1+1+(n+1)+n+n+1+(n+1)+n+n+1+1=13+6n
