#define SDL_MAIN_HANDLED
#include <iostream>
#include <SDL.h>
#include "screen.h"

using namespace std;
using namespace screen_processing;

int main() {
    Screen screen;

    if (screen.init() == false) {
        cout << "Error initializing SDL" << endl;
    }

    while (true) {
        // Update particles

        // Draw particles
        for (int y = 0; y<Screen::SCREEN_HEIGHT; y++) {
            for (int x = 0; x<Screen::SCREEN_WIDTH; x++) {
                screen.setPixel(x, y, 128, 0, 255);
            }
        }
        screen.setPixel(400, 300, 255, 255, 255);   // setting the center pixel white

        // Draw the screen:
        screen.update();

        // Check for messages/events
        if (screen.processEvents() == false) {
            break;
        }
    }

    screen.close();

    return 0;
}
