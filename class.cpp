#include <iostream>

class Car {
    public: 
        std::string brand;

        void display() {
            std::cout << "Car Brand: " << brand << "\n";
        }
};

int main() {
    Car pagani;
    pagani.brand = "zonda";
    pagani.display();

    Car ferrari;
    ferrari.brand = "GT10";
    ferrari.display();
    return 0;
}
