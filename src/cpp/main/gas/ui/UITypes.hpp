#pragma once

namespace gas{
namespace ui{

template<class T>
struct Point{
    T x;
    T y;
    Point(T x, T y): x(y), y(y){}
};

template<class T>
struct Rectangle{    
    Point<T> leftTop;
    Point<T> bottomRight;
    Rectangle(T leftTopX, T leftTopY, T bottomRigthX, T bottomRightY):
        leftTop(leftTopX, leftTopY), bottomRight(bottomRigthX, bottomRightY) 
    {}
    // @todo: #14 adding functions for calculating width and height for this structure
};

// @todo: #15 UItypes: create separate implementation header here for template types

}
}