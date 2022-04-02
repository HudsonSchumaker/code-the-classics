//
// macOS
// Space Invaders
// SchumakerTeam
// Hudson Schumaker
//

#include "Menu.hpp"
#include "Common.hpp"

Menu::Menu(SDL_Renderer* renderer) {
    this->renderer = renderer;
    load();
    loop();
}

Menu::~Menu() {
}

void Menu::load() {
    font48 = TTF_OpenFont("data/font.ttf", 48);

    SDL_Surface* surfaceMessage = TTF_RenderText_Blended(font48, "Space Invaders", textColor);
	SDL_Texture* message = SDL_CreateTextureFromSurface(renderer, surfaceMessage);
}

void Menu::loop() {
    for(short i = 1; i < 5; i++) {
        input();
        render();
        SDL_Delay(1000);
    }
}

void Menu::render() {
    SDL_SetRenderDrawColor(renderer, 0, 0, 0, 255);
    SDL_RenderClear(renderer);

   

    SDL_RenderPresent(renderer);   
}

void Menu::input() {
    SDL_Event sdlEvent;
    while (SDL_PollEvent(&sdlEvent)) {
        switch (sdlEvent.type) {
            case SDL_QUIT:
                break;
        }
    }
}

void Menu::unload() {
    SDL_DestroyTexture(logo_texture);
    SDL_FreeSurface(logo_surface);
}





