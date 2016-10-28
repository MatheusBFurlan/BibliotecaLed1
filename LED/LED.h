#ifndef LED_H
#define LED_H

#if defined(ARDUINO) && ARDUINO < 100
#include "WProgram.h"
#else
#include "Arduino.h"
#endif // LED_H

class Led{

    public:
            Led(int porta);
            Led(int porta, bool state);

            int getLed();
            void setLed(int led);

            bool getState();

            void acender(int porta);
            void apagar(int porta);
            void inverter(int porta);

            void acender(int porta, int x);
            void piscar(int porta, int x, int y);

            bool isAceso(int porta);
            bool isPwm(int porta);

    private;
        int porta;
        bool state;

};


#endif
