#include <stdio.h>
#include "maxSum.h"

#define max(a, b) (((a) >= (b)) ? (a) : (b))

float maxArr(float *vec, int length){
  int i;
  float max_elem = vec[0];
  for(i=1; i < length; i++){
    if (vec[i] > max_elem) max_elem = vec[i];
  }
  return max_elem;
}

float maxSubSum(float *vec, int length){
  float ret_vec[length];
  int i;
  for(i=0; i<length;i++){
    float r_i; 
    if(i==0){
      r_i = max(0, vec[i]);
    } else {
      r_i = max(0, vec[i] + ret_vec[i-1]);
    } 
    ret_vec[i] = r_i;  
  }
  return maxArr(&ret_vec[0], length);
}

