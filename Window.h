#pragma once

#include <iostream>
#include <string>
#include "button.h"

class Window {
private:
    int x, y;
    Button button;

public:
    Window();
    Window(int x_coord, int y_coord, int button_size);
    ~Window();

    int getX() const;
    int getY() const;
    void setX(int x_coord);
    void setY(int y_coord);

    Button& getButton();

    operator std::string() const;
    friend std::ostream& operator<<(std::ostream& out, const Window& win);
    friend std::istream& operator>>(std::istream& in, Window& win);
};

