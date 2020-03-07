#include "microcontroller.h"

void lcd_print(const char* s) {
  char print_string[17];
  for(int i = 0; i < 16; ++i)
    print_string[i] = s[i];

  print_string[16] = '\0';
  
  printf("%s\n", print_string);
}

void lcd_clear() {
  system("clear");
}

void lcd_init() {
  return;
}

void delay_ms(const int milli_seconds) {
  usleep(milli_seconds * 1000);
}
