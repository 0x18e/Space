#include "Engine.h"




bool SpaceEngine::Init(){
	//Set all needed flags
	this->m_Flags = SDL_INIT_AUDIO | SDL_INIT_VIDEO; // audio and video for now
	bool m_Success = true;
	if (!SDL_Init(this->m_Flags)) {
		SDL_Log("Could not init SDL %s", SDL_GetError());
		m_Success = false;
	}
	

	return m_Success;
}
SpaceEngine::SpaceEngine() {
	this->Init();
}
SpaceEngine::~SpaceEngine() {
	SDL_Log("Calling Engine destructor");

}
