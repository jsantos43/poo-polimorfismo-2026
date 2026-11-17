
CXX = g++

CXXFLAGS = -I SDL2/include
LDFLAGS = -L SDL2/lib -lSDL2

SRC = main.cpp

TARGET = programa.exe

all:
	$(CXX) $(SRC) $(CXXFLAGS) $(LDFLAGS) -o $(TARGET)
	powershell -NoProfile -Command "Copy-Item SDL2/bin/SDL2.dll . -Force"

run: all
	./$(TARGET)

clean:
	rm -f $(TARGET)
