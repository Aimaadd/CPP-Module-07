#include "../includes/iter.hpp"
#include <iostream>

void whilePrint(const char *value) {
    std::cout << value << std::endl;
}

int main(void) {
    const char *testArray[5] = {"Big", "Boss", "Mafia", "maximum", "boss"};
    iter(testArray, 5, whilePrint);
    return 0;
}