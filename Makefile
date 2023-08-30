
includes = -I/usr/local/include -I. -I./src
links = -L/usr/local/lib -lsfml-system -lsfml-window -lsfml-graphics -lsfml-network -lsfml-audio

flags = -std=c++17 -Wall -g

# OBJECTS
obj/Camera.o: src/Camera.hpp
	g++ $(flags) $(includes) -o $@ -c $<

obj/Tile.o: src/Tile.hpp
	g++ $(flags) $(includes) -o $@ -c $<

obj/Chunk.o: src/Chunk.hpp
	g++ $(flags) $(includes) -o $@ -c $<

obj/World.o: src/World.hpp
	g++ $(flags) $(includes) -o $@ -c $<

obj/utils.o: src/utils.hpp
	g++ $(flags) $(includes) -o $@ -c $<

obj/main.o: src/main.cpp
	g++ $(flags) $(includes) -o $@ -c $<

# EXECUTABLES
program: obj/utils.o obj/main.o
	g++ $(flags) $(links) $^ -o bin/$@

# ACTIONS
run: program
	./bin/program

clean:
	rm -rf obj/* bin/*
