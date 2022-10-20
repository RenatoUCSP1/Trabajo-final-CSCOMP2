#include "ente,h"
class jugador : public ente{
    public:
    jugador(){
        x = 30, y = 30;
        mx = 0, my = 0;

}
void mover (Graphics^g){
    if(x+mx >= 0 && x+ ancho+ mx< g->VisibleCipsBounds.Width)
     if(y+my >= 0 && y+ alto+ my< g->VisibleCipsBounds.Height)
}
void mostrar(Graphics^g){
    g->FillRectangle(Brushes::Green, Area() );
}
};

