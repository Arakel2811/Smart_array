#include "Smart_array.h"
#include <iostream>
#include <stdlib.h>
#include <limits.h>

Smart_array::Smart_array()
{

}

Smart_array::Smart_array(int size, int default_element)
{
  m_size = size;
  m_default_element = default_element;
  m_array = new int[m_size]; 
  for (int i = 0; i < size; ++i) {
    m_array[i] = m_default_element;
  } 
}

Smart_array::Smart_array(Smart_array& obj)
{
    this->m_size = obj.get_size();
    this->m_array = new int[this->m_size];
    for(int i = 0; i < obj.get_size(); ++i) {
       this->m_array[i] = obj.m_array[i];
    }
}

//Smart_array Smart_array::operator = (Smart_array& obj)
//{
//    Smart_array new_array(obj.get_size());
//    for(int i = 0; i < obj.get_size(); ++i) {
//        new_array.set_element_by_index(i, obj.get_element_by_index(i));
//    }
//   return new_array;
//}

Smart_array::~Smart_array()
{
  std::cout << "Destructor called" << std::endl;
  delete this->m_array;
}

bool Smart_array::set_element_by_index(int index, int element)
{
  if (index < 0 || index > this->m_size) {
      return false;
  }else {
      this->m_array[index] = element;
  }
 }

int Smart_array::get_element_by_index(int index)
{
  if (index < 0 || index > this->m_size) {
      return INT_MAX;
  }
  return this->m_array[index];
}

int Smart_array::get_size()
{
  return this->m_size;
}

void Smart_array::resize(int size)
{
    if(m_size == size) {
        return;
    }
    int* new_array = new int[size];
    for(int i = 0; i < size; ++i) {
        new_array[i] = this->m_default_element;
    }
    if(size < this->get_size()) {
        for (int i = 0; i < size; ++i) {
            new_array[i] = this->get_element_by_index(i);
        }
        this->m_array = new_array;
        this->m_size = size;
    } else if(size > this->get_size()) {
        for(int i = 0; i < this->get_size(); ++i) {
            new_array[i] = this->get_element_by_index(i);
        }
        this->m_array = new_array;
        this->m_size = size;
    }
} 

void Smart_array::print_array()
{
    for (int i = 0; i < m_size; ++i) {
        std::cout << m_array[i] << " "; 
    }
    std::cout << std::endl; 
}

bool Smart_array::swap(int i, int j)
{
// Algorithm dlya chaynikov. :DD
//  int temp;
//  temp = m_array[i];
//  m_array[i] = m_array[j]; 
//  m_array[j] = temp; 
    m_array[i] += m_array[j]; 
    m_array[j] = m_array[i] - m_array[j];
    m_array[i] -= m_array[j];
}








