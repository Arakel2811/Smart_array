#include "Smart_array.h"
#include <iostream>
using std::cout;
using std::endl;

int main()
{
    Smart_array arr(3, 0);
    arr.set_element_by_index(0, 10);
    arr.set_element_by_index(1, 20);
    arr.set_element_by_index(2, 30);
    arr.print_array();
    arr.swap(0,2);
    arr.print_array(); 
  return 0;
}

