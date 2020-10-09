#include <assert.h>
#include <ctype.h>
#include <limits.h>
#include <math.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>



int main()
{
 long long int maximum,i,n,candles[1000000],sum=0;

scanf("%lld",&n);

for(i=0;i<n;i++)

{
    scanf("%lld",&candles[i]);
}

maximum=candles[0];

for(i=0;i<n;i++)
{
    if(maximum<candles[i])
    maximum=candles[i];
}
for(i=0;i<n;i++)
if(maximum==candles[i])
sum++;
printf("%lld",sum);

return 0;

}
