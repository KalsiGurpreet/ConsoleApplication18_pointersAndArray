#include<stdio.h>

int main(void)
{
	short* ptr;
	short arr[] = { 5,6,7 };

	// ptr = &arr[0]; // used reference operator and now pointer points to first element of the array.

	ptr = arr; // this is same as above and used extensively. 
	           // just name of the array without the indices means its a pointer to the first element of the array always.

	// and we say that pointer sets to some value.
	// pointer sets to same value in above declaration.

	printf("%p\n", ptr); // print location.
	printf("%d\n", *ptr); // print value pointed by pointer.
	return 0;
}