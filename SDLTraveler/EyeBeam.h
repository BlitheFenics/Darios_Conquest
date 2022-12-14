#pragma once
#include "SDL.h"
#include "GameObject.h"

class EyeBeam : public GameObject
{

private:
	
	SDL_Rect bSrc = {0, 160, 1024, 32};
	SDL_Rect bDst = {0,0,1024,32};

	SDL_RendererFlip flip = SDL_FLIP_NONE;

	int chargeCount = 0;

	int waveCount = 0;

	int flicker = 0;

	int loopCount = 0;

	int status = 0;

	int iteration;

public:
	EyeBeam(int, int, SDL_RendererFlip);

	int Update(int, int, SDL_RendererFlip);

	SDL_Rect GeteSrc()
	{
		return rSrc;
	}
	SDL_Rect GeteDst()
	{
		return rDst;
	}

	SDL_Rect GetbSrc()
	{
		return bSrc;
	}
	SDL_Rect GetbDst()
	{
		return bDst;
	}

	SDL_RendererFlip GetFlip()
	{
		return flip;
	}

	int GetStatus()
	{
		return status;
	}

	~EyeBeam();
};

