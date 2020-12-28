#ifndef GAS_UI_VIEW_GROUP_HPP
#define GAS_UI_VIEW_GROUP_HPP

#include <list>
#include <memory>

#include <gas\Ptr.hpp>

#include "View.hpp"

namespace gas{
    namespace ui{
        class ViewGroup: public View{
        protected:
            // @todo: #13 replace STL with Ptr when it will be stable
            std::list<std::shared_ptr<View>> mItems;
        public:
            ViewGroup();
            ~ViewGroup() override;
            ViewGroup& add(View* view);
            ViewGroup& remove(View* view);
            int childCount() const;
            void draw() override;
        };
    }
}

#endif 