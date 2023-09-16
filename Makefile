SDL_FLAGS=-lSDL3 -Lvendor/SDL/build/lib/ -Ivendor/SDL/include

all:
	mkdir -p build
	g++ $(SDL_FLAGS) -Iinclude src/*.cpp commands/main.cpp -o build/wim-nes
