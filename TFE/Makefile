++ = g++ -Wall -Wextra -std=c++17

allNix: finalNix clean

all: final clean

finalNix: main.o map.o mapUtils.o
	@echo "linking all temporary files"
	@$(++) *.o -o TFE

final: main.o map.o mapUtils.o
	@echo "linking all temporary files"
	@$(++) *.o -o ./bin/final 

main.o: ./src/main.cpp
	@echo "compiling main file"
	@$(++) -c ./src/main.cpp

map.o: ./src/map.cpp
	@echo "compiling map file"
	@$(++) -c ./src/map.cpp

mapUtils.o: ./src/mapUtils.cpp
	@echo "compiling mapUtils file"
	@$(++) -c ./src/mapUtils.cpp

clean:
	@echo "deleting temporary files"
	@rm *.o
