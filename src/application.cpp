//
// Created by Maakinoh on 10.01.2019.
//

#include "application.h"
#include "./keys/keyManager.hpp"
#include <string>
#include <ncurses.h>



void application::KeyTest::on_call()
{
    printf("a");
}

int main()
{

    application::application a = application::application();
    a.start_application();
    return 0;

}

void application::application::start_application()
{

    KeyCodes::KeyManager m = KeyCodes::KeyManager();
    KeyTest key = KeyTest();
    m.add_key(&key,20);
}