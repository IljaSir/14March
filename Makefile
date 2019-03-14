all: marchoff

marchoff: main.cpp
	g++ -std=c++11 -o marchoff main.cpp
