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
        SDL_Color white = { 255, 255, 255 };
        TTF_Font* font48;
        
        void load();  
        void loop();
        void render();
        void input();
        void unload();  

    public:
        Menu(SDL_Renderer* renderer);
        ~Menu();

};