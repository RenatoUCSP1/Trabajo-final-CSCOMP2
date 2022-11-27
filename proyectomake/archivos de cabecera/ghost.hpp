#pragma once
class fantasma{
int fdir;
int _x, _y;
int col;
public:
fantasma(int x , int y , int color);
void dibujar_fantasma() const;
void borrar_fantasma() const;
void mover_fantasma();
void choque_pacman();
};