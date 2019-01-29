#pragma once

#include <string>
#include "./container/container.hpp"

namespace Ave::Engine
{
    class Window
    {

    private:
        std::string title;
        Ave::Engine::Container *header;
        Ave::Engine::Container *footer;


    public:
        virtual void add_line()
        {
            throw "not implemented";
        };

        virtual void add_line(std::string line)
        {
            throw "not implemented";
        };

        virtual void add_line(std::string line, int x_pos)
        {
            throw "not implemented";
        };

    };
};

