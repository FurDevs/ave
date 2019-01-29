#pragma once

#include <vector>
#include "../window.hpp"

namespace Engine
{

    class Container : Window
    {

    public:
        void add_clilden(Container* cild);

    private:
        std::vector<Container*> children;
    };


};