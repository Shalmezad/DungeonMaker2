#include <iostream>
#include "map.h"
#include "directionalmap.h"

using namespace std;


int main()
{
	//Map map(10,10);
	//map.print();
	DirectionalMap dmap(50,50, 40, 70, 70);
	dmap.generate();
	dmap.print();

	return 0;
}

