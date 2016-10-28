#include "LED.h"

Led::Led(int porta)
{
    this -> porta = porta;
}

Led::Led(int porta, bool state)
{
    this -> porta = porta;
    this -> state = state;
}

Led::setLed(int porta)
{
    this -> porta = porta;
    pinMode(porta, OUTPUT);
}

Led::getState(int porta)
{
    return digitalRead(this -> porta)
}

void Led::acender(int porta)
{
   digitalWrite(porta,"HIGH");
   this -> state = true;
}

void Led::apagar(int porta)
{
   digitalWrite(porta,"LOW");
   this -> state = false;
}

void Led::inverter(int porta)
{
   digitalWrite(porta, !digitalRead(porta));
   if(this -> state == true)
    this -> state = false;
   else
    this -> state = true;
}

void Led::acender(int porta, int x)
{
    analogWrite(porta, x);
    this -> state = true;
}

void Led::piscar(int porta, int x, int y)
{
    while(x > 0)
    {
        digitalWrite(porta, "HIGH");
        delay(y);
        digitalWrite(porta, "LOW");
        delay(y);
        x--;
    }
}

bool Led::isAceso(int porta)
{
    getState(porta);
}

bool Led::isPwm(int porta)
{
    if(porta == 11 || porta == 6 || porta == 10 || porta == 3 || porta == 5)
    {
        return true;
    }
    else
    {
        return false;
    }
}

