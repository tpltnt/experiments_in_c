#include <stdio.h>

int main(void){
  struct {
  } emptystruct;

  struct {
    char content;
  } onecharstruct;

  struct {
    unsigned char foo : 7;
  } sevenbitstruct;

  /*
  struct {
    unsigned char bar : 9;
    } ninebitstruct;*/

  printf("size of char: %d bytes\n", sizeof(char));
  printf("size of empty struct: %d bytes\n", sizeof(emptystruct));
  printf("size of struct with one char: %d bytes\n", sizeof(onecharstruct));
  printf("size of struct with 7bit (char) field: %d bytes\n", sizeof(sevenbitstruct));

  return 0;
}
