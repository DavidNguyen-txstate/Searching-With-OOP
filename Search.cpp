#include "Search.h"

Search::Search() {
	
}

int Search::LinearSearch(int some_array[], int length, int element) {
	for (int index = 0; index < length; index++) {
		if(some_array[index] == element) {
			return index;
		}
	}
	return -1;
}

int Search::BinarySearch(int some_array[], int length, int element) {
	int lower_bound = 0;
    int upper_bound = length-1;
    while (lower_bound <= upper_bound) {
    	int guess = (lower_bound + upper_bound) / 2;
    	if (some_array[guess] == element) {
      		return guess;	
    	}
    	else if (some_array[guess] < element) {
      		lower_bound = guess + 1;
    	}
    	else {
      		upper_bound = guess - 1;
    	}
  	}
  	return -1;
}
