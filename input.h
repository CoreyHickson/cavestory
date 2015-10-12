#pragma once

#include "stdafx.h"

#ifndef INPUT_H
#define INPUT_H

class input {
public:
private:
    std::map<SDL_Scancode, bool> _heldKeys;
    std::map<SDL_Scancode, bool> _pressedKeys;
    std::map<SDL_Scancode, bool> _releasedKeys;
};

#endif