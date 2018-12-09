#include <stdio.h>

int prime (int);
void main()
{
        int number;
        printf("Give integer bigger than 3: ");
        scanf("%d",&number);
        printf("Biggest prime number lower than %d is %d\n", number, prime(number));
}
int prime ( int number )
{
        int primeNumber = number;
        for( int n = ( number - 1 ); ( n > 1 ); n-- )
        {
                 if ( primeNumber == number )
                        for( int m = ( n - 1 ); ( m > 1 ) && ( n % m != 0 ); m-- )
                        {
                                if ( m == 2 ){
                                        primeNumber = n;
                                }


                        }
        }
        return primeNumber;
}
