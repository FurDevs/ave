
#include <vector>
#include "keyManager.hpp"

/**
 *
 * @param listener
 */
void KeyCodes::KeyManager::add_key(KeyListener *listener, int key_code) {
    KeyCodes::KeyEvent event;
    event.key_code = key_code;
    event.observer = listener;
    this->key_event_observer.push_back(event);
}


KeyCodes::KeyManager::KeyManager() {

}

/**
 * This function will remove all key event observer with the passed key_code
 * @param key_code the key code which should be removed
 */
void KeyCodes::KeyManager::remove_key(int key_code) {

    std::vector<KeyEvent>::iterator iter = key_event_observer.begin();

    while (iter != key_event_observer.end()) {
        if ((*iter).key_code == key_code) {
            iter = key_event_observer.erase(iter);
        }
            ++iter;

    }
}

void KeyCodes::KeyManager::remove_key(KeyCodes::KeyListener *listener) {
    std::vector<KeyEvent>::iterator iter = key_event_observer.begin();

    while (iter != key_event_observer.end()) {

    }
}

void KeyCodes::KeyManager::remove_key(KeyCodes::KeyListener *listener, int key_code) {

}

// parse
void KeyCodes::KeyManager::parse_key_code(int key_code) {
    std::vector<KeyEvent>::iterator iter = key_event_observer.begin();

    while (iter != key_event_observer.end()) {
        if ((*iter).key_code == key_code) {
            (*iter).observer->on_call();
        }
        ++iter;

    }

}
