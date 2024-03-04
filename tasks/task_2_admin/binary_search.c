/*
 * Author : Yusuf Sakr
 *
 * GitHUB :github.com/yusufsakr
 *
 * Date   : 4, March 2024
 */

//--------------------------------------------------------------------------

//Included Libs
#include <stdio.h>

/*
 * Name        : binarySearch
 * Arguments   : int arr[], int size, int item
 * Return      : int
 * Description : Function search the array for the received item and
 *               returns its position.
 */
int binarySearch (int arr[], int size, int item) {
	int l = 0;
	int r = size - 1;

	while (l <= r) {
		int m = l + (r - l) / 2;

		// Check if x is present at mid
		if (arr[m] == x)
			return m;

		// If x is greater, ignore left half
		if (arr[m] < x)
			l = m + 1;

		// If x is smaller, ignore the right half
		else
			r = m - 1;
	}	

	// If element is not present.
	return -1;
}
