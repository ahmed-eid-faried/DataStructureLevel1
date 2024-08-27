#pragma once
#include <iostream>
using namespace std;

template <typename T>
class clsArray {
	T* _data;
	int _size;
	int _capacity;
	//size íÎÈÑß ÈÚÏÏ ÇáÚäÇÕÑ ÇáãæÌæÏÉ İÚáÇğ İí ÇáãÕİæİÉ.
//capacity íÎÈÑß ÈÚÏÏ ÇáÚäÇÕÑ ÇáÊí íãßä ááãÕİæİÉ ÇÓÊíÚÇÈåÇ Ïæä ÇáÍÇÌÉ Åáì ÅÚÇÏÉ ÊÎÕíÕ ÇáĞÇßÑÉ.
	void _resize(int newSize) {
		T* newData = new T[newSize];
		for (int i = 0; i < newSize; ++i) {
			newData[i] = _data[i];
		}
		delete[] _data;
		_data = newData;
		_capacity = newSize;
	}

public:
	//// Constructor
	clsArray(int intiCapacity) {
		_data = new T[intiCapacity];
		_size = 0;
		_capacity = intiCapacity;
	}
	//// Constructor with variadic template
	template <typename... Args>
	clsArray(int intiCapacity, Args... args) {
		_size = sizeof...(args);
		_capacity = intiCapacity;
		_data = new T[_capacity];
		AddElements(args...);
	}
	//////////////////////////////////////////////////////////////////////////////////////////////////////////
	//// Copy Constructor
	clsArray(const clsArray& other) {
		_data = new T[other._capacity];
		_size = other._size;
		_capacity = other._capacity;
		for (int i = 0; i < _size; i++) {
			_data[i] = other._data[i];
		}
	}
	//// Copy Assignment Operator
// ÏÇáÉ ÇáäÓÎ ÈÇáÊÚííä (Copy Assignment Operator)
// åĞå ÇáÏÇáÉ ÊÓãÍ ÈÊÚííä ßÇÆä ãä äæÚ Array Åáì ßÇÆä ÂÎÑ ãä äİÓ ÇáäæÚ
	clsArray& operator=(const clsArray& other) {
		// ÊÍŞŞ ãä ÚÏã ÇáÊÚííä ÇáĞÇÊí
	// ÅĞÇ ßÇä ÇáãÄÔÑ this (ÇáĞí íÔíÑ Åáì ÇáßÇÆä ÇáÍÇáí) ãÎÊáİğÇ Úä &other (ÇáĞí íÔíÑ Åáì ÇáßÇÆä ÇáãÑÇÏ äÓÎ ÇáÈíÇäÇÊ ãäå)
		if (this != &other) {
			// ÊÍÑíÑ ÇáĞÇßÑÉ ÇáÍÇáíÉ ÇáÊí ÊÔíÑ ÅáíåÇ data áÊÌäÈ ÊÓÑÈ ÇáĞÇßÑÉ
			delete[] _data;
			// ÊÎÕíÕ ĞÇßÑÉ ÌÏíÏÉ ÈÍÌã ÇáÓÚÉ ÇáÎÇÕÉ ÈÇáßÇÆä other
			_data = new T[other._capacity];
			// äÓÎ ÇáÍÌã æÇáÓÚÉ ãä ÇáßÇÆä other Åáì ÇáßÇÆä ÇáÍÇáí
			_size = other._size;
			_capacity = other._capacity;
			// äÓÎ ÇáÚäÇÕÑ ãä ãÕİæİÉ ÇáßÇÆä other Åáì ãÕİæİÉ ÇáßÇÆä ÇáÍÇáí
			for (int i = 0; i < _size; ++i) {
				_data[i] = other._data[i];
			}
		}
		// ÅÑÌÇÚ ãÑÌÚ (reference) ááßÇÆä ÇáÍÇáí ááÓãÇÍ ÈÓáÓáÉ ãä ÚãáíÇÊ ÇáÊÚííä
		return *this;
	}
	// Destructor
	~clsArray() { delete[] _data; }
	//////////////////////////////////////////////////////////////////////////////////////////////////////////
	T getElement(int index) const {
		if (index >= 0 && index < _size) {
			return _data[index];
		}
		else {
			throw out_of_range("Index out of range");
		}
	}
	int getSize() const {
		return _size;
	}
	int getCapacity() const {
		return _capacity;
	}
	// Find the index of a specific value
	int findValue(const T& value) const {
		for (int i = 0; i < _size; ++i) {
			if (_data[i] == value) {
				return i;
			}
		}
		return -1;
	}
	void Print() {
		cout << "==>> ";
		for (int i = 0; i < _size; i++)
		{
			cout << _data[i];
			if (i != _size - 1)	cout << " - ";
		}
		cout << endl;
	}
	//////////////////////////////////////////////////////////////////////////////////////////////////////////
	//AddElementAtLast
	void push(const T& element) {
		if (_size == _capacity) {
			T* newData = new T[_capacity * 2];
			for (int i = 0; i < _size; i++) {
				newData[i] = _data[i];
			}
			delete[] _data;
			_data = newData;
			_capacity *= 2;
		}
		_data[_size] = element;
		++_size;
	}
	template <typename... Args>
	void AddElements(Args... args) {
		T elements[] = { args... };
		for (int i = 0; i < sizeof...(args); i++) {
			push(elements[i]);
		}
	}
	// Add an element at the first position
	void AddElementAtFirst(const T& element) {
		if (_size == _capacity) {
			_resize(_capacity * 2);
		}
		for (int i = _size; i > 0; --i) {
			_data[i] = _data[i - 1];
		}
		_data[0] = element;
		++_size;
	}
	// Add an element after a specific index
	void AddElementAfterIndex(int index, const T& element) {
		if (index < 0 || index >= _size) {
			throw out_of_range("Index out of range");
		}
		if (_size == _capacity) {
			_resize(_capacity * 2);
		}
		for (int i = _size; i > index + 1; --i) {
			_data[i] = _data[i - 1];
		}
		_data[index + 1] = element;
		++_size;
	}
	//////////////////////////////////////////////////////////////////////////////////////////////////////////
	//RemoveLast
	void pop() {
		if (_size > 0) {
			--_size;
			_resize(_size);
		}
		else {
			throw std::out_of_range("Array is empty");
		}
	}
	void RemoveIndex(int index) {
		if (index >= 0 && index < _size) {
			for (int i = index; i < _size - 1; ++i) {
				_data[i] = _data[i + 1];
			}
			--_size;
			_resize(_size);
		}
		else {
			throw out_of_range("Index out of range");
		}
	}
	// Remove a specific value
	void RemoveValue(const T& value) {
		int index = findValue(value);
		if (index != -1) {
			RemoveIndex(index);
		}
		else {
			throw std::invalid_argument("Value not found in array");
		}
	}
	// Remove the first element
	void RemoveFirst() {
		if (_size > 0) {
			RemoveIndex(0);
		}
		else {
			throw std::out_of_range("Array is empty");
		}
	}

};
