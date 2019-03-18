
void Additem(char * in,char *out,Talk *point){
  while(point->next!=NULL){
    point=point->next;
  }
  Talk *temp=(Talk*)malloc(sizeof(Talk));
  if(temp==NULL){
    printf("Memory malloc error!");
    exit(1);
  }
  memset(temp,0,sizeof(Talk));
  strcpy(temp->in,in);
  strcpy(temp->out,out);
  point->next=temp;
  printf("Add Success! in \"%s\" out \"%s\"\n",in,out);
}
