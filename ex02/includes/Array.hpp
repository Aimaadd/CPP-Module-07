#include <iostream>

template <class T>
class Array {
    public:
        Array();
        Array(Array const &src);
        ~Array();
        Array(unsigned int n);
        unsigned int    size() const;
        T &operator[](const int n);
        class OutOfBounds : public std::exception {
            public :
                virtual const char * what() const throw() {
                    return ("Index out of bounds\n");
                }
        };
    private:
        T*              _tab;
        unsigned int    _size;
};