#include <stdio.h>
#include "functions.h"
#include <string.h>

int main(int argc, char const *argv[]) {
  struct Playstruct playstruct = {1,1.5,"string"};
  struct Playstruct *playstructpointer = &playstruct;
  printStruct(playstruct, playstructpointer);
  changeStruct(playstruct, playstructpointer);
  printStruct(playstruct, playstructpointer);

  printString(playstruct.a_string);
  char another_string[16] = "anotherstr";
  char *another_string_pointer = another_string;
  changeString(playstruct.a_string,another_string_pointer);
  printString(playstruct.a_string);
  printString(another_string);
  return 0;
}
void printStruct(struct Playstruct ps, struct Playstruct *pps){
  printf("Values of struct ps: <%d> <%lf> <%s>\n",ps.int_value , ps.double_value, ps.a_string);
  printf("Values of struct pps: <%d> <%lf> <%s>\n\n",pps->int_value , pps->double_value, pps->a_string);
}
void changeStruct(struct Playstruct ps, struct Playstruct *pps){
  ps.int_value = 5;
  ps.double_value = 5.5;
  ps.a_string[0] = 'p';ps.a_string[1] = 's';ps.a_string[2] = '\0';

  pps->int_value=6;
  pps->double_value=6.6;
  pps->a_string[0] = 'p';pps->a_string[1] = 'p';pps->a_string[2] = 'p';pps->a_string[3] = '\0';
}
void printString(char string_to_print[]){
  printf("%s\n\n",string_to_print);
}
void changeString(char string1[],char *p_string){
  string1[2] = '\0';
  p_string[1] = '\0';
}
