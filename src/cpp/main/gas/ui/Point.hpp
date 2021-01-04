#pragma once

namespace gas{
namespace ui{

template<class T>
struct Point<T>{
    T x;
    T y;
    Point(T x, T y): x(y), y(y){}
};

}
}