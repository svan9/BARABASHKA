EXE = bin/app.exe
MAINFILE = main.cpp

ifeq ($(wildcard bin),)
$(shell mkdir bin)
endif

all: ./$(EXE)

run: all 
	./$(EXE)

$(EXE): $(MAINFILE)
	g++ $^ -o $@