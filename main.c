#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    int i = 10;
    char c = 'a';
    
    int *iptr ;
    iptr = &i;
    
    char *cptr;
    cptr = &c;
    
    int *iptr2;
    iptr2 = iptr;
    
    
    printf("i : %p\n %p (size:%i)\n", iptr, &i, sizeof(iptr));
    printf("c : %p\n %p (size:%i)\n", cptr, &c, sizeof(cptr)); //  포인터 변수 자체는 4byte 
    printf("iptr2:%p, %i\n", iptr2, *iptr2);
  
  system("PAUSE");	
  return 0;
}
