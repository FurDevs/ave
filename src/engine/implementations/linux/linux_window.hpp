#pragma once

#include "../../window/window.hpp"
#include "linux_window.hpp"

#if __unix__ || __APPLE__
namespace Ave::Engine::Linux
{
    class Window : Ave::Engine::Window{

        void add_line() override;

        void add_line(std::string line) override;

        void add_line(std::string line, int x_pos) override;
    };
};


#endif