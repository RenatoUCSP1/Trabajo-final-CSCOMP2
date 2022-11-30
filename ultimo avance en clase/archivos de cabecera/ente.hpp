#ifndef ENTE_HPP
#define ENTE_HPP
class Ente{
    public:
    unsigned char movimiento; //= direction
    virtual void draw()= 0;
    virtual void position(int _x, int _y);
private:
    int _x;
    int _y;
};
#endif