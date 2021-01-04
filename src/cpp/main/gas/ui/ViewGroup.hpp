#ifndef GAS_UI_VIEW_GROUP_HPP
#define GAS_UI_VIEW_GROUP_HPP

#include <list>
#include <memory>

#include <gas\Ptr.hpp>

#include "View.hpp"
#include "Canvas.hpp"

namespace gas{
    namespace ui{
        class ViewGroup: public View{
        protected:
            // @todo: #13 replace STL with Ptr when it will be stable
            std::list<std::shared_ptr<View>> mItems;
        public:
            ViewGroup(long x = 0, long y = 0, long width = 0, long height = 0);
            ~ViewGroup() override;
            ViewGroup& add(View* view);
            ViewGroup& remove(View* view);
            int childCount() const;
            void draw(Canvas* canvas) override;
        };
    }
}

#endif 
