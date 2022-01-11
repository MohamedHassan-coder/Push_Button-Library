/*
Push_Button.h library for push buttuns with debounce 
->works only for digital pins (because of the bullup resistoe functions)<-
Created by Mohamed hassan El-Sharif 11,January,2022.
*/
#ifndef Push_Button_h
#define Push_Button_h

# include "Arduino.h"
class Push_Button {
  public:
    Push_Button(int button_pin);
    bool getCurrentStatus();
    bool getLastStatus();

  private:
    int _button_pin;
    bool _current_status = LOW;
    bool _last_status = LOW;
    void __button_pressed();

};
#endif