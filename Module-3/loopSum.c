#include <stdio.h>

int main ()

{
        // int i ;
        // int sum = 0;
        // for(i=1;i<=5;i++){
        //     sum +=i;
        // }
        // printf("%d\n",sum);




        int i;
        int sum = 0;
        int n;
        scanf("%d", &n);
        for(i=1;i<=n;i++){
            sum +=i;
        }
        printf("%d", sum);
    return 0;
}