build:
	g++ -Wall -std=c++17 src/*.cpp -I"./libs" -o gameengine -lSDL2 -lSDL2_image -lSDL2_ttf -lSDL2_mixer -llua5.4

run:
	./gameengine

clean:
	rm gameengine