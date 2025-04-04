#pragma once
# include <iostream>
# include <string>

template <typename T>

class Array
{
	private:
		T	*_array;
		unsigned int	_length;
	public:
		Array(): _length(0) {
			this->_array = new T[this->_length];
		}

		Array(unsigned int length): _length(length) {
			this->_array = new T[this->_length];
		}

		Array(Array const &obj): _length(obj._length) {
			this->_array = NULL;
			*this = obj;
		}

		Array &operator=(Array const &src) {
			if (this != &src)
			{
				delete[] this->_array;
				this->_length = src.size();
				this->_array = new T[this->_length];
				for (unsigned int i = 0; i < this->_length; i++)
				{
					this->_array[i] = src._array[i];
				}
       		}
        	return *this;
		}

		T &operator[](unsigned int index) {
			if (index >= this->_length) 
				throw std::out_of_range("Index out of range");
			return this->_array[index];
		}

		~Array() {
			if (this->_array)
				delete [] this->_array;
		}

		unsigned int size() const {
			return (this->_length);
		}
};
