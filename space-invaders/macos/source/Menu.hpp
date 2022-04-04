// 
// macOS
// Space Invaders
// SchumakerTeam
// Hudson Schumaker
//

#pragma once

#include <SDL2/SDL.h>
#include <SDL2/SDL_ttf.h>

class Menu final {
    
    private:
        SDL_Renderer* renderer;
        SDL_Surface* surfaceTitle;
        SDL_Texture* title;
        SDL_Surface* surfaceStartWhite;
        SDL_Texture* startWhiteTexture;
        SDL_Surface* surfaceStartGray;
        SDL_Texture* startGrayTexture;

        TTF_Font* font60;
        TTF_Font* font24;
        
        bool isRunning;
        Uint64 currentTick;
        Uint64 lastTick;
        double deltaTime;
        
        void load();  
        void loop();
        void render();
        void input();
        void unload();  

    public:
        Menu(SDL_Renderer* renderer);
        ~Menu();

};