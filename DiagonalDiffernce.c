# PROGRAMMING-CODDING
#COMPETITIVE CODES OF HACAKERRANK AND OTHERS

#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    int n;
    int i=0,sum=0,j,sum2=0;
    scanf("%d",&n);
    int a[n][n];
    for(int a_i = 0; a_i < n; a_i++){
       for(int a_j = 0; a_j < n; a_j++){
         
          scanf("%d",&a[a_i][a_j]);
       }
    }
    
 while(i<n)
 {
     sum=sum+a[i][i];
      i++;
 }
    j=n-1,i=0;
      while(i<n)
      {
      sum2=sum2+a[i][j];
        ++;
        j--;
     }
    printf("%d",abs(sum-sum2));
         return 0;
}
