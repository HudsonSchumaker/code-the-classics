//
// macOS
// Space Invaders
// SchumakerTeam
// Hudson Schumaker
//

#include "Splash.hpp"
#include "Common.hpp"

Splash::Splash(SDL_Renderer* renderer) {
    this->renderer = renderer;
    load();
    loop();
}

Splash::~Splash() {
    unload();
}

void Splash::load() {
    logoSurface = IMG_Load("data/logo.png");
    logoTexture = SDL_CreateTextureFromSurface(renderer, logoSurface);
}

void Splash::loop() {
    for(short i = 1; i < 5; i++) {
        input();
        render();
        SDL_Delay(1000);
    }
}

void Splash::render() {
    SDL_SetRenderDrawColor(renderer, 255, 255, 255, 255);
    SDL_RenderClear(renderer);

    SDL_Point size;
    SDL_QueryTexture(logoTexture, NULL, NULL, &size.x, &size.y);
    SDL_Rect rect = { Common::H_WIDTH - (size.x/2), Common::H_HEIGHT - (size.y/2), size.x, size.y };
    SDL_RenderCopy(renderer, logoTexture, NULL, &rect);

    SDL_RenderPresent(renderer);   
}

void Splash::input() {
    SDL_Event sdlEvent;
    while (SDL_PollEvent(&sdlEvent)) {
        switch (sdlEvent.type) {
            case SDL_QUIT:
                break;
        }
    }
}

void Splash::unload() {
    SDL_DestroyTexture(logoTexture);
    SDL_FreeSurface(logoSurface);
}
