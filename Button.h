#pragma once

#include <iostream>
#include <string>

class Button {
private:
    int size;

public:
    Button();
    Button(int s);
    ~Button();

    int getSize() const;
    void setSize(int s);

    //STRING
    operator std::string() const;
    friend std::ostream& operator<<(std::ostream& out, const Button& btn);
    friend std::istream& operator>>(std::istream& in, Button& btn);
};



