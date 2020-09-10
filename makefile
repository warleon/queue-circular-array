main:
	g++ -o queue main.cpp

clear:
	rm queue

run:
	./queue

redo:
	rm queue
	g++ -o queue main.cpp
	./queue

