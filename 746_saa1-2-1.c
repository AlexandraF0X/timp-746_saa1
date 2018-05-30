#include <stdio.h>
int main()
{
int n,chislo,i;
int k=0;
scanf("%d",&n);
for (i=1;i<=n;i++)
{
scanf("%d",&chislo);
if (chislo>0) {k=k+1;} 
}
printf(" %d \n ",k);
return 0;
}


