
#include <vector>
#include "keyManager.hpp"

KeyCodes::KeyManager *KeyCodes::KeyManager::instance = 0;

/**
 * this function add
 *
 * @param listener
 * @param key_code
 */
void KeyCodes::KeyManager::add_key(KeyListener *listener, int key_code)
{
    KeyCodes::KeyEvent event;
    event.key_code = key_code;
    event.observer = listener;
    this->key_event_observer.push_back(event);
}

KeyCodes::KeyManager *KeyCodes::KeyManager::get_intance()
{
    if (instance == nullptr)
    {
        instance = new KeyManager();
    }
    return instance;
}


KeyCodes::KeyManager::KeyManager()
{

}

/**
 * This function will remove all key event observer with the passed key_code
 * @param key_code the key code which should be removed
 */
void KeyCodes::KeyManager::remove_key(int key_code)
{
    for (auto iter = key_event_observer.begin(); iter != key_event_observer.end(); ++iter)
    {
        if ((*iter).key_code == key_code)
        {
            iter = key_event_observer.erase(iter);
        }
    }
}

void KeyCodes::KeyManager::remove_key(KeyCodes::KeyListener *listener)
{
    for (auto it = key_event_observer.begin(); it != key_event_observer.end(); ++it)
    {
        if ((*it).observer == listener)
        {
            key_event_observer.erase(it);
        }
    }
}

void KeyCodes::KeyManager::remove_key(KeyCodes::KeyListener *listener, int key_code)
{

}

// parse
void KeyCodes::KeyManager::parse_key_code(int key_code)
{
    for (auto iter = key_event_observer.begin(); iter != key_event_observer.end(); ++iter)
    {
        if ((*iter).key_code == key_code)
        {
            (*iter).observer->on_call();
        }
    }

}
