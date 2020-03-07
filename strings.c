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

  dst[i] = '\0';
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

void num_to_char(char* dst, int n) {
  
  switch(n) {
    
  case 1:
    str_cpy(dst, "1");
    break;
    
  case 2:
    str_cpy(dst, "2");
    break;

  case 3:
    str_cpy(dst, "3");
    break;

  case 4:
    str_cpy(dst, "4");
    break;

  case 5:
    str_cpy(dst, "5");
    break;

  case 6:
    str_cpy(dst, "6");
    break;

  case 7:
    str_cpy(dst, "7");
    break;

  case 8:
    str_cpy(dst, "8");
    break;

  case 9:
    str_cpy(dst, "9");
    break;

  default:
    str_cpy(dst, "0");

  }
}
