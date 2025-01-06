++ = g++ -Wall -Wextra -std=c++17

allNix: finalNix clean

all: final clean

finalNix: main.o
	@echo "linking all temporary files"
	@$(++) *.o -o TFE

final: main.o
	@echo "linking all temporary files"
	@$(++) *.o -o ./bin/final 

main.o: ./src/main.cpp
	@echo "compiling main file"
	@$(++) -c ./src/main.cpp

clean:
	@echo "deleting temporary files"
	@rm *.o
