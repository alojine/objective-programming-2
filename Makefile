run: Source.o functions.o Studentas.o
	g++ -o run Source.o -O1

functions.o: functions.cpp
	g++ -c functions.cpp

Source.o: Source.cpp
	g++ -c Source.cpp

Studentas.o: Studentas.cpp
	g++ -c Studentas.cpp

clean: 
	del *.o run.exe