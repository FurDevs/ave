#pragma once

#include <string>
#include <stdexcept>
#include "./container/container.hpp"

namespace Engine
{
    class Window
    {
    private:
        std::string title;
        Container header;
        Container footer;


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



