run: main.o Bureaucrat.o Avalanche.o Referee.o Player.o Toolbox.o Tournament.o Crescendo.o FistfullODollars.o PaperDoll.o RandomComputer.o
	g++ main.o Bureaucrat.o Avalanche.o Referee.o Player.o Toolbox.o Tournament.o Crescendo.o FistfullODollars.o PaperDoll.o RandomComputer.o -o run

main.o: main.cpp
	g++ -c main.cpp

Avalanche.o: Avalanche.cpp Avalanche.h
	g++ -c Avalanche.cpp 

Bureaucrat.o: Bureaucrat.cpp Bureaucrat.h 
	g++ -c Bureaucrat.cpp 

Player.o: Player.cpp Player.h 
	g++ -c Player.cpp 

Referee.o: Referee.cpp Referee.h
	g++ -c Referee.cpp

Toolbox.o: Toolbox.cpp Toolbox.h
	g++ -c Toolbox.cpp

Tournament.o: Tournament.cpp Tournament.h 
	g++ -c Tournament.cpp 

Crescendo.o: Crescendo.cpp Crescendo.h
	g++ -c Crescendo.cpp

FistfullODollars.o: FistfullODollars.cpp FistfullODollars.h
	g++ -c FistfullODollars.cpp

PaperDoll.o: PaperDoll.cpp PaperDoll.h
	g++ -c PaperDoll.cpp

RandomComputer.o: RandomComputer.cpp RandomComputer.h
	g++ -c RandomComputer.cpp 

clean:
	rm *.o 