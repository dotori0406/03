#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    int x,y;
    printf("Enter a numerator : ");
    scanf("%d",&x);
    
    printf("Enter a denominator : ");
    scanf("%d",&y);
    float i;
    i=y/x;
    printf("Result is %f\n",i); 
    
    getchar();

  system("PAUSE");	
  return 0;
}
