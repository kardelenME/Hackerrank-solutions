#include <assert.h>
#include <limits.h>
#include <math.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>


int main()
{
int t,n,k,temp=0,count=0;
scanf("%d",&t);
for(int i=0;i<t;i++)
    {scanf("%d%d",&n,&k);
    int a[n];
    for(int i=0;i<n;i++)
{
    scanf("%d",&a[i]);
    if(a[i]>=0)
    temp++;
    else 
    count++;

}
if((count<k && count >=2) | (count-temp >= 2 && count<k))
    printf("YES\n");
else 
printf("NO\n");
 
count=0;
}


return 0;
}

