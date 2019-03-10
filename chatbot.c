#include "stdio.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <conio.h>
#define SMAX 250
#define LSMAX 5
//ADT about list
typedef struct talk
{
int power;
char in[SMAX];
char out[SMAX];
struct talk * next;
} Talk;
Talk Head;//linked list Head
int InitList(void);//inital the linked list
int AddItem(char *in,char *out);//Add node
int PrintList(void);//输出所有节点的值函数
int ClearList(void);// clean the linked list
int Talk_Quit(void);//quit the program
//int SortItem(void);//..
Talk * FindItem(char *kw);//find node in the linked list
int Teach(void);//used in learning module
int SaveData(void);
int ReadData(void);
int Parser(char *);//reply the user
int GetKey(char *,const char *);//compare the key in the library
int RunTimeLearn(void);//used during the talking
//int setting(void);//..
int  main(){

}
