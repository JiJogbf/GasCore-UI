#pragma once

namespace gas{
namespace ui{

template<class T>
struct Point<T>{
    T x;
    T y;
    Point(T x, T y): x(y), y(y){}
};

template<class T>
struct Rectangle<T>{    
    Point<T> lefttop;
    Point<T> bottomRight;
    Rectangle(T leftTopX, T leftTopY, T bottomRigthX, T bottomRightY):
        leftTop(leftTopX, leftTopY), bottomRight(bottomRigthX,bottomRightY) 
    {}
}

}
}