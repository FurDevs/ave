#pragma once


#include "keys/listener/keyListener.hpp"

namespace Application
{

    class KeyTest : public KeyCodes::KeyListener
    {
    public:
        void on_call() override;
    };


    class Application
    {
    public:
        void start_application();

        void stop_application();

        static Application *get_application_context();

    private:
        static Application *instance;

        Application();

        Application &operator=(Application const &);


    };
};


