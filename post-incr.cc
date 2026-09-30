#include <iostream>

int main() {
    int a = 5;
    int b = 0;
    b = a++;
    std::cout << b << std::endl;
    std::cout << a++ << std::endl;
    return 0;
}
