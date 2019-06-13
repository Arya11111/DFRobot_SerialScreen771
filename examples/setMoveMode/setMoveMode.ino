/*!
  * file setMoveMode.ino
  * 设置显示的移动方式，如实现左移、右移、静止、上移、下移、闪烁显示等。
  * @显示字符串"DFRobot",每隔5秒循环切换一次移动显示方式。
  * @字符串"DFRobot"依次实现左移、右移、静止、上移、下移、闪烁等循环显示。
  *
  * Copyright   [DFRobot](http://www.dfrobot.com), 2016
  * Copyright   GNU Lesser General Public License
  *
  * version  V1.0
  * date  2019-6-12
  */

#include "DFRobot_SerialScreen771.h"

#ifdef ARDUINO_AVR_UNO
SoftwareSerial Serial1(2, 3); //RX, TX
#endif

DFRobot_SerialScreen771 screen;
const char *s = "DFRobot";
eMoveMode_t moveMode;

void setup() {
  // put your setup code here, to run once:
  /*初始化通信接口（Serial1）和调试接口（Serial）*/
    Serial.begin(115200);
    Serial1.begin(19200);
    screen.begin(Serial1);
    screen.setDbgSerial(Serial);
    screen.setMessage(s);//串口屏显示字符串"DFRobot"
    /*设置字符串显示移动方式*/
    screen.setMoveMode(eMove_left);    //字符串向左移动显示
    //screen.setMoveMode(eMove_right);  //字符串向右移动显示
    //screen.setMoveMode(eMove_hold);   //字符串静止显示
    //screen.setMoveMode(eMove_up);     //字符串向上移动显示
    //screen.setMoveMode(eMove_down);   //字符串向下移动显示
    //screen.setMoveMode(eMove_flash); //字符串闪烁显示
}

void loop() {
  // put your main code here, to run repeatedly:
  /*每5s切换一种移动显示方式*/
    for(moveMode = eMove_left; moveMode <= eMove_flash; moveMode =(eMoveMode_t(moveMode+1))){
        screen.setMoveMode(moveMode);
        delay(5000);
    }
}
