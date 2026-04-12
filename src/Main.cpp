#include <iostream>
#include <SDL2/SDL.h>
#include <SDL2/SDL_image.h>
#include <SDL2/SDL_ttf.h>
#include <SDL2/SDL_mixer.h>
#include <glm/glm.hpp>
#include "sol/sol.hpp"

using namespace std;

int main() {
    // Try using lua via the sol library
    sol::state lua;
    lua.open_libraries(sol::lib::base);

    // Try using GLM library
    glm::vec2 velocity = glm::vec2(3, 4);
    velocity = glm::normalize(velocity);
    
    // Try to initialize SDL
    SDL_Init(SDL_INIT_EVERYTHING);

    cout << "All dependencies seem to work!" << endl;
    return 0;
}
