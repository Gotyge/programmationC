#include <stdio.h>
#include <time.h>
#define TABSIZE  16777215

int tab[TABSIZE+1] ;

int
main
(void)
{
  register unsigned int i ;
  clock_t btime, atime ;

  for(i=0;i<TABSIZE;i++)
  {
    btime = clock();
    tab[i]+=tab[i+1] ;
    atime = clock();
    printf("%lu \n",atime-btime) ;
  }
  return 0 ;
}
