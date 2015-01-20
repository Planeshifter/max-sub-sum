#include <stdio.h>
#include "max-sub-sum.h"

int main(){
  printf("\nEnter the length of the vector:\n");
  int length;
  scanf("%d", &length);

  float input_vec[length];
  int i;
  for(i = 0; i < length; i ++){
    printf("%2d> ",i+1);
    scanf("%f", &input_vec[i]);
  }

  float ret = maxSubSum(input_vec, length);

  printf("The result is:\n");
  printf("%.2f \n",ret);

  return 0;
}
