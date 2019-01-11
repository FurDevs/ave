//
// Created by Maakinoh on 10.01.2019.
//

#ifndef LINE_APPLICATION_H
#define LINE_APPLICATION_H


#include "keys/listener/keyListener.hpp"

namespace application
{

    class KeyTest : public KeyCodes::KeyListener{
    public:
        void on_call();
    };


    class application
    {
    public:
        void start_application();

    };
};


#endif //LINE_APPLICATION_H
