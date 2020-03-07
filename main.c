#include "microcontroller.h"

int main(void) {
  printf("Hello haha\n");
  lcd_print("Hello, World!");
  delay_ms(5000);
  lcd_clear();
  lcd_print("Test");

  return 0;
}
