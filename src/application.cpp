//
// Created by Maakinoh on 10.01.2019.
//

#include "application.h"
#include "./keys/keyManager.hpp"
#include <string>
//#include <ncurses.h>
#include <iostream>


Application::Application *Application::Application::instance = 0;

void Application::KeyTest::on_call()
{
    printf("b");
}

int main()
{
    Application::Application *a = Application::Application::get_application_context();
    // Application::Application *a = new Application::
    a->start_application();
    return 0;

}

Application::Application *Application::Application::get_application_context()
{
    if (instance == 0)
    {
        instance = new Application();
    }
    return instance;
}

Application::Application::Application()
{

}

/**
 * this function start the whole application, load all services and launch the gui
 *
 * Note that you need to call stop_aplication
 */
void Application::Application::start_application()
{
    KeyCodes::KeyManager m = KeyCodes::KeyManager();
    KeyTest key = KeyTest();
    m.add_key(&key, 20);
    m.add_key(&key, 22);
    m.remove_key(20);
}

void Application::Application::stop_application()
{

}
