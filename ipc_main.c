#include <stdio.h>
#include <stdlib.h>

typedef enum EIpcPostion
{
	UP,
	DOWN,
	LEFT,
	RIGHT,	
		
}eIpcPostion;

int main()
{
  int i = 0;
  
  for(i = 0; i < 10; i++)
  {
    printf("%d: Hello World\n", i);
  }
  
  fprintf(stderr, "test stderr\n");
  fprintf(stderr, "test stderr\n");
}
