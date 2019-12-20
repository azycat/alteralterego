#include <SDL2/SDL.h>

#include "game.h"
#include "graphics.h"
#include "input.h"

/* Game class
 * This class holds all information for main game loop (not menu loop, etc)
 */

namespace{
    const int FPS = 50;
    const int MAX_FRAME_TIME = 5 * 1000 / FPS; //max time frame is allowed to last
}

Game::Game(){
    SDL_Init(SDL_INIT_EVERYTHING); //sets up all sorts of SDL thingz and argumenntz
    this->gameLoop();
}

Game::~Game(){

}

void Game::gameLoop(){
    Graphics graphics;
    Input input;
    SDL_Event event; //holds whatever event happens during the frame

    int LAST_UPDATE_TIME = SDL_GetTicks();
    //Start the game loop
    while(true){
        input.beginNewFrame();

        if(SDL_PollEvent(&event)) {
            if(event.type == SDL_KEYDOWN){
                if(event.key.repeat ==0){ //makes sure youre not holding down a key
                    input.keyDownEvent(event);
                }
            }
            else if (event.type == SDL_KEYUP){
                input.keyUpEvent(event);
            }
            else if (event.type == SDL_QUIT){ //when the program ends, when you click the X
                return;
            }
        }
        if (input.wasKeyPressed(SDL_SCANCODE_ESCAPE) == true){
            return;
        }

        const int CURRENT_TIME_MS = SDL_GetTicks();
        int ELAPSED_TIME_MS = CURRENT_TIME_MS - LAST_UPDATE_TIME;
        this->update(std::min(ELAPSED_TIME_MS, MAX_FRAME_TIME));
        LAST_UPDATE_TIME = CURRENT_TIME_MS;
    }
}

void Game::draw(Graphics &graphics){

}

void Game::update(float elapsedtime){

}