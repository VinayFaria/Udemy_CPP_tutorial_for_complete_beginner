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
        // Check for messages/events

        if (screen.processEvents() == false) {
            break;
        }
    }

    screen.close();

    return 0;
}

