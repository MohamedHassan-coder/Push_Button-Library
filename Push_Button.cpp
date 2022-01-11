/*
Push_Button.cpp library for push buttuns with debounce 
->works only for digital pins (because of the bullup resistoe functions)<-
Created by Mohamed hassan El-Sharif 11,January,2022.
*/
# include "Arduino.h"
# include "Push_Button.h"

Push_Button::Push_Button(int button_pin) {
  _button_pin = button_pin;
  pinMode(_button_pin , INPUT_PULLUP);
}

void Push_Button:: __button_pressed() {
  _current_status = digitalRead(_button_pin);
  if (_last_status != _current_status) {
    delay(10);
    _current_status = digitalRead(_button_pin);
  }
}

bool Push_Button:: getCurrentStatus() {
  __button_pressed();
  _last_status = _current_status;

  return _current_status;
  millis();
  delay(50);
  return LOW;
}

bool Push_Button:: getLastStatus() {
  __button_pressed();
  _last_status = _current_status;

  return _last_status;
}