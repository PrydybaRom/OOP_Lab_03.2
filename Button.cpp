#include "button.h"

Button::Button() {
    size = 0;
}

Button::Button(int s) {
    if (s >= 0) {
        size = s;
    }
    else {
        std::cerr << "Error: Size cannot be negative." << std::endl;
        exit(EXIT_FAILURE);
    }
}

Button::~Button() {}

int Button::getSize() const {
    return size;
}

void Button::setSize(int s) {
    if (s >= 0) {
        size = s;
    }
    else {
        std::cerr << "Error: Size cannot be negative." << std::endl;
        exit(EXIT_FAILURE);
    }
}

//STRING
Button::operator std::string() const {
    return std::to_string(size);
}

std::ostream& operator<<(std::ostream& out, const Button& btn) {
    out << "Button size: " << btn.size;
    return out;
}

std::istream& operator>>(std::istream& in, Button& btn) {
    int size;
    std::cout << "Enter button size: ";
    in >> size;
    btn.setSize(size);
    return in;
}
