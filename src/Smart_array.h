#ifndef SMART_ARRAY_H
#define SMART_ARRAY_H

class Smart_array
{
    private:
        int m_size;
        int m_default_element;
        int* m_array;
    public:
        
        /**
         * @brief Default constructor
         * @return Function does not returns value
         */
        Smart_array(); 

        /**
         * @brief Constructor with parameters.
         * @param size is size of Smart_array.
         * @param default_element is a default value for all elements in array
         * @return Function does not returns value.
        */
        Smart_array(int size, int default_element);
        
        /**
         * @brief Copy constructor.
         * @param obj is a object of the Smart_array class.
         * @return Function does not returns value.
         */
        Smart_array(Smart_array &obj);

        /**
         * @brief Overloading operator assignment.
         * @param obj is an object of the Smart_array class.
         * @return Function returns object of class Smart_array.
         */
         // Smart_array operator = (Smart_array& obj);

        /**
         * @breif Function puts value in array by index.
         * @param index is an index of element in array.
         * @param element is the element which we want to put in array.
         * @return Function does not returns value.
         */
        bool set_element_by_index(int index, int element);

        /**
         * @breif Function returns value by index.
         * @param index is a index of element in array.
         * @return Function returns int value.
         */
        int get_element_by_index(int index);

        /**
         * @breif Function returns size of array.
         * @return Function returns int value.
         */
        int get_size();
        
        /**
         * @breif Function creates new array with new size.
         * @param size is a size of new array.
         * @return Function does not return value.
         */
        void resize(int size);
        
        /**
         * @breif Function prints elements of array.
         * @return Function does not return value.
         */
        void print_array();  
       
        bool swap(int i, int j);

        /**
         * @breif This function is a destructor. It deletes allocated memory.
         * @return Function does not return value.
         */
        ~Smart_array();
};
#endif
