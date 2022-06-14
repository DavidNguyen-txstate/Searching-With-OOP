#ifndef SEARCH_H
#define SEARCH_H

class Search
{
	private:
		int some_array[];
		int length;
		int element;
	public:
		Search();
		int LinearSearch(int some_array[], int length, int element);
		int BinarySearch(int some_array[], int length, int element);
};
#include "Search.cpp"
#endif
