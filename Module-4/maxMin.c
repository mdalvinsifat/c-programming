#include <stdio.h>

int main ()
{
      int a, b, c ;
      scanf("%d %d %d",&a ,&b ,&c);
 
//  minimum 
      if(a>=b && a>=c){
        printf("%d ", a);
      }

      else if(b>=a && b>=c){
     printf("%d ", b);
      }
      else{
        printf("%c", c);
      }


// maximum 
 if(a<=b && a>=c){
        printf("%d ", a);
      }

      else if(b<=a && a>=c){
     printf("%d ", a);
      }
      else{
        printf("%c", c);
      }


    return 0;
}