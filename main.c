#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    int x,y;
    printf("Enter a numerator : ");
    scanf("%d",&x);
    
    printf("Enter a denominator : ");
    scanf("%d",&y);
    
    printf("Result is %f\n",(float)y/x); 
    
    getchar();

  system("PAUSE");	
  return 0;
}
