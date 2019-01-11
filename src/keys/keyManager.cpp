//
// Created by Maakinoh on 2019-01-11.
//

#include <vector>
#include "keyManager.hpp"

/**
 *
 * @param listener
 */
void KeyCodes::KeyManager::add_key(KeyListener *listener, int key_code)
{
    KeyCodes::KeyEvent event;
    event.key_code = key_code;
    event.observer = listener;
    this->key_event_observer.push_back(&event);
}


void KeyCodes::KeyManager::remove_key(int key_code)
{

    int i = 0;
    for (auto const &value: key_event_observer)
    {
        if (value->key_code)
        {
            this->key_event_observer.erase(key_event_observer.begin() + i);
        }
        i++;
    }
    delete &i;
}

void KeyCodes::KeyManager::remove_key(KeyCodes::KeyListener *listener)
{

}

void KeyCodes::KeyManager::parse_key_code(int key_code)
{

}
