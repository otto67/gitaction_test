CXX       := g++
CXX_FLAGS := -std=c++17

LIB := ./lib
INCLUDE := ../include


test:
	$(CXX) $(CXX_FLAGS) -L$(LIB) -I$(INCLUDE) main.cpp -ltestlib -o tester

clean:
	-rm *.exe
