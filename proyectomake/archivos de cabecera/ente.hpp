#include <SFML/Graphics.hpp>
class ente{
    public:
    unsigned char movimiento; //= direction
    virtual void draw()= 0;
    virtual void position(int _x, int _y);
private:
    int _x;
    int _y;
};