
build:
	make prep
	g++ main.cpp -o bin/DungeonMaker2
prep:
	mkdir -p bin
clean:
	rm -rf bin/
