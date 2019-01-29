#pragma once

#include <vector>

namespace Ave::Engine
{
    class Container
    {

    public:
        Container();

        void add_clilden(Container* cild);

    private:
        std::vector<Container*> children;
    };

};
