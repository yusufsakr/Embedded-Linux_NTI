/*
 * Author :
 *
 * GitHUB :
 *
 * Date   :
 */

//-------------------------------------------------------------------

//Includes
#include "./binary_search.h"

int main (void) {
	int arr[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
	int x     = 5;

	int pos = binarySearch(arr, 10, x);

	if (-1 == pos)
		printf ("Not Found");
	else
		printf ("%d\n", pos);

	return 1;
}
