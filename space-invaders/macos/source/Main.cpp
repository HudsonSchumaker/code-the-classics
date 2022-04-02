// 
// macOS
// Main.cpp
// SchumakerTeam.
// Hudson Schumaker
//

#include <iostream>
#include <SDL2/SDL.h>
#include <SDL2/SDL_image.h>
#include "Common.hpp"

// SDL_Window* window;
SDL_Renderer *renderer;

SDL_Surface *logo_surf;
SDL_Texture *logo;

bool isRunning = false;

void setUp() {
    SDL_Init(SDL_INIT_EVERYTHING);

    SDL_Window* window = SDL_CreateWindow(
        Common::TITLE, SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED,
        Common::WIDTH,
        Common::HEIGHT,
        SDL_WINDOW_SHOWN | SDL_WINDOW_METAL
    );

    renderer = SDL_CreateRenderer(window, -1, 0);   
}

void ProcessInput() {
    SDL_Event sdlEvent;
    while (SDL_PollEvent(&sdlEvent)) {
        switch (sdlEvent.type) {
            case SDL_QUIT:
                isRunning = false;
                break;
        }
    }
}

void Initialize() {

    logo_surf = IMG_Load("data/logo2.png");
    logo = SDL_CreateTextureFromSurface(renderer, logo_surf);
    isRunning = true;
}

void Update() {
    // TODO: Update game objects...
}

void Render(SDL_Texture *logo) {
    SDL_SetRenderDrawColor(renderer, 0, 0, 0, 255);
    SDL_RenderClear(renderer);
    
    SDL_Point size;
    SDL_QueryTexture(logo, NULL, NULL, &size.x, &size.y);
    SDL_Rect rect = { 0, 0, size.x, size.y };
    SDL_RenderCopy(renderer, logo, NULL, &rect);
    
    SDL_RenderPresent(renderer);
}

void Run() {
    while (isRunning) {
        ProcessInput();
        Update();
        Render(logo);
    }
}

int main(void) {
    setUp(); 

    Initialize();
    Run();
    return 0;
}

