all: clean test

appTests: tests.cpp student.hpp
	# add custom source files here to be compiled
	g++ -Wall --std=c++17 ./AbstractDataType/calculator.cpp tests.cpp catch_amalgamated.cpp -o appTests

test: appTests
	# executes all tests
	./appTests

clean:
	rm -f appTests
