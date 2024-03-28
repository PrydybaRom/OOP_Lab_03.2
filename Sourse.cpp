#include <iostream>
#include "window_with_menu.h"

using namespace std;

int main() {
    
    Button but(5);
    Window windo(50, 120, 2);
    cout << "But: " << but << endl;
    cout << "Windo: " << windo << endl;


    WindowWithMenu win1;
    WindowWithMenu win2(100, 200, 50, "File Edit View");

   
   cout << "Window 1:\n" << win1 << endl;
   cout << "Window 2:\n" << win2 << endl;

   cin >> win1;
   cout << "Updated Window 1:\n" << win1 << endl;

    win2.displayMenu();

    return 0;
}
