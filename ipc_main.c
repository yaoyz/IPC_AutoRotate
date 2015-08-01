#include <stdio.h>
#include <stdlib.h>


int main()
{
  int i = 0;
  
  for(i = 0; i < 10; i++)
  {
    printf("%d: Hello World\n", i);
  }
  
  fprintf(stderr, "test stderr\n");
}
