#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "ListStructure.h"
#include "test.h"
#include "test.c"
#include "KeyLibraryOperation.h"
#include "KeyLibraryOperation.c"
#define SMAX 250
#define LSMAX 5


int main(void){
  Talk Head;
  memset(& Head,0,sizeof Head);
  char input[SMAX];
  Additem("hello","hi",&Head);
  PrintList(Head);
  int choose =0 ;
  return 0;
}
