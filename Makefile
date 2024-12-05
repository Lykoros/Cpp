++ = g++ -Wall -Wextra -std=c++17

allNix: finalNix clean

all: final clean

finalNix: main.o utils.o enum.o error.o files.o namespace.o structure.o object.o method.o
	@echo "linking all temporary files"
	@$(++) *.o -o cppProg 

final: main.o utils.o enum.o error.o files.o namespace.o structure.o object.o method.o
	@echo "linking all temporary files"
	@$(++) *.o -o ./bin/final 

main.o: ./src/main.cpp
	@echo "compiling main file"
	@$(++) -c ./src/main.cpp

utils.o: ./src/utils.cpp
	@echo "compiling utils file"
	@$(++) -c ./src/utils.cpp

enum.o: ./src/enum.cpp
	@echo "compiling enum file"
	@$(++) -c ./src/enum.cpp

error.o: ./src/error.cpp
	@echo "compiling error file"
	@$(++) -c ./src/error.cpp

files.o: ./src/files.cpp
	@echo "compiling files file"
	@$(++) -c ./src/files.cpp

namespace.o: ./src/namespace.cpp
	@echo "compiling namespaces file"
	@$(++) -c ./src/namespace.cpp

structure.o: ./src/structure.cpp
	@echo "compiling structure file"
	@$(++) -c ./src/structure.cpp

object.o: ./src/object.cpp
	@echo "compiling object file"
	@$(++) -c ./src/object.cpp

method.o : ./src/method.cpp
	@echo "compiling Method file"
	@$(++) -c ./src/method.cpp

clean:
	@echo "deleting temporary files"
	@rm *.o
