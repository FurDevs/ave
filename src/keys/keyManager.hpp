//
// Created by Maakinoh on 2019-01-11.
//

#include <vector>
#include <map>
#include "./listener/keyListener.hpp"

#ifndef LINE_KEYMANAGER_HPP
#define LINE_KEYMANAGER_HPP

namespace KeyCodes
{
    class KeyManager
    {
    private:
        std::vector<KeyEvent> key_event_observer;

    public:
        KeyManager();
        void add_key(KeyListener *listener, int key_code);
        void remove_key(int key_code);
        void remove_key(KeyListener *listener);
        void remove_key(KeyListener *listener, int key_code);
        void parse_key_code(int key_code);


    };
};


#endif //LINE_KEYMANAGER_HPP
