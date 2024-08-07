#include <iostream>
#include "constants.h"
#include "io.h"
#include "lv1.h"
// Add includes for lv2.h to lv10.h as needed

using namespace std;

int main() {
    setup();
    while (!gameOver()) {
        draw();
        input();
    }
    cout << "\nCongratulations!\nYou reached the finish!" << endl;
    return 0;
}

