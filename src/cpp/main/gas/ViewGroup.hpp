#ifndef GAS_UI_VIEW_GROUP_HPP
#define GAS_UI_VIEW_GROUP_HPP

#include <list>

#include "View.hpp"

namespace gas{
    namespace ui{
        class ViewGroup: public View{
        protected:
            std::list<View*> mItems;
        public:
            ViewGroup();
            ViewGroup& add(View* view);
            ViewGroup& remove(View* view);
            int childCount() const;
        };
    }
}

#endif 