#define SDL_MAIN_HANDLED
#include <iostream>
#include <SDL.h>

using namespace std;

int main() {
    const int SCREEN_WIDTH = 400;
    const int SCREEN_HEIGHT = 400;

    if (SDL_Init(SDL_INIT_VIDEO) < 0) {
        cout << "SDL INIT FAILED!!!" << endl;
        return 1;   // A return 1 means that there is some error while executing the program, and it is not performing what it was intended to do.
    }

    /* Create a Window */
    // SDL_Window is the struct that holds all info about the Window itself: size, position, full screen, borders etc.
    SDL_Window *window = SDL_CreateWindow("Particle Fire Explosion", SDL_WINDOWPOS_UNDEFINED, SDL_WINDOWPOS_UNDEFINED,
                        SCREEN_WIDTH, SCREEN_HEIGHT, 0); // SDL_WINDOWEVENT_SHOWN flag will make unexpected behavior like fullscreen

    if (window == NULL) {
        SDL_Quit();
        return 2;
    }

    /* Create a Render (process of generating) */
    // SDL_Renderer is a struct that handles all rendering. It is tied to a SDL_Window so it can only render within that SDL_Window
    // the index of the rendering driver to initialize, or -1 to initialize the first one supporting the requested flags
    // SDL_RENDERER_PRESENTVSYNC: present is synchronized with the refresh rate
    SDL_Renderer *renderer = SDL_CreateRenderer(window, -1, SDL_RENDERER_PRESENTVSYNC);

    if (renderer == NULL) {
        cout << "Could not create renderer!!!" << endl;
        SDL_DestroyWindow(window);
        SDL_Quit();
        return 3;
    }

    /* Create a Texture */
    // SDL_Texture: It is an efficient, driver-specific representation of pixel data
    // RGBA8888 means that the color is encoded as 0xRRGGBBAA or 0bRRRRRRRRGGGGGGGGBBBBBBBBAAAAAAAA, where A is transparency parameter, changing this value will simply cause the entire texture to fade in or out
    // SDL_TEXTUREACCESS_STATIC: meaning the texture cannot be changed
    SDL_Texture *texture = SDL_CreateTexture(renderer, SDL_PIXELFORMAT_RGBA8888, SDL_TEXTUREACCESS_STATIC, SCREEN_WIDTH, SCREEN_HEIGHT);

    if (texture == NULL) {
        cout << "Could not create texture!!!" << endl;
        SDL_DestroyRenderer(renderer);
        SDL_DestroyWindow(window);
        SDL_Quit();
        return 4;
    }

    // The UInt32 value type represents unsigned integers with values ranging from 0 to 4,294,967,295
    Uint32 *buffer = new Uint32[SCREEN_WIDTH*SCREEN_HEIGHT];

    // Setting the specified value "0xFF" to all bytes "SCREEN_WIDTH*SCREEN_HEIGHT*sizeof(Uint32)" in buffer block of memory pointed by "buffer"
    memset(buffer, 0xFF, SCREEN_WIDTH*SCREEN_HEIGHT*sizeof(Uint32));

    // Update the given texture rectangle with new pixel data
    // the "texture" to update
    // "NULL" to update the entire texture
    // "buffer" pointer location to memory block
    // SCREEN_WIDTH*sizeof(Uint32): the number of bytes in a row of pixel data
    SDL_UpdateTexture(texture, NULL, buffer, SCREEN_WIDTH*sizeof(Uint32));

    // Clear the current rendering target with the drawing color
    SDL_RenderClear(renderer);

    // Copy a portion of the texture to the current rendering target, NULL for the entire texture
    SDL_RenderCopy(renderer, texture, NULL, NULL);

    // Update the screen with any rendering performed since the previous call
    SDL_RenderPresent(renderer);

    bool quit = false;

    SDL_Event event;

    while (!quit) {

        while (SDL_PollEvent(&event)) {
            if(event.type == SDL_QUIT) {
                quit = true;
            }
        }
    }

    SDL_DestroyRenderer(renderer);
    SDL_DestroyTexture(texture);
    SDL_DestroyWindow(window);
    SDL_Quit();

    return 0;
}
