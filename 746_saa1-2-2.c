#include <stdio.h>
#include <math.h>
int main()
{
int n, chislo,i;
int answer=0;
scanf("%d", &n);
for(i=1;i<=n;i++)
{
scanf("%d",&chislo);
answer = answer + chislo*chislo *(i%2);
}
printf("%d\n", answer);
return 0;
}

