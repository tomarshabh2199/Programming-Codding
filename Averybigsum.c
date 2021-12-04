# PROGRAMMING-CODDING
#COMPETITIVE CODES OF HACAKERRANK AND OTHERS

#include<stdio.h>
#include<string.h>
#include<math.h>

int main()
{
    long long int a[65536],sum=0,i,n;
    scanf("%lld",&n);
    for(i=0;i<n;i++)
       scanf("%lld",& a[i]);
    for(i=0;i<n;i++)

       sum=sum+a[i];
    
    printf("%lld",sum);
}
