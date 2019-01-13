//
// Created by Maakinoh on 10.01.2019.
//

#ifndef LINE_APPLICATION_H
#define LINE_APPLICATION_H


#include "keys/listener/keyListener.hpp"

namespace Application
{

    class KeyTest : public KeyCodes::KeyListener{
    public:
        void on_call();
    };


    class Application
    {
    public:
        void start_application();
        void stop_application();
        static Application* get_application_context();
    private:
        static Application* instance;
        Application();

        Application& operator=(Application const&);



    };
};


#endif //LINE_APPLICATION_H
