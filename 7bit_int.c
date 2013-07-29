#include <stdio.h>

int main(void){
  struct {
    unsigned int foo : 7;
  } bittest;

  char foo;
  printf("size struct bittest = %u\n", sizeof(bittest));
  printf("size char foo = %u\n", sizeof(foo));
  return 0;
}
