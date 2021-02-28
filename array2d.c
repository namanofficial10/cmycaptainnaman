  
#include <stdio.h>
 

int main()
{
    int i,j,k,l,m,n,c[3][3],sum=0;
    
     
    for(i=0,i<3,i++){
      for(j=0,j<3,j++){
        c[i][j]=i+j+1;
      
      }
      
    } 
    
  printf("Matrix is:");
  
  for(k=0,k<3,k++){
      for(l=0,l<3,l++){
        printf("%d",c[k][l]);
       
      }
      printf("\n");
    } 
  
  for(m=0,m<3.m++){
      for(n=0,n<3,n++){
        
        if(m=n){
         sum+=c[m][n];
        }
        else{
         pass; 
        }
      
      }
  }
  printf("\n\n Sum of Diagonal Elements: %d",sum)
    
      
    
   return 0;
}
