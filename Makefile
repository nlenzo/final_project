ALL: hanoi_solver

SOURCES := ${wildcard *.cpp}
HEADERS := ${wildcard *.hpp}

OBJECTS := ${SOURCES:.cpp=.o}

%.o : %.cpp ${HEADERS}
	g++ -c $<

hanoi_solver: main.o hanoi_solver.o 
	g++ -o $@ main.o hanoi_solver.o

# Compiles the unit test module
unit_test: unit_test.o hanoi_solver.o 
	g++ -o $@ unit_test.o hanoi_solver.o

# Run the test
testing: unit_test
	./unit_test > /dev/null
	@if [ $$? -eq 0 ]; then echo "tests passed"; fi
clean: 
	rm ${OBJECTS}