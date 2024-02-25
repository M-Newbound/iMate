
output: main.o
	g++ main.o -o iMateOut

main.o: ./src/main.cpp
	g++ -c ./src/main.cpp


clean:
	rm *.o iMateOut

