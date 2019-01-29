#pragma once

#include "../window.hpp"
#include "./window.hpp"

#if __unix__ || __APPLE__
namespace Engine::Linux
{
    class Window : Engine::Window{

        void add_line() override;

        void add_line(std::string line) override;

        void add_line(std::string line, int x_pos) override;
    };
};

#endif