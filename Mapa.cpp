#include "stdafxs.h"
#include "conio.h"
#include "iostream"

#define FIL 20
#define COL 29

using namespace system;
using namespace std;

int mapa[FIL][COL];



int main(array<System::String^>^args){
    Console::SetWindowSize(COL,FIL);
    Console::CursorVisible = false;
    Console::Clear();
    copia1();
    imprimir_mapa();
    _getch();
    return 0;
}
void copia1(){
    int matriz1[FIL][COL]={
        {1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1},
{0,0,0,0,0,0,0,0,0,1,1,1,1,1,0,0,0,0,0,0,0,0,0,0,0,1},
{1,1,0,1,1,1,1,1,0,1,1,1,1,1,0,1,1,1,1,1,0,1,1,1,0,1},
{1,1,0,1,1,1,1,1,0,1,1,1,1,1,0,1,1,1,1,1,0,1,1,1,0,1},
{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1},
{1,1,0,1,1,0,1,1,1,1,1,1,1,1,1,1,1,0,1,1,0,1,1,1,0,1},
{0,0,0,1,1,0,0,0,0,0,1,1,1,0,0,0,0,0,1,1,0,0,0,0,0,1},
{1,1,0,1,1,1,1,1,1,0,1,1,1,0,1,1,1,1,1,1,0,1,1,1,0,1},
{1,1,0,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,0,1,1,1,0,1},
{0,0,0,1,1,0,1,1,1,1,1,1,1,1,1,1,1,0,1,1,0,0,0,0,0,1},
{1,1,0,1,1,0,1,1,1,1,1,1,1,1,1,1,1,0,1,1,0,1,1,1,0,1},
{1,1,0,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,0,1,1,1,0,1},
{1,1,0,1,1,1,1,1,1,0,1,1,1,0,1,1,1,1,1,1,0,1,1,1,0,1},
{0,0,0,1,1,0,0,0,0,0,1,1,1,0,0,0,0,0,1,1,0,0,0,0,0,1},
{1,1,0,1,1,0,1,1,1,1,1,1,1,1,1,1,1,0,1,1,0,1,1,1,0,1},
{1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,1,0,1},
{1,1,0,1,1,1,1,0,1,1,1,1,1,1,1,1,0,1,1,1,0,1,1,1,0,1},
{1,1,0,1,1,1,1,0,0,0,0,0,0,0,0,0,0,1,1,1,0,1,1,1,0,1},
{0,0,0,0,0,0,0,0,1,1,1,1,1,1,1,1,0,0,0,0,0,0,0,0,0,1},
{1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1}
    };
    for (int x=0; f<FIL;f++){
        for (int z =0;z<COL; c++){
            mapa[f][c];
        }
    }

}
void imprimir_mapa(){
    for (int x=0; f<FIL;f++){
        for (int z =0;z<COL; c++){
            Console::SetCursorPosition(col,fil);
            if (mapa[f][c]==0){
                Console::ForgroundColor = ConsoleColor::White;
            }
            if (mapa[f][c]==1){
                Console::ForgroundColor = ConsoleColor::Black;
            }
        }
    }
}
