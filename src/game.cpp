//
//  game.cpp
//  CrackoutGame
//
//  Created by Vitaliy Babich on 27.03.2022.
//

#include "game.h"

Game::Game(){
    state_ = States::playground;
    level_ = new Playground{};
}

void Game::update(){
    level_->update(gameData_);
}

void Game::render(){
    ofDrawRectRounded(gameData_.getPlayerPosVec2f(), gameData_.getPlayerWidth(), platformHeight, platformHeight);
}

void Game::keyPressed(int key){
    level_->keyPressed(key);
}

void Game::keyReleased(int key){
    level_->keyReleased(key);
}



Game::~Game(){
}



/*
switch (state_){
    case States::intro:
        break;
    case States::menu:
        break;
    case States::start:
        break;
    case States::playground:
        break;
    case States::end:
        break;
    case States::goals:
        break;
    case States::credits:
        break;
    }
*/
