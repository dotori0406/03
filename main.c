#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    float x,y;
    printf("Enter a numerator : ");
    scanf("%f",&x);
    
    printf("Enter a denominator : ");
    scanf("%f",&y);
    float i;
    i=y/x;
    printf("Result is %f\n",i); 
    
    getchar();

  system("PAUSE");	
  return 0;
}
