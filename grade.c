#include <stdio.h>

int main(){

  int marks;
  
  printf("Enter Marks:");
  scanf(%d,&marks);

  if(85<=marks<=100){
    printf("Grade A");
  }
  elseif(70<=marks<=84){
    printf("Grade B");
  }
  elseif(55<=marks<=69){
    printf("Grade C");
  }
  elseif(40<=marks<=54){
    printf("Grade D");
  }
  elseif(marks<40){
    printf("Grade F");
  }
  
  
  return 0;
}
