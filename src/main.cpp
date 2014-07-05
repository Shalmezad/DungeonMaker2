#include <iostream>

using namespace std;

const int MAP_WIDTH = 10;
const int MAP_HEIGHT = 10;

void printMap(int(&a)[MAP_WIDTH][MAP_HEIGHT]);

int main()
{
	int map[MAP_WIDTH][MAP_HEIGHT];
	for(int i=0; i<MAP_WIDTH; i++)
	{
		for(int j=0; j<MAP_HEIGHT; j++)
		{
			map[i][j] = 0;
		}
	}

	cout<<"________________PRINTING MAP________________"<<endl;
	printMap(map);

	return 0;
}

void printMap(int (&a)[MAP_WIDTH][MAP_HEIGHT])
{
	for(int j=0; j<MAP_HEIGHT; j++)
	{
		for(int i=0; i<MAP_WIDTH; i++)
		{
			cout<<a[i][j];
		}
		cout<<endl;
	}
}
