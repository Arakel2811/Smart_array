TARGET    := run.exe
HEADERS   := $(wildcard src/*.h)
SOURCES   := $(wildcard src/*.cpp)
OBJECTS   := $(patsubst src/%.cpp, obj/%.o, $(SOURCES))
CC        := g++
CPPSTD    := -std=c++11

$(TARGET) : $(OBJECTS) $(HEADERS)
	@mkdir -p bin
	@$(CC) $(CPPSTD) $^ -o bin/$@

obj/%.o : src/%.cpp
	@mkdir -p obj
	@$(CC) $(CPPSTD) -c $< -o $@

.PHONY: clean
clean:
	@rm -rf obj/
	@rm -rf bin/
	@rm -rf docs/html docs/latex
