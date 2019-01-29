#ifndef LINE_KEYLISTENER_HPP
#define LINE_KEYLISTENER_HPP

namespace KeyCodes
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


#endif //LINE_KEYLISTENER_HPP
