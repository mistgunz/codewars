#include <math.h>
#include <stdio.h>
unsigned int pyramidHeight(unsigned int n) {
  int i,stack;
  stack = n  ;
  i = 0;
  
  while(stack > 0)
    {   
        
  
        
        while(stack >= i * i )
        {
           
            stack = stack - i * i;
             printf("stack: %d\n",stack);
            if(stack >= (int)pow(i+1,2) )
                i++;
            printf("i: %d\n",i);
        }
        return i;
        
    }
  return 0;
}

int main() {
 
 //printf("%d\n" ,pyramidHeight(4));
 //printf("%d\n" ,pyramidHeight(5));
 //printf("%d\n" ,pyramidHeight(13));
 printf("%d\n" ,pyramidHeight(5));
  return 0;
}