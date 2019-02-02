#pragma once

namespace Ave::KeyCodes
{
    class KeyListener
    {
    public:
        virtual void on_call(){};

    };

    struct KeyEvent
    {
        int key_code;
        KeyListener *observer;
    };
};



