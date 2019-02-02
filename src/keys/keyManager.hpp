#include <vector>
#include <map>
#include "./listener/keyListener.hpp"

#ifndef LINE_KEYMANAGER_HPP
#define LINE_KEYMANAGER_HPP

namespace Ave::KeyCodes
{
    class KeyManager
    {
    private:
        static KeyManager* instance;
        std::vector<KeyEvent> key_event_observer;
        KeyManager();
        KeyManager(const KeyManager&);
        KeyManager &operator=(KeyManager const &);


    public:
        static KeyManager* get_intance();
        void add_key(KeyListener *listener, int key_code);
        void remove_key(int key_code);
        void remove_key(KeyListener *listener);
        void remove_key(KeyListener *listener, int key_code);
        void parse_key_code(int key_code);


    };
};


#endif //LINE_KEYMANAGER_HPP
