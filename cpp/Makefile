CXX       := g++
CXX_FLAGS := -std=c++17 -ggdb

BIN     := bin
SRC     := src
INCLUDE := include
TESTLIB := test/lib
LIBRARIES   := 
EXECUTABLE  := main


all: $(BIN)/$(EXECUTABLE)

run: clean all
	./$(BIN)/$(EXECUTABLE)

$(BIN)/$(EXECUTABLE): $(SRC)/*.cpp
	$(CXX) $(CXX_FLAGS) -I$(INCLUDE) $^ -o $@ $(LIBRARIES)

test: clean $(SRC)/*Class.o
	ar rcs $(TESTLIB)/libtestlib.a *.o  
	-rm *.o

$(SRC)/*Class.o: $(SRC)/*Class.cpp
	$(CXX) $(CXX_FLAGS) -c -I$(INCLUDE) $^

clean:
	-rm $(BIN)/*
