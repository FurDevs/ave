#include "./container.hpp"
#include "container.hpp"


void Ave::Engine::Container::add_child(Engine::Container *child)
{
    this->children.push_back(child);
}

Ave::Engine::Container::Container()
{}


void Ave::Engine::Container::add_child(Ave::Engine::Container *child, int x_pos, int y_pos)
{

}

void Ave::Engine::Container::render()
{

}


