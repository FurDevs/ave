#pragma once

#include <vector>
#include <string>

namespace Ave::Engine
{
   class Container
    {
    private:
        int x_pos, y_pos;

    public:
        Container();
        void add_child(Container *child);
        void add_child(Container *child, int x_pos, int y_pos);
        virtual void render(){
            throw "not implemented";
        };
    private:
        std::vector<std::string> _current_buffer;
        std::vector<Container*> _children;
    };



};
