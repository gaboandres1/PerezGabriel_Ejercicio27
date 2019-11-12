graficas.png : script.py Implicit3.dat Implicit2.dat Implicit1.dat Euler3.dat Euler2.dat Euler1.dat
	python script.py

Implicit3.dat : Implicit.x
	./Implicit.x 2 > Implicit3.dat
Implicit2.dat : Implicit.x
	./Implicit.x 1 > Implicit2.dat
Implicit1.dat : Implicit.x
	./Implicit.x 0 > Implicit1.dat
Implicit.x : Implicit.cpp
	c++ Implicit.cpp -o Implicit.x

Euler3.dat : Euler.x
	./Euler.x 2 > Euler3.dat
Euler2.dat : Euler.x
	./Euler.x 1 > Euler2.dat
Euler1.dat : Euler.x
	./Euler.x 0 > Euler1.dat
Euler.x : Euler.cpp
	c++ Euler.cpp -o Euler.x
	
clean :
	rm -r *.x *.dat