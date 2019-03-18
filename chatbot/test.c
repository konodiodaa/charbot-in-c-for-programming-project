
int PrintList(Talk Head)
{
  Talk *point = Head.next;
  while(point!=NULL)
  {
    printf("in %s ",point->in);
    printf("out %s \n",point->out);
    point = point->next;
  }
  return 0;
}
