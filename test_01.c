#include <stdio.h>
#include "linked_list_int.h"


int main(){
  linked_list_int a1 = lli_create();
  int i,t;
  for (i=0; i < 8 ; ++i) {
    lli_push_back(a1,i*3+1);
    printf("%f ocupados\n", lli_percent_occuped(a1));
  }
  t = lli_size(a1);
  printf("Tamanho de a1: %d\n",t);
  printf("a1 = { ");
  for (i=0; i < t ; ++i)
    printf("%d ", lli_get(a1,i));
  printf("}\n");
  for (i=0; i < t ; ++i)
    lli_pop_back(a1);
  t = lli_size(a1);
  printf("Tamanho de a1: %d\n",t);
  printf("a1 = { ");
  for (i=0; i < t ; ++i)
    printf("%d ", lli_get(a1,i));
  printf("}\n");
  lli_destroy(a1);
  return 0;
}
