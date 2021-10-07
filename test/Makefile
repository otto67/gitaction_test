CXX       := g++
CXX_FLAGS := -std=c++17

LIB := ./lib
INCLUDE := ../include

# -l testlib does not work 

test:
	$(CXX) $(CXX_FLAGS) -L$(LIB) -I$(INCLUDE) *.o main.cpp -o tester

clean:
	-rm *.exe *.o
	