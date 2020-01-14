#include <stdio.h>

void main()
{
  int miejsce,wysokoscBezWierzcholka;
  char literaA = 'A', spacja = ' ';
  int wysokoscLiteryA;
  printf("Podaj wielkość litery A: ");
  scanf("%d",&wysokoscLiteryA);
  int lewaKrawedz = (wysokoscLiteryA-2);
  int prawaKrawedz = (wysokoscLiteryA);

  if (wysokoscLiteryA > 3) {
    for (miejsce = 0; miejsce <= ((wysokoscLiteryA * 2) - 2); miejsce++) { //petla dla wierzchołka
      if (miejsce != (wysokoscLiteryA - 1)) {
        printf("%c",spacja);
      } 
      else {
        printf("%c",literaA);
      }
    }

    for (wysokoscBezWierzcholka = 0; wysokoscBezWierzcholka < wysokoscLiteryA; wysokoscBezWierzcholka++, lewaKrawedz--, prawaKrawedz++) {
      printf("\n");
      for (miejsce = 0; miejsce <= ((wysokoscLiteryA * 2) - 2); miejsce++) {
        if (miejsce != lewaKrawedz && miejsce != prawaKrawedz && wysokoscBezWierzcholka != (wysokoscLiteryA / 2) - 1) {
          printf("%c",spacja);
        } 
        else if (miejsce >= lewaKrawedz && miejsce <= prawaKrawedz) {
          printf("%c",literaA);
        } 
        else {
          printf("%c",spacja);
        }
      }
    }
  }
  else{
            printf("Wielkosc wynosi mniej niz 3. Dla takiej wielkosci nie moze powstac litera A");
  }
  printf("\n");

}

