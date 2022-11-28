all: compile link
compile:

	g++ -c main.cpp colision.cpp drawtext.cpp ghost.cpp map.cpp pacman.cpp sustitucion.cpp -I"C:\Users\Renato\Documents\libraries\SFML-2.5.1\include" -DSFML_STATIC 

link:
	g++ main.o -o main -L"C:\Users\Renato\Documents\libraries\SFML-2.5.1\lib" -lsfml-graphics-s -lsfml-window-s -lsfml-system-s -lopengl32 -lfreetype -lwinmm -lgdi32 -mwindows -lsfml-main

clean:
	del /s *.o*
	del /s *.exe*