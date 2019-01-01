#include <iostream>
#include <cmath>
#include <iomanip>

/* 10679301 */
/* Binary Search Algorithm using Recursion */

using namespace std;


int binarySearch(int arr[], int first, int end, int key){
	if(first > end){
		return -1;
		//Return -1 if the number is not found in the array List
	}
	int middle = (first + end)/2;

	//Set the middle index of the sorted array

	if(key < arr[middle]){
		return binarySearch(arr, first, middle-1, key);

	}else if(key > arr[middle]){
		return binarySearch(arr, middle+1, end, key);
	}else return middle;

	//return the Index of the item, if found;
}

int main(int argc, char** argv) {

	int arr[10];
	cout << "Enter 10 Values(Sorted): ";
	for(int i=0; i<10; i++){
		cin >> arr[i];
	}
	cout << "\nEnter the Value to Search: ";
	int Value;
	cin >> Value;


	cout << "The Value " << Value << " can be found at index "<<binarySearch(arr, 0, 9, Value) << ".";

	return 0;
}
