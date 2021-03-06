// 
// macOS
// Space Invaders
// SchumakerTeam
// Hudson Schumaker
//

#include <iostream>
#include <SDL2/SDL.h>
#include <SDL2/SDL_image.h>
#include "Common.hpp"
#include "Splash.hpp"
#include "Menu.hpp"

SDL_Window *window;
SDL_Renderer *renderer;

void setUp() {
    SDL_Init(SDL_INIT_EVERYTHING);
    TTF_Init();

    window = SDL_CreateWindow(
        Common::TITLE, SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED,
        Common::WIDTH,
        Common::HEIGHT,
        SDL_WINDOW_SHOWN | SDL_WINDOW_METAL | SDL_WINDOW_ALLOW_HIGHDPI
    );

    renderer = SDL_CreateRenderer(window, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);   
}

int main(void) {
    setUp(); 

    Splash* splash = new Splash(renderer);
    delete splash;

    Menu* menu = new Menu(renderer);
    delete menu;

    return 0;
}
