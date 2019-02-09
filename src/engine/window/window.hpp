#pragma once

#include <string>
#include "../container/container.hpp"


namespace Ave::Engine
{
    class Window : Container
    {

    private:
        std::string title;
        Ave::Engine::Container *header;
        Ave::Engine::Container *footer;


    public:

    };
};

