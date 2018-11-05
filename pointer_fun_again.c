/*----------------------------------------------------------
 *				HTBLA-Leonding / Class: 2AHIF
 * ---------------------------------------------------------
 * Exercise Number: 6
 * Title:			Pointer_Fun_Again
 * Author:			Emina SLJIVIC
 * ----------------------------------------------------------
 * Description:
 * This assignment lets you practise the usage of structs,
 * arrays and pointers to structs.
 * ----------------------------------------------------------
 */
 #include <stdio.h>
#include <string.h>

struct Playstruct{
    int int_value;
    double double_value;
    char a_string[64];
};
void printStruct(struct Playstruct ps, struct Playstruct *pps);
void changeStruct(struct Playstruct ps, struct Playstruct *pps);
void print_string(char* string_to_print);
void change_string(char* string1, char** p_string);

int main(int argc, char const *argv[]) {
  struct Playstruct play_struct = {4,4.4,"Hallo"};
  struct Playstruct *play_struct_pointer = &play_struct;

  printStruct(play_struct, play_struct_pointer);
  changeStruct(play_struct, play_struct_pointer);
  printStruct(play_struct, play_struct_pointer);

  //Beides wird auf 6 , 6.6 und Gestern geändert, weil beide die gleiche Adresse haben

  print_string(play_struct.a_string);

  char another_string[16]="Guten Tag";
  char* p = another_string;
  char** another_string_pointer=&p;

  change_string(play_struct.a_string,another_string_pointer);

  print_string(play_struct.a_string);
  print_string(another_string);

  return 0;
}

void printStruct(struct Playstruct ps, struct Playstruct *pps){
  printf("Values of struct ps: %d, %lf, %s\n",ps.int_value , ps.double_value, ps.a_string);
  printf("Values of struct pps: %d, %lf, %s\n",pps->int_value , pps->double_value, pps->a_string);
}

void changeStruct(struct Playstruct ps, struct Playstruct *pps){
  ps.int_value = 5;
  ps.double_value = 5.5;
  strcpy(ps.a_string,"Morgen");

  pps->int_value=6;
  pps->double_value=6.6;
  strcpy(pps->a_string,"Gestern");
}

void print_string(char* string_to_print) {
  printf("%s\n",string_to_print );
}

void change_string(char* string1, char** p_string){
  string1[2]='\0';
  p_string[1]='\0';
}
