#pragma once
#include<SDL3/SDL.h>

class SpaceEngine {

public:
	SpaceEngine();
	~SpaceEngine();
	bool Init();

private:
	SDL_WindowFlags m_Flags;
	// Entity member list here

};