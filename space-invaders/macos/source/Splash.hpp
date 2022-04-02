// 
// macOS
// Splash.hpp
// SchumakerTeam.
// Hudson Schumaker
//

#pragma once

#include <SDL2/SDL.h>
#include <SDL2/SDL_image.h>

class Splash final {
    private:
        SDL_Renderer *renderer;
        SDL_Surface *logo_surf;
        SDL_Texture *logo; 

        void load();
        void input();
        void loop();
        void exit();  
    
    public:
        Splash(SDL_Renderer* renderer);
        ~Splash();
};