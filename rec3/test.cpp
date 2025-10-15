#include <iostream>

class Distance {
private:
    int meters;

public:
    explicit Distance(int m) : meters(m) {
        std::cout << "Explicit Distance object created with meters: " << meters << std::endl;
    }
    //Distance(double kilometers) : meters(kilometers * 1000) { }

    void showDistance() const {
        std::cout << "Distance: " << meters << " meters" << std::endl;
    }
};

int main() {
    Distance d = 10;     // implicitly
    Distance d(10);     // explicitly
    d.showDistance();
}
