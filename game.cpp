#include "stdafx.h"

/*  Game class
    This class holds all information for our main game loop
*/

Game::Game() {
    SDL_Init(SDL_INIT_EVERYTHING);
    this->gameLoop();
}

Game::~Game() {

}

void Game::gameLoop() {
    Graphics graphics;
    SDL_Event event;

    while (true) {
        if (SDL_PollEvent(&event)) {
            if (event.type == SDL_QUIT) {
                return;
            }
        }
    }

}

void Game::draw(Graphics &graphics) {

}

void Game::update(float elapsedtime) {

}
