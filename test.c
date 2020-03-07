#include "test.h"

void run_tests() {
 
  
  printf("%d\n", str_len("Hello"));

  char test[20];
  str_cpy(test, "Hello");

  char test1[20];
  str_cpy(test1, ", World!");
  
  printf("test: %s\n", test);
  printf("test1: %s\n", test1);

  str_concat(test, test1);
  printf("test: %s\n", test);
}
