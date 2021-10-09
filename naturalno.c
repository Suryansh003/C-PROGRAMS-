#include<stdio.h>
void main ()
{
    int i, n;
    printf ("Enter the number upto which you need natural number\n");
    scanf ("%d", &n);
    
    for (i=1; i<=n; i++)
    {
        printf("%d\n",i);
    }    
}