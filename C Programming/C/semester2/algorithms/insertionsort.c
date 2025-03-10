//insertion sort
#include <stdio.h>

#define SIZE 5

int main()
{
	int array[SIZE] = {8,7,3,4,5};
	
    //sort array
	for(int i = 1;i < SIZE;++i)
	{
		int j = i - 1;;
		int current = array[i];

		while(j >= 0 && array[j] > current)
		{
			array[j + 1] = array[j];
			j = j - 1;
		}
		array[j + 1] = current;
	}

    //print array
    for(int i = 0;i < SIZE; i++)
    {
        printf("%d\t", array[i]);
    }
}