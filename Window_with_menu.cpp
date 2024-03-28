#include "window_with_menu.h"

WindowWithMenu::WindowWithMenu() : Window() {
    menu = nullptr;
}
WindowWithMenu::WindowWithMenu(int x_coord, int y_coord, int button_size, const std::string& menu_text) : Window(x_coord, y_coord, button_size) {
    menu = new std::string(menu_text);
}
WindowWithMenu::~WindowWithMenu() {
    delete menu;
}

void WindowWithMenu::displayMenu() const {
    if (menu != nullptr) {
        std::cout << "Menu: " << *menu << std::endl;
    }
    else {
        std::cout << "No menu available." << std::endl;
    }
}

//STRING
WindowWithMenu::operator std::string() const {
    return std::string(static_cast<const Window&>(*this)) + ", Menu: " + (menu ? *menu : "No menu");
}

std::ostream& operator<<(std::ostream& out, const WindowWithMenu& win) {
    out << std::string(win);
    return out;
}

std::istream& operator>>(std::istream& in, WindowWithMenu& win) {
    int x, y, size;
    std::string menu_text;
    std::cout << "Enter window coordinates (x y): ";
    in >> x >> y;
    std::cout << "Enter button size: ";
    in >> size;
    std::cout << "Enter menu text: ";
    in.ignore(); // ignore newline character
    std::getline(in, menu_text);
    win.setX(x);
    win.setY(y);
    win.getButton().setSize(size);
    delete win.menu;
    win.menu = new std::string(menu_text);
    return in;
}


