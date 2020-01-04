#include <stdio.h>

int main(){
  int total = multiplesOf3and5(1000);
  
  printf("Sum = %d\n", total);
  
  return 0;
}


int multplesOf3and5(int number){

  int sum =0;
  
  for(int i = 1; i < number; i++){

    if(i % 3 == 0 || i % 5 == 0){
      sum += i;

}

}

  return sum;
}
