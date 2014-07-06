#include "map.h"
#include <iostream>

Map::Map(int width, int height)
{
	//Copy the data to our fields
	_width = width;
	_height = height;
	//Now to set up the 2D structure:
	_data = new int*[_width];
	for(int i=0; i<_width; i++)
	{
		_data[i] = new int[_height];
	}	
	//And init the map:
	reset(0);
}

Map::~Map()
{
	for(int i=0; i<_width; i++)
	{
		delete[] _data[i];
	}
	delete[] _data;
}

void Map::reset(int fill)
{
	for(int i=0; i<_width; i++)
	{
		for(int j=0; j<_height; j++)
		{
			_data[i][j] = fill;
		}
	}
}

void Map::print()
{
	for(int j=0; j<_width; j++)
	{
		for(int i=0; i<_height; i++)
		{
			std::cout<<_data[i][j];
		}
		std::cout<<std::endl;
	}
}

bool Map::inbounds(int x, int y)
{
	return x >= 0 && x < _width && y >= 0 && y < _height;
}
