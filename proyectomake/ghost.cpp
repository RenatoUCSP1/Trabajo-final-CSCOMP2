#include "archivos de cabecera/ghost.hpp"
#include <windows.h>
#include <iostream>
#include <conio.h>
#include <stdio.h>
#include <SFML/Graphics.hpp>
fantasma::fantasma(int x , int y, int color){
_x = x;
_y = y;
col = color;
fdir = rand()%4;
}
void fantasma::dibujar_fantasma() const{
 sf::CircleShape circulo(CELL_SIZE/2);
    circulo.setFillColor(sf::Color(255,255,0));
    circulo.setPosition(position.x, position.y);
    i_window.draw(circulo);
}
void fantasma::borrar_fantasma() const{
gotoxy(_x,_y); printf(” “);
}
void fantasma::choque_pacman(){
if(y == _y && x == _x || (fdir == 0 && dir == 1 || fdir == 1 && dir == 0
||fdir == 2 && dir == 3 || fdir == 3 && dir == 2 )&&(_y == anteriorpy && _x == anteriorpx)){
x = 39;
y = 22;
dir = 4;
vidas–;
}
}
void fantasma::mover_fantasma(){
borrar_fantasma();
choque_pacman();
int bolx=_x,boly=_y;
if(mapa[_y][_x] == ‘|’){
fdir = rand()%4;
}
if(mapa[_y][_x] == ‘*’){
fdir = 0;
}
if(fdir == 2){
if(mapa[_y][_x+1] != ‘X’ && mapa[_y][_x+1] != ‘A’ && mapa[_y][_x+1] != ‘Y’ &&
mapa[_y][_x+1] != ‘B’ && mapa[_y][_x+1] != ‘C’ && mapa[_y][_x+1] != ‘D’) _x++;
else fdir = rand()%4;
}
if(fdir == 3){
if(mapa[_y][_x-1] != ‘X’ && mapa[_y][_x-1] != ‘A’ && mapa[_y][_x-1] != ‘Y’ &&
mapa[_y][_x-1] != ‘B’ && mapa[_y][_x-1] != ‘C’ && mapa[_y][_x-1] != ‘D’) _x–;
else fdir = rand()%4;
}
if(fdir == 0){
if(mapa[_y-1][_x] != ‘X’ && mapa[_y-1][_x] != ‘A’ && mapa[_y-1][_x] != ‘Y’ &&
mapa[_y-1][_x] != ‘B’ && mapa[_y-1][_x] != ‘C’ && mapa[_y-1][_x] != ‘D’) _y–;
else fdir = rand()%4;
}
if(fdir == 1){
if(mapa[_y+1][_x] != ‘X’ && mapa[_y+1][_x] != ‘A’ && mapa[_y+1][_x] != ‘Y’ &&
mapa[_y+1][_x] != ‘B’ && mapa[_y+1][_x] != ‘C’ && mapa[_y+1][_x] != ‘D’) _y++;
else fdir = rand()%4;
}
if(mapa[boly][bolx] == ‘_’) {setCColor(color[1]); gotoxy(bolx,boly);printf(“%c”,250);}
// rutina atajo
if(_x <= 17) _x = 61;
else if(_x >= 62) _x = 18;
dibujar_fantasma();
}
void marcador(){
gotoxy(5,4); printf(“PUNTOS”);
gotoxy(5,6); printf(” “);
setCColor(color[6]);
gotoxy(5,6); printf(“%ld”,puntos);
setCColor(color[1]);
gotoxy(5,25); printf(“VIDAS”);
for(int i = 0 ; i <= vidas ; i++){
gotoxy(5,i+27);printf(” “);
}
for(int i = 0 ; i < vidas ; i++){
gotoxy(5,i+27);printf(“%c”,2);
}
setCColor(color[2]);
gotoxy(70,27);printf(“%c”,169);
}