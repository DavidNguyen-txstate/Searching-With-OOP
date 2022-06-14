#include "Search.h"
#include <iostream>
using namespace std;

int main() {
	int arr_to_search[] = {1, 5, 6, 8, 9, 10, 23, 42, 59, 73, 105}; 
	int arr_to_search_length = 11;
	int element_to_search = 0;
	cout << "Please enter the element to search for: ";
	cin >> element_to_search;
	Search new_search;
	cout << "LinearSearch: ";
	cout << new_search.LinearSearch(arr_to_search, arr_to_search_length, element_to_search) << endl;
	cout << "BinarySearch: ";
	cout << new_search.BinarySearch(arr_to_search, arr_to_search_length, element_to_search) << endl;
}
