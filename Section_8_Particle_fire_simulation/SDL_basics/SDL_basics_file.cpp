#define SDL_MAIN_HANDLED
#include <iostream>
#include <SDL.h>

using namespace std;

int main(int argv, char** args) {
    if (SDL_Init(SDL_INIT_VIDEO) < 0) {
        cout << "SDL INIT FAILED!!!" << endl;
    }

    cout << "SDL INIT SUCCESSFUL" << endl;

    SDL_Quit();

    return 0;
}
