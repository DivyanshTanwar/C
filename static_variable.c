#include <stdio.h>

int add ( int a, int b){
  
  static int sum = 0;
  sum = a + b + sum;
  return sum;
  
}

int add2 (int a , int b){
    
    int sum2 = 0;
    sum2 = sum2 + a + b;
    return sum2;
  
}

int main() {
    
    printf("sum = %d\n", add(50,60));
    printf("sum = %d\n", add(20,30));
    printf("sum2 = %d\n", add2(50,60));
    printf("sum2 = %d\n", add2(20,30));
    
    return 0;
}
