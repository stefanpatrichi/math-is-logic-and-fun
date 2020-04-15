all: pi run clear

pi: src/pi_approx.cpp
	g++ -o pi src/pi_approx.cpp

run: pi.exe
	pi

clear:
	del pi.exe
