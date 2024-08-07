#include "io.h"
#include "constants.h"
#include <iostream>
#include <conio.h> // For _getch()
#include <cstdlib> // For system()

using namespace std;

extern int x, y;
extern int finishX, finishY;
extern char maze[height][width + 1];

void draw() {
    system("cls"); // Clear screen
    for (int i = 0; i < height; i++) {
        for (int j = 0; j < width; j++) {
            if (i == y && j == x)
                cout << 'P'; // Player
            else if (i == finishY && j == finishX)
                cout << 'F'; // Finish
            else
                cout << maze[i][j];
        }
        cout << endl;
    }
}

void input() {
    char key = _getch();
    switch (key) {
        case 'w':
            if (maze[y - 1][x] != '±') y--;
            break;
        case 's':
            if (maze[y + 1][x] != '±') y++;
            break;
        case 'a':
            if (maze[y][x - 1] != '±') x--;
            break;
        case 'd':
            if (maze[y][x + 1] != '±') x++;
            break;
    }
}

