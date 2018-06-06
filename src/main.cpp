#include "Smart_array.h"
#include <iostream>
using std::cout;
using std::endl;

void quick_sort(Smart_array& s, int left, int right);
/**
 *@brief The main function for battleship program
 * 
 * The fucntion creates a playing area, fills it with random layout of ships, and profides the user to play.
 *@return return 0 - success, return 1 - fail with message "cant allocate memory..." 
 *@authors Arakel Galeyan, Arsen Hovhannisyan
 *@date 05.06.2018
 */

int main()
{
    Smart_array arr(4, 0);
    arr.set_element_by_index(0, 25);
    arr.set_element_by_index(1, 515);
    arr.set_element_by_index(2, 5);
    arr.set_element_by_index(3, 15246);
    cout << arr << endl;
    return 0;
}

void quick_sort(Smart_array& s, int left, int right)
{
	int i = left;
	int j = right;
  int m = (int) (left + right) / 2;
  int pivot = s.get_element_by_index(m);
	while (i < j){
	  while (s.get_element_by_index(i) < pivot) {
		  ++i;
		}
		while (s.get_element_by_index(j) > pivot) {
			--j;
		}
		if (i <= j){
			s.swap(i, j);
			++i;
			--j;
		}
	}
	if (left < j) {
		quick_sort (s, left , j);
	}
	if (i < right) {
		quick_sort ( s, i, right);
	}
}
