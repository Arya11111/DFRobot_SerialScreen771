/*!
  * file setScreenColor.ino
  * 全屏点亮，全屏显示红、黄、绿、青、蓝、紫、白等颜色
  * @点亮全屏，每5s切换一次颜色，以此循环
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

void setup() {
  // put your setup code here, to run once:
  /*初始化通信接口（Serial1）和调试接口（Serial）*/
    Serial.begin(115200);
    Serial1.begin(19200);
    screen.begin(Serial1);
    screen.setDbgSerial(Serial);
	screen.setFullScreenColor(eColor_black);//黑屏
}

void loop() {
  // put your main code here, to run repeatedly:
  /*每5s切换一种屏幕颜色*/
    eColorMode_t color;
    uint16_t buf[]= {eColor_red, eColor_yellow, eColor_green, eColor_cyan, eColor_blue, eColor_purple, eColor_white};
    for(int i=0; i < sizeof(buf)/sizeof(uint16_t); i++){
        color = buf[i];
        screen.setFullScreenColor(color);
        delay(5000);
    }
}