#include "lv1.h"
#include "constants.h"
#include <cstdlib> // For rand() and srand()
#include <ctime> // For time()

using namespace std;

int x, y; // Player position
int finishX, finishY; // Finish position

char maze[height][width + 1] = {
    "±±±±±±±±±±±±±±±±±±±±",
    "±   ±              ±",
    "± ± ± ±±±±± ±±±± ± ±",
    "± ±   ±   ± ±  ± ± ±",
    "± ±±± ± ± ± ±± ± ± ±",
    "±       ±    ± ±   ±",
    "±±±±± ±±± ±±±± ±± ±±",
    "±     ±    ±      ±±",
    "± ±±±±±±± ±±±±±    ±",
    "±±±±±±±±±±±±±±±±±±±±"
};

void setup() {
    x = 1;
    y = 1;
    
    // Seed the random number generator
    srand(time(0));
    
    // Randomly place the finish position
    do {
        finishX = rand() % width;
        finishY = rand() % height;
    } while (maze[finishY][finishX] == '±' || (finishX == x && finishY == y));
}

bool gameOver() {
    return x == finishX && y == finishY;
}

