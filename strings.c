#include "strings.h"

int str_len(const char* str) {
  int i = 0;
  
  for(; str[i] != '\0'; ++i) {}
  
  return i;
}

void str_cpy(char* dst, const char* src) {
  int src_len = str_len(src);
  int i = 0;
  
  for(; i < src_len; ++i)
    dst[i] = src[i];

  dst[i + 1] = '\0';

  return;
}
