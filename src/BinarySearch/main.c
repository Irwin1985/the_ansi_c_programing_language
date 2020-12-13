#include <stdio.h>
int binary_search(int arr[], int start_position, int length, int value) {
	if (length >= start_position) {
		int middle = start_position + (length - start_position) / 2;
		// check if the element is in the middle itself.
		if (arr[middle] == value) {
			return middle;
		}
		// if the value is less than middle then call again.
		if (arr[middle] > value)
			return binary_search(arr, start_position, middle - 1, value);
		// the element can only be present in the other half of the array.
		return binary_search(arr, middle + 1, length, value);
	}
	// the element is not found.
	return -1;
}
int main() {
	int arr[] = {11, 15, 34, 1985};
	int n = sizeof(arr) / sizeof(int);
	int result = binary_search(arr, 0, n - 1, 42);
	printf("result = %d\n", result);
	return 0;
}