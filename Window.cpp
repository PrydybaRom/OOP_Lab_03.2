#include "window.h"

Window::Window() {
    x = 0;
    y = 0;
}
Window::Window(int x_coord, int y_coord, int button_size) : x(x_coord), y(y_coord), button(button_size) {}
Window::~Window() {}

//SET GET
int Window::getX() const {
    return x;
}
int Window::getY() const {
    return y;
}
Button& Window::getButton() {
    return button;
}

void Window::setX(int x_coord) {
    x = x_coord;
}
void Window::setY(int y_coord) {
    y = y_coord;
}


//STRING
Window::operator std::string() const {
    return "Window coordinates: (" + std::to_string(x) + ", " + std::to_string(y) + "), Button size: " + std::string(button);
}

std::ostream& operator<<(std::ostream& out, const Window& win) {
    out << std::string(win);
    return out;
}

std::istream& operator>>(std::istream& in, Window& win) {
    int x, y, size;
    std::cout << "Enter window coordinates (x y): ";
    in >> x >> y;
    std::cout << "Enter button size: ";
    in >> size;
    win.setX(x);
    win.setY(y);
    win.getButton().setSize(size);
    return in;
}
