#define SDL_MAIN_HANDLED
#include <iostream>
#include <SDL.h>
#include <math.h>
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
        int elapsed = SDL_GetTicks();   // Get the number of milliseconds since SDL library initialization.
        // sin(elapsed * 0.001) gives values between -1 to 1, (1+sin(elapsed * 0.001) gives values between 0 to 2
        // ((1+sin(elapsed * 0.001)) * 128) gives values between 0 to 256
        unsigned char red = (unsigned char)((1+sin(elapsed * 0.001)) * 128); // unsigned char is used for casting, so that actual value is stored
        unsigned char green = (unsigned char)((1+sin(elapsed * 0.002)) * 128); // unsigned char is flexible, we can use without casting for actual character and casting to store actual number
        unsigned char blue = (unsigned char)((1+sin(elapsed * 0.003)) * 128);

        for (int y = 0; y<Screen::SCREEN_HEIGHT; y++) {
            for (int x = 0; x<Screen::SCREEN_WIDTH; x++) {
                screen.setPixel(x, y, red, green, blue);
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
