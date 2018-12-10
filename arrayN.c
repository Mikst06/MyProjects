#include <stdio.h>
#include <stdlib.h>

int maxValue(int array[],int n)
{	int max = array[n-1];
	for (n = n - 2; n >=0; n-- )
	{
		if ( array[n] > max )
			max = array[n];
	}
	return max;
}
int minValue(int array[],int n)
{       int min = array[n-1];
        for (n = n - 2; n >=0; n-- )
        {
                if ( array[n] < min )
                        min = array[n];
        }
        return min;
}
int minIndex(int array[],int n)
{       int min = array[n-1];
	int index = n-1;
        for (n = n - 2; n >=0; n-- )
        {
                if ( array[n] < min ){
                        min = array[n];
			index = n;
		}
	}
        return index;
}
int maxIndex(int array[],int n)
{       int max = array[n-1];
	int index = n-1;
        for (n = n - 2; n >=0; n-- )
        {
                if ( array[n] > max ){
                        max = array[n];
			index = n;
		}
	}
        return index;
}
int maxAbsoluteValue(int array[],int n)
{       int max = abs(array[n-1]);
        for (n = n - 2; n >=0; n-- )
        {
                if ( abs(array[n]) > max )
                        max = abs(array[n]);
        }
        return max;
}
int maxAbsoluteIndex(int array[],int n)
{       int max = abs(array[n-1]);
        int index = n-1;
        for (n = n - 2; n >=0; n-- )
        {
                if ( abs(array[n]) > max ){
                        max = abs(array[n]);
                        index = n;
                }
        }
        return index;
}

void main()
{
	int n = 10;
	int array[] = { 34, 23, 134, 42, 3, 44, 68, -410, 90, 23 };
	printf("Max value of an array is : %d\n", maxValue(array,n));
	printf("Index of max value of an array is : %d\n", maxIndex(array,n));
	printf("Min value of an array is : %d\n", minValue(array,n));
	printf("Index of min value of an array is : %d\n", minIndex(array,n));
	printf("Max absolute value of an array is : %d\n", maxAbsoluteValue(array,n));
        printf("Index of max absolute value of an array is : %d\n", maxAbsoluteIndex(array,n));

}


