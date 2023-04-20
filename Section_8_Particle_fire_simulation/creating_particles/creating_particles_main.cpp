#define SDL_MAIN_HANDLED
#include <iostream>
#include <SDL.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>
#include "swarm.h"
#include "screen.h"

using namespace std;
using namespace screen_processing;

int main() {
    srand((unsigned int)time(NULL));  // seed the random number generator (see the function 'srand'), output of 'time' will give different seed
    Screen screen1;

    if (screen1.init() == false) {
        cout << "Error initializing SDL" << endl;
    }

    Swarm swarm;

    while (true) {
        // Update particles

        // Draw particles
        int elapsed = SDL_GetTicks();   // Get the number of milliseconds since SDL library initialization.

        unsigned char red = (unsigned char)((1+sin(elapsed * 0.001)) * 128); // unsigned char is used for casting, so that actual value is stored
        unsigned char green = (unsigned char)((1+sin(elapsed * 0.002)) * 128); // unsigned char is flexible, we can use without casting for actual character and casting to store actual number
        unsigned char blue = (unsigned char)((1+sin(elapsed * 0.003)) * 128);

        const Particle *const pParticles = swarm.getParticles();

        for (int i = 0; i < Swarm::NPARTICLES; i++) {
            Particle particle = pParticles[i];  // "particle" gets member variable m_x, m_y

            // (particle.m_x + 1) will make sure number is between 0 to 2
            // by multiplying Screen::SCREEN_WIDTH/2 it will cause to become in range 0 to 255
            int x = (particle.m_x + 1) * Screen::SCREEN_WIDTH/2;
            int y = (particle.m_y + 1) * Screen::SCREEN_HEIGHT/2;

            screen1.setPixel(x, y, red, green, blue);
        }

        // Draw the screen:
        screen1.update();

        // Check for messages/events
        if (screen1.processEvents() == false) {
            break;
        }
    }

    screen1.close();

    return 0;
}
