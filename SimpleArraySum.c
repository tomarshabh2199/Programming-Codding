# PROGRAMMING-CODDING
#COMPETITIVE CODES OF HACAKERRANK AND OTHERS

#include <stdio.h>

int main(){
  int number_of_elements;
  int i;
  scanf("%d", &number_of_elements);
  int array[number_of_elements];
  int sum_of_array = 0;

  for(i = 0; i < number_of_elements; i++){
     scanf("%d", &array[i]);
     sum_of_array += array[i];
  }

  printf("%d\n", sum_of_array);
  return 0;
}
   



