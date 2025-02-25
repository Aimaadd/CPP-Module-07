#include "../includes/Array.hpp"

template <class T>
Array<T>::Array() : _tab(NULL), _size(0) {
    std::cout << "Array default constructor called" << std::endl;
}

template <class T>
Array<T>::~Array() {
    delete[] (this->_tab);
    std::cout << "Default Array destructor called" << std::endl;
}

template <class T>
Array<T>::Array(unsigned int n) : _tab(NULL), _size(0) {
    if (n == 0) {
        std::cout << "Invalid size, array not created" << std::endl;
        return;
    }
    _tab = new T[n];
    _size = n;
    for (unsigned int i = 0; i < _size; i++) {
        _tab[i] = 0;
    }
    std::cout << "Array constructor called" << std::endl;
    std::cout << "Array size is : " << _size << std::endl;
}

template <class T>
Array<T>::Array(Array const &src) {
    if (src._size == 0) {
        _tab = NULL;
        _size = 0;
        return;
    }
    _tab = new T[src._size];
    for (unsigned int i = 0; i < src._size; i++) {
        _tab[i] = src._tab[i];
    }
    _size = src._size;
    std::cout << "Array copy constructor called" << std::endl;
    *this = src;
}

template <class T>
unsigned int Array<T>::size() const {
    return _size;
}

template <class T>
T &Array<T>::operator[](const int n) {
    if (n < 0 || n >= (int)this->_size)
        throw(Array::OutOfBounds());
    return (this->_tab[n]);
}