#include <iostream>
#include <cstdint>

// ===============================

class Power {
    std::size_t a{};
    std::size_t b{};

public:
    void set() {
        std::cout << "Enter first number: ";
        std::cin >> a;
        std::cout << "Enter second number: ";
        std::cin >> b;
    }
    void calculate() {
        std::cout << "Answer: " << pow(a, b) << std::endl;
    }
};

void task1() {
    std::cout << "TASK 1" << std::endl;
    Power p;
    p.set();
    p.calculate();
}

// ===============================

class RGBA {
    std::uint8_t m_red{};
    std::uint8_t m_green{};
    std::uint8_t m_blue{};
    std::uint8_t m_alpha = 255;
public:
    RGBA()
        : m_red{ 145 }
        , m_green{ 89 }
        , m_blue{ 50 } {}
    void print() {
        std::cout << "red: " << (uint16_t)m_red << std::endl << 
                     "green: " << (uint16_t)m_green << std::endl << 
                     "blue: " << (uint16_t)m_blue;
    }
    ~RGBA() {}
};

void task2() {
    std::cout << std::endl << "TASK 2" << std::endl;
    RGBA rgba;
    rgba.print();
    std::cout << std::endl;
}

// ===============================

class Stack {
private:
    static const std::uint16_t size = 10;
    int arr[size]{};
    int length = -1;
public:
    void reset() {
        length = -1;
        for (int i = 0; i < size; i++) {
            arr[i] = 0;
        }
    }
    bool push(int data) {
        if (length < size) {
            arr[++length] = data;
            return true;
        }
        else {
            std::cout << "Sorry, but stack overflow!" << std::endl;
            return false;
        }
    }
    void pop() {
        if (length != -1) {
            arr[length] = 0;
            length--;
        }
        else {
            std::cout << "Sorry, but stack is empty!" << std::endl;
        }
    }
    void print() {
        for (int i = 0; i < size; ++i) {
            std::cout << arr[i] << "  ";
        }
        std::cout << std::endl;
    }
};

void task3() {
    std::cout << std::endl << "TASK 3" << std::endl;
    Stack stack;
    stack.reset();
    stack.print();

    stack.push(3);
    stack.push(7);
    stack.push(5);
    stack.print();

    stack.pop();
    stack.print();

    stack.pop();
    stack.pop();
    stack.print();
}

// ===============================

int main()
{
    task1();
    task2();
    task3();
}