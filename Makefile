all: compile run

run:
	./a.out

compile:
	g++ -pedantic -Wall mktasklist.cpp

clean:
	rm a.out
