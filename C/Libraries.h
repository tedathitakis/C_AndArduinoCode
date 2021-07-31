#ifndef HEADER_FILE //Check if already declared before declaring
#define HEADER_FILE
//header file (.h)
int square(int input);
int cube (int input);
int power (int input, int exponant);
int recursivePower(int input, int exponant);
void changeVal(int *input);
int oldestValue(int ages[], int size);

#endif
//ifndef define and endif are compilier comands

//.o files are output intermediate  (if you want to share binary but not the source code)
//link libraies together by compiling it together
//.h is a header file