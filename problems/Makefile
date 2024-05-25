CXX = g++

CXXFLAGS = -Wall -Wextra -std=c++17

SRC_FILE = $(src)
OBJ_FILE = $(SRC_FILE:.cpp=.o)
TARGET = program

all: $(TARGET)

$(TARGET): $(OBJ_FILE)
	$(CXX) $(CXXFLAGS) -o $(TARGET) $(OBJ_FILE)

%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

clean:
	rm -f $(OBJ_FILE) $(TARGET)

run: all
	./$(TARGET)

.PHONY: all clean run

#make run src=800/helpful_maths.cpp
