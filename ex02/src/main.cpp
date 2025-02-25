#include "Array.tpp"

int main() {
    Array<int> test(3);
    Array<int> test2(test.size());

    test[1] = 126;
    for (unsigned int i = 0; i < test.size(); i++)
        std::cout << test[i] << std::endl;
    std::cout << "test size: " << test.size() << std::endl;
    std::cout << "test2 size: " << test2.size() << std::endl;
    return 0;
}