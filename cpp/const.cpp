#include <iostream>
#include <string>

// Default Constructor
class DefaultConstructor {
public:
    DefaultConstructor() {
        std::cout << "Default Constructor called" << std::endl;
    }
};

// Parameterized Constructor
class ParameterizedConstructor {
public:
    ParameterizedConstructor(int x, int y) {
        std::cout << "Parameterized Constructor called with values " << x << " and " << y << std::endl;
    }
};

// Copy Constructor
class CopyConstructor {
public:
    CopyConstructor(int x) {
        std::cout << "Copy Constructor called with value " << x << std::endl;
    }

    CopyConstructor(const CopyConstructor& obj) {
        std::cout << "Copy Constructor called with copied value" << std::endl;
    }
};

// Move Constructor
class MoveConstructor {
public:
    MoveConstructor(int x) {
        std::cout << "Move Constructor called with value " << x << std::endl;
    }

    MoveConstructor(MoveConstructor&& obj) {
        std::cout << "Move Constructor called with moved value" << std::endl;
    }
};

// Destructor
class Destructor {
public:
    Destructor() {
        std::cout << "Destructor called" << std::endl;
    }

    ~Destructor() {
        std::cout << "Destructor called" << std::endl;
    }
};

int main() {
    // Default Constructor
    DefaultConstructor defaultConstructor;

    // Parameterized Constructor
    ParameterizedConstructor parameterizedConstructor(10, 20);

    // Copy Constructor
    CopyConstructor copyConstructor(30);
    CopyConstructor copyConstructor2(copyConstructor);

    // Move Constructor
    MoveConstructor moveConstructor(40);
    MoveConstructor moveConstructor2(std::move(moveConstructor));

    // Destructor
    Destructor destructor;

    return 0;
}

