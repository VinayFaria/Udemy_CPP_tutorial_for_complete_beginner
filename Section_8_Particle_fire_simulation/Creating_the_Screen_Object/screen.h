#ifndef SCREEN_H_
#define SCREEN_H_
#include <SDL.h>

namespace screen_processing {

    class Screen {
    public:
        const static int SCREEN_HEIGHT = 600;
        const static int SCREEN_WIDTH = 800;

    private:
        // SDL struct's (window, renderer, texture, buffer) require for displaying window
        SDL_Window *m_window;
        SDL_Renderer *m_renderer;
        SDL_Texture *m_texture;
        Uint32 *m_buffer;

    public:
        Screen();   // Constructor for initializing NULL window, renderer, texture and buffer
        bool init();    // method for displaying the colored window
        bool processEvents();   // method for checking input from user to close the window
        void close();   // method to clear up all the resources used for displaying window
    };

}

#endif // SCREEN_H_
