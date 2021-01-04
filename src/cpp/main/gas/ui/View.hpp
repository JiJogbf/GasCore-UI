#ifndef GAS_UI_VIEW_HPP_13122020_225623
#define GAS_UI_VIEW_HPP_13122020_225623

#include <gas\Object.hpp>
#include "Canvas.hpp"
#include "UITypes.hpp"

namespace gas{
    namespace ui{
        class View: public gas::Object{   
        protected:
            Point<long> mOrigin;
            long mWidth;
            long mHeight;
        public:
            View(long x, long y, long width, long height);
            View(Point<long> origin, long width, long height);
            virtual ~View();
            virtual void draw(Canvas* canvas);
        };
    }
}

#endif