/*!
  * file setBrightness.ino
  * 设置显示的亮度等级。
  * @调节显示字符的亮度等级。
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
    /*设置显示的亮度等级*/
    screen.setBrightness(eBrightLevel_1);    //亮度等级1
    //screen.setBrightness(eBrightLevel_2);    //亮度等级2
    //screen.setBrightness(eBrightLevel_3);    //亮度等级3
    //screen.setBrightness(eBrightLevel_4);    //亮度等级4
    //screen.setBrightness(eBrightLevel_5);    //亮度等级5
    //screen.setBrightness(eBrightLevel_6);    //亮度等级6
    //screen.setBrightness(eBrightLevel_7);    //亮度等级7
    //screen.setBrightness(eBrightLevel_8);    //亮度等级8
}

void loop() {
  // put your main code here, to run repeatedly:
}