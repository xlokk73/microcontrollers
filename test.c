#include "test.h"

void run_tests() {
 
  
  printf("%d\n", str_len("Hello"));

  char test[20];
  str_cpy(test, "Hello");
  printf("%s\n", test);
}
