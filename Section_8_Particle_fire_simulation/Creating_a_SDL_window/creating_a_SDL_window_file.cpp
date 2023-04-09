#define SDL_MAIN_HANDLED    // #define the macro SDL_MAIN_HANDLED before SDL.h, which will prevent SDL from turning main into a macro for SDL_main

#include <iostream>         // provides basic input and output services

#include <SDL.h>            // Simple DirectMedia Layer is a cross-platform development library designed to provide
                            // low level access to audio, keyboard, mouse, joystick, and graphics hardware via
                            // OpenGL (application programming interface for rendering 2D and 3D vector graphics) and
                            // Direct3D (used to render three-dimensional graphics in applications for Microsoft Windows).

using namespace std;

// argv is the number of arguments being passed into your program from the command line and args is the array of arguments.
int main(int argv, char** args) {   //

    const int SCREEN_WIDTH = 400;
    const int SCREEN_HEIGHT = 400;

    // SDL_Init: initialize the SDL's subsystems.
    // SDL_INIT_VIDEO: video subsystem; automatically initializes the events subsystem
    if (SDL_Init(SDL_INIT_VIDEO) < 0) {
        cout << "SDL INIT FAILED!!!" << endl;
        return 1;   // A return 1 means that there is some error while executing the program, and it is not performing what it was intended to do.
    }

    // SDL_Window: It is a struct and this holds all of your display graphics. This interfaces your graphics and the OS window manager.
    // SDL_Window * SDL_CreateWindow(const char *title, int x, int y, int w, int h, Uint32 flags);
    // SDL_WINDOWPOS_UNDEFINED: x, y position of the window
    // SDL_WindowFlags: An enumeration of window states.
    SDL_Window *window = SDL_CreateWindow("Particle Fire Explosion", SDL_WINDOWPOS_UNDEFINED, SDL_WINDOWPOS_UNDEFINED,
                        SCREEN_WIDTH, SCREEN_HEIGHT, 0); // SDL_WINDOWEVENT_SHOWN flag will make unexpected behavior like fullscreen



    if (window == NULL) {
        SDL_Quit(); // Clean up all initialized subsystems
        return 2;   // A return 1 means that there is some error while executing the program, and it is not performing what it was intended to do.
    }

    bool quit = false;

    SDL_Event event;    // SDL_Event: A union that contains structures for the different event types.

    while (!quit) {
        // Draw particles
        // update particles
        // Check for messages/ events

        while (SDL_PollEvent(&event)) { // SDL_PollEvent: removes the next event from the event queue, if there are no events on the queue it returns 0, otherwise it returns 1
            if(event.type == SDL_QUIT) {
                quit = true;
            }
        }
    }

    SDL_DestroyWindow(window);  // Destroy a window, If window is NULL, this function will return immediately after setting the SDL error message to "Invalid window"
    SDL_Quit();

    return 0;   // A return 0 means that the program will execute successfully and did what it was intended to do.
}
