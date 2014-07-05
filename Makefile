
build:
	make prep
	g++ src/main.cpp -o bin/DungeonMaker2
prep:
	mkdir -p bin
clean:
	rm -rf bin/
run:
	bin/DungeonMaker2
