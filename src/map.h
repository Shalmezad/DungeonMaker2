#ifndef _MAP_H_
#define _MAP_H_

class Map
{
	protected:
		int _width;
		int _height;
		int **_data;
		
	
	public:
		Map(int, int);
		~Map();
		void print(bool useInt = false);
		void reset(int);
		//TODO: Make this class and this method abstract
		void generate(void);
		bool inbounds(int, int);

};

#endif
