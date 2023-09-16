SDL_FLAGS=-lSDL3 -Lvendor/SDL/build/lib/ -Ivendor/SDL/include

all:
	g++ $(SDL_FLAGS) -Iinclude src/*.cpp commands/main.cpp
