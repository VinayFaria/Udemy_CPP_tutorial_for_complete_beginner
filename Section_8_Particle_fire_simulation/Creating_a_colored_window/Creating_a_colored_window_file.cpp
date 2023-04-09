#define SDL_MAIN_HANDLED
#include <iostream>
#include <SDL.h>

using namespace std;

int main() {
    const int SCREEN_WIDTH = 800;
    const int SCREEN_HEIGHT = 600;

    if (SDL_Init(SDL_INIT_VIDEO) < 0) {
        cout << "SDL INIT FAILED!!!" << endl;
        return 1;
    }

    /* Create a Window */
    SDL_Window *window = SDL_CreateWindow("Particle Fire Explosion", SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED,
                        SCREEN_WIDTH, SCREEN_HEIGHT, 0); // SDL_WINDOWEVENT_SHOWN flag will make unexpected behavior like fullscreen

    if (window == NULL) {
        SDL_Quit();
        return 2;
    }

    /* Create a Render (process of generating) */
    SDL_Renderer *renderer = SDL_CreateRenderer(window, -1, SDL_RENDERER_PRESENTVSYNC);

    if (renderer == NULL) {
        cout << "Could not create renderer!!!" << endl;
        SDL_DestroyWindow(window);
        SDL_Quit();
        return 3;
    }

    /* Create a Texture */
    SDL_Texture *texture = SDL_CreateTexture(renderer, SDL_PIXELFORMAT_RGBA8888, SDL_TEXTUREACCESS_STATIC, SCREEN_WIDTH, SCREEN_HEIGHT);

    if (texture == NULL) {
        cout << "Could not create texture!!!" << endl;
        SDL_DestroyRenderer(renderer);
        SDL_DestroyWindow(window);
        SDL_Quit();
        return 4;
    }

    Uint32 *buffer = new Uint32[SCREEN_WIDTH*SCREEN_HEIGHT];

    for (int i=0; i<SCREEN_WIDTH*SCREEN_HEIGHT; i++) {
        buffer[i] = 0x00FFFFFF; // cyan color
    }

    // Update the given texture rectangle with new pixel data
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
