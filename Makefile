build:
	g++ -Wall -std=c++17 src/*.cpp -o gameengine -lSDL2

run:
	./gameengine

clean:
	rm gameengine