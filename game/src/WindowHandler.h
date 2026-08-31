#pragma once
#include<SDL3/SDL.h>

class WindowHandler {
private:
	int m_iResolution_x;
	int m_iResolution_y;
	SDL_Window* m_pWindow;
	bool CreateWindow();
public:
	WindowHandler();
	~WindowHandler();
protected:

};