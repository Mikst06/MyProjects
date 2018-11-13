#include<stdio.h>

void main()
{
  int trzynascie = 13 , dwadziesciajeden = 21 , piecdziesiatdwa = 52 , suma = 0;
  int ilosc;

  printf("Ile liczb wyświetlić  ");
  scanf("%u",&ilosc);

  if (ilosc >= 0)
  {
        
    for(;ilosc > 0;ilosc--)
    {
      if ((ilosc % 3) == 1)
      {
        suma += trzynascie;
        trzynascie += 100;
      }
      else if ((ilosc % 3) == 2)
      {
        suma += dwadziesciajeden;
        dwadziesciajeden += 100;
      }
      else
      {
        suma += piecdziesiatdwa;
        piecdziesiatdwa += 100;
      }
    }
    printf("Suma wynosi %d\n",suma);
    

    /*
    while (ilosc > 0)
    {
      if ((ilosc % 3) == 1)
      {
        suma += trzynascie;
        trzynascie += 100;
      }
      else if ((ilosc % 3) == 2)
      {
        suma += dwadziesciajeden;
        dwadziesciajeden += 100;
      }
      else
      {
        suma += piecdziesiatdwa;
        piecdziesiatdwa += 100;
      }
      ilosc--;
    }
    printf("Suma wynosi %d\n",suma);
    */


    /*
    do
    {
      if ((ilosc % 3) == 1)
      {
        suma += trzynascie;
        trzynascie += 100;
      }
      else if ((ilosc % 3) == 2)
      {
        suma += dwadziesciajeden;
        dwadziesciajeden += 100;
      }
      else
      {
        suma += piecdziesiatdwa;
        piecdziesiatdwa += 100;
      }
      ilosc--;
    } while(ilosc > 0);

    printf("Suma wynosi %d\n",suma);
    */
  }
  else
  {
    printf("Podana liczba jest ujemna. Prosze podac nieujemna ilosc liczb.\n");
  }



}
