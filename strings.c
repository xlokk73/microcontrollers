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

void str_concat(char* str1, const char* str2) {
  int str1_len = str_len(str1);
  int str2_len = str_len(str2);
  int i = 0;

  for(; str2[i] != '\0'; ++i) {
    str1[i + str1_len] = str2[i];
  }

  str1[i + str1_len + 1] = '\0';
}
