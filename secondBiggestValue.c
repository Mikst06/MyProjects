#include <stdio.h>
void Sort(int tab[],int n)
{
 int a;
  for ( int m = n - 1; m > 0; m-- )
    {
      for ( int i = 0; i < n; i++ ){
	if ( tab[i] < tab[i+1] ){
	  a = tab[i+1];
	  tab[i+1] = tab[i];
	  tab[i] = a;
	}
      }
    }
}
void Read(int tab[],int n)
{
  int k;
  for ( int i = 0; i < n; i++ )
    {
      printf("Enter the value of the string: ");
      scanf("%d",&k);
      tab[i] = k;
    }
}
void SecondMax(int tab[],int n)
{
  int hwm = 0,max2;
  max2 = tab[9];
  for ( int i = 0; i < n; i++ )
    {
      if ( (tab[i] > max2) && (tab[i] < tab[0]) )
	{
	  max2 = tab[i];
	}
    }
  if ( max2 != tab[0] )
    {
    for ( int i = 0; i < n; i++ )
      {
	if ( tab[i] == max2 )
	  {
	    hwm +=1;
	  }
      }
    }
  printf("Second biggest value is %d and it appeared %d times\n",max2,hwm);
}
	
	  
void main()
{
  int n = 10, tab[n];
  Read(tab,n);
  Sort(tab,n);
  SecondMax(tab,n);
}
