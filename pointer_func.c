#include "stdio.h"

void print_integers(int int_value, int* int_pointer);
void change_integers(int int_value, int* int_pointer);

int main(int argc, char const *argv[]) {
  int int_value = 123; //the value of the int
  int* int_pointer = *int_value;
  /*We have to declare the int_pointer with & + a other variable because
    we get the address of the int_value for example.
    If we only have a number there, there will be a warning or a error*/
  print_integers(int_value,int_pointer);
  change_integers(int_value,int_pointer);
  print_integers(int_value,int_pointer);

  return 0;
}
void print_integers(int int_value, int* int_pointer){
  printf("Got an integer value %d and an address to an integer with value %d\n", int_value, *int_pointer );
}
void change_integers(int int_value, int* int_pointer){
  int_value = 321;
  *int_pointer = int_value;
}
