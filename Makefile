ALL: hanoi_solver

SOURCES := ${wildcard *.cpp}
HEADERS := ${wildcard *.hpp}

FLAGS := -Wall -Wextra -Wpedantic -Wshadow -g
DEBUG ?= FALSE
ifeq (${DEBUG}, TRUE)
	FLAGS += -g
else
	FLAGS += -DNDEBUG -O3
endif 


OBJECTS := ${SOURCES:.cpp=.o}

%.o : %.cpp ${HEADERS}
	g++ ${FLAGS} -c $<

hanoi_solver: main.o hanoi_solver.o 
	g++ ${FLAGS} -o $@ main.o hanoi_solver.o

# Compiles the unit test module
unit_test: unit_test.o hanoi_solver.o 
	g++ ${FLAGS} -o $@ unit_test.o hanoi_solver.o

# Run the test
testing: unit_test
	./unit_test > /dev/null
	@if [ $$? -eq 0 ]; then echo "tests passed"; fi
clean: 
	rm ${OBJECTS}