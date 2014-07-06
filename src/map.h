
class Map
{
	private:
		int _width;
		int _height;
		int **_data;
		
	
	public:
		Map(int, int);
		~Map();
		void print();
		void reset(int);


};
