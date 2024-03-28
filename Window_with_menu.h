#pragma once

#include <iostream>
#include <string>
#include "window.h"

class WindowWithMenu : public Window {
private:
    std::string* menu;

public:
    WindowWithMenu();
    WindowWithMenu(int x_coord, int y_coord, int button_size, const std::string& menu_text);
    ~WindowWithMenu();

    void displayMenu() const;

    operator std::string() const;
    friend std::ostream& operator<<(std::ostream& out, const WindowWithMenu& win);
    friend std::istream& operator>>(std::istream& in, WindowWithMenu& win);
};


