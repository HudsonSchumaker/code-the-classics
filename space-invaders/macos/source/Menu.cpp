//
// macOS
// Space Invaders
// SchumakerTeam
// Hudson Schumaker
//

#include "Menu.hpp"
#include "Color.hpp"
#include "Common.hpp"
#include <iostream>
#include <stdlib.h>

Menu::Menu(SDL_Renderer* renderer) {
    this->renderer = renderer;
    isRunning = false;
    currentTick = SDL_GetPerformanceCounter();
    lastTick = 0;
    deltaTime = 0.0;

    load();
    loop();
}

Menu::~Menu() {
}

void Menu::load() {
    font60 = TTF_OpenFont("data/font.ttf", 60);
    font24 = TTF_OpenFont("data/font.ttf", 24);
    
    surfaceTitle = TTF_RenderText_Blended(font60, "Space Invaders", Color::getOrange());
	title = SDL_CreateTextureFromSurface(renderer, surfaceTitle);

    surfaceStartWhite = TTF_RenderText_Blended(font24, "- Press Enter to Start -", Color::getWhite());
    startWhiteTexture = SDL_CreateTextureFromSurface(renderer, surfaceStartWhite);

    surfaceStartGray = TTF_RenderText_Blended(font24, "- Press Enter to Start -", Color::getGray());
    startGrayTexture = SDL_CreateTextureFromSurface(renderer, surfaceStartGray);
}

void Menu::loop() {
    isRunning = true;
    while(isRunning) {
        lastTick = currentTick;
		currentTick = SDL_GetPerformanceCounter();
		deltaTime = (double) ((currentTick - lastTick) * 1000 / (double) SDL_GetPerformanceFrequency());
        
        input();
        render();
        SDL_Delay(deltaTime);
    }
}

void Menu::render() {
    SDL_SetRenderDrawColor(renderer, 0, 0, 0, 255);
    SDL_RenderClear(renderer);

    SDL_Point size;
    SDL_QueryTexture(title, NULL, NULL, &size.x, &size.y);
    
    int speed = 8;
    float pi = 3.141592f;
    int offset = 30;
    
    SDL_Rect rect = { 
        Common::H_WIDTH - (size.x / 2), 
        static_cast<int>(speed * SDL_sin(SDL_GetTicks() * (pi / 1500.0f))) + offset,
        size.x,
        size.y 
    };
    SDL_RenderCopy(renderer, title, NULL, &rect);

    SDL_QueryTexture(startGrayTexture, NULL, NULL, &size.x, &size.y);
    SDL_Rect grayRect = { 
        Common::H_WIDTH - (size.x / 2), 
        Common::H_HEIGHT + 100 - (size.y / 2),
        size.x,
        size.y 
    };
    SDL_RenderCopy(renderer, startGrayTexture, NULL, &grayRect);

    SDL_QueryTexture(startWhiteTexture, NULL, NULL, &size.x, &size.y);
    SDL_Rect whiteRect = { 
        Common::H_WIDTH - (size.x / 2), 
        Common::H_HEIGHT + 100 - (size.y / 2) + 2,
        size.x,
        size.y 
    };
    SDL_RenderCopy(renderer, startWhiteTexture, NULL, &whiteRect);
    SDL_RenderPresent(renderer);   
}

void Menu::input() {
    SDL_Event sdlEvent;
    while (SDL_PollEvent(&sdlEvent)) {
        switch (sdlEvent.type) {
            case SDL_QUIT:
                isRunning = false;
                exit(0);
                break;
        }
    }
}

void Menu::unload() {
    SDL_DestroyTexture(title);
    SDL_FreeSurface(surfaceTitle);
    TTF_CloseFont(font60);
    TTF_CloseFont(font24);
}
