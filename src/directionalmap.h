#ifndef _DIRECTIONAL_MAP_H_
#define _DIRECTIONAL_MAP_H_

#include "map.h"
class DirectionalMap: public Map
{
	protected:
		int _length;
		int _roughness;
		int _windyness;
	public:
		//DirectionalMap(int, int);	//width x height, uses defaults for length, roughness, windyness.
		DirectionalMap(
										int, //Width
										int, //Height
										int = 20, //length
										int = 50, //roughness
										int	= 50 //windyness
		);
		void generate(void);
};

#endif
