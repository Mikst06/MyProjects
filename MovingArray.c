#include <stdio.h>


void reversedArray(int *Array, int n)
{
	for (; n >= -1; n-- )
		if ( n == -1 )
			printf(" }\n");
		else if ( n == 7 )
			printf("{");
		else
			printf(" %d",*(Array + n));
}
void ArrayMvk(int *Array, int n)
{
        int Array2[7],k;
	printf("How many positions do you want to move the array( to the left ) ");
	scanf("%d",&k);
	k = (k % 7);
	for (int a = -1; a <= n; a++ )
                if ( a == 7 )
                        printf(" }\n");
                else if ( a == -1 )
                        printf("{");
		else{
			int m = a - k,*x;
			x = &m;
			while ( *x < 0 ){
				*x = *x + 7;
			}
			
			Array2[m] = *(Array + ((a + k) % 7 ));
			printf(" %d",Array2[m]);
		}
}
void ArrayMv1(int *Array, int n)
{
        int Array2[7];

        for (int a = -1; a <= n; a++ )
                if ( a == 7 )
                        printf(" }\n");
                else if ( a == -1 )
                        printf("{");
                else if ( a == 6 ){
                        Array2[a] = *Array;
                        printf(" %d",Array2[a]);
                }
                else{
                        Array2[a] = *(Array + a + 1);
                        printf(" %d",Array2[a]);
                }
}
void main()
{
	int Array[] = { 1, 2, 3, 4, 5, 6, 7 };
	int n = 7;
	reversedArray(Array,n);
	ArrayMv1(Array,n);
	ArrayMvk(Array,n);
}
                             
