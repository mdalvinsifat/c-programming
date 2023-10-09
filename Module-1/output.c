

#include <stdio.h>


int main ()
{
    int rahim;
    char c ;
    float f;
    scanf("%d %c %f %c", &rahim,&c ,&f);
    printf("%d %c %0.2f%%", rahim,c , f);
    return 0;
}