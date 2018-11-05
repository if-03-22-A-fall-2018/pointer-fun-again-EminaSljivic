struct Playstruct{
    int int_value;
    double double_value;
    char a_string[64];
};
void printStruct(struct Playstruct ps, struct Playstruct *pps);
void changeStruct(struct Playstruct ps,struct Playstruct *pps);
void printString(char string_to_print[]);
void changeString(char string1[],char *p_string);
