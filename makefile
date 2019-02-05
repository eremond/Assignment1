all:	exe

exe:	main.o Weapon.o WeaponFactory.o CrazyRandomSword.o SimpleHammer.o CommonSpear.o CommonSword.o SuperStrap.o
	g++  -o Fight.x main.o Weapon.o WeaponFactory.o CrazyRandomSword.o SimpleHammer.o CommonSpear.o CommonSword.o SuperStrap.o

main.o:	main.cpp
	g++  -c main.cpp

Weapon.o: Weapon.cpp Weapon.h
	g++  -c Weapon.cpp

WeaponFactory.o: WeaponFactory.cpp WeaponFactory.h
	g++  -c WeaponFactory.cpp

CrazyRandomSword.o: CrazyRandomSword.cpp CrazyRandomSword.h
		g++  -c CrazyRandomSword.cpp

SimpleHammer.o: SimpleHammer.cpp SimpleHammer.h
	g++  -c SimpleHammer.cpp

CommonSpear.o: CommonSpear.cpp CommonSpear.h
	g++  -c CommonSpear.cpp

CommonSword.o: CommonSword.cpp CommonSword.h
	g++  -c CommonSword.cpp

SuperStrap.o: SuperStrap.cpp SuperStrap.h
	g++  -c SuperStrap.cpp

clean:
		rm *.o *.x
