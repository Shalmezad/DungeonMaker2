#include <iostream>
#include "map.h"
#include "directionalmap.h"

using namespace std;


int main()
{
	//Map map(10,10);
	//map.print();
	DirectionalMap dmap(10,10);
	dmap.generate();
	dmap.print();

	return 0;
}

