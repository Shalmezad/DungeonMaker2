#include "directionalmap.h"

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

DirectionalMap::DirectionalMap(int width, int height, int length, int roughness, int windyness):Map(width, height)
{
	//Map::Map(width, height);
	srand(time(NULL));
	_length = length;
	_roughness = roughness;
	_windyness = windyness;
}

void DirectionalMap::generate()
{
	//Method from:
	//http://www.roguebasin.com/index.php?title=Basic_directional_dungeon_generation
	//we start with all walls:
	reset(1);
	//Pick a starting x,y:
	int currentX = _width / 2;
	int currentY = 1;
	//and a starting width
	//recommended is anywhere from 3 to width:
	int currentW = (rand() % (_width/2 - 4)) + 3;
	//carve out the start:
	for(int i=0; i<_length; i++)
	{
		carve(currentX, currentY, currentW, 1);
		currentY += 1;
		if(rand() % 100 < _roughness)
		{
			int modifier = rand() % 2 + 1;
			if(rand() % 2 == 0)
				modifier *= -1;
			currentW += modifier;
			if(currentW < 3)
			{
				currentW = 3;
			}
			if(currentX + currentW >= _width)
			{
				currentX = _width - currentW - 1;
			}
		}
		if(rand() % 100 < _windyness)
		{
			//currentX += (rand() % 5) - 1;
			int modifier = rand() % 2 + 1;
			if(rand() % 2 == 0)
				modifier *= -1;
			currentX += modifier;

			if(currentX <0)
			{
				currentX = 1;
			}
			if(currentX + currentW >= _width)
			{
				currentX = _width - currentW - 1;
			}
		}
	}
}

void DirectionalMap::carve(int x, int y, int width, int height)
{
	for(int i=x; i<x+width; i++)
	{
		for(int j=y; j<y+height; j++)
		{
			if(inbounds(i,j))
			{
				_data[i][j] = 0;
			}
		}
	}
}

