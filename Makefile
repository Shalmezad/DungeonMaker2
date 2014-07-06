
build:
	make prep
	g++ src/*.cpp -o bin/DungeonMaker2
prep:
	mkdir -p bin
clean:
	rm -rf bin/
run:
	bin/DungeonMaker2
