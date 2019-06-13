/*!
  * file setMoveSpeed.ino
  * 显示字符串"DFRobot"，设置该字符串移动的速度。
  * @设置显示的移动速度等级。
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
eBrightLevel_t bright;

void setup() {
  // put your setup code here, to run once:
  /*初始化通信接口（Serial1）和调试接口（Serial）*/
    Serial.begin(115200);
    Serial1.begin(19200);
    screen.begin(Serial1);
    screen.setDbgSerial(Serial);
    screen.setMessage(s);//串口屏显示字符串"DFRobot"
    /*设置显示的移动模式为右移*/
    screen.setMoveMode(eMove_left);
    /*设置显示的移动速度等级*/
    screen.setMoveSpeed(eSpeedLevel_1);       //速度等级1
    //screen.setMoveSpeed(eSpeedLevel_2);    //速度等级2
    //screen.setMoveSpeed(eSpeedLevel_3);    //速度等级3
    //screen.setMoveSpeed(eSpeedLevel_4);    //速度等级4
    //screen.setMoveSpeed(eSpeedLevel_5);    //速度等级5
    //screen.setMoveSpeed(eSpeedLevel_6);    //速度等级6
    //screen.setMoveSpeed(eSpeedLevel_7);   //速度等级7
    //screen.setMoveSpeed(eSpeedLevel_8);    //速度等级8
}

void loop() {
  // put your main code here, to run repeatedly:
}
