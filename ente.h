#include"dependencias_.h"
#pragma once
class ente{
protected:
int x , y;
int mx, my;
int ancho, alto;
public:
ente(){
    x = y = 0;
    mx = my = 0;
    ancho = alto = 0; 
}
    Rectangle Area(){
        return Rectangle (x,y,ancho,alto);
    }
    Rectangle AreaCont(){
        return Rectangle (x+mx,y+my,ancho. alto)
    }
   virtual void mover(Graphics^ g){
        x = x+mx;
        y = y + my;
    }
    
    virtual void mostrar(Graphics^ g){
        g->FillRectangle(Brushes::Black , x, y , ancho , alto)
    }

}