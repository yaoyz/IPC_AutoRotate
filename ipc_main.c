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
  fprintf(stderr, "test @2015-8-3");
  fprintf(stderr, "test2 @2015-8-3");
  fprintf(stderr, "test �����ϴ����� @2015-8-3");

  fprintf(stderr, "test ���ύ����fetch��֮����֤merge @2015-8-3");
}
