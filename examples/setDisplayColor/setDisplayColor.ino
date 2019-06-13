/*!
  * file setDisplayColor.ino
  * 设置显示背景和字体的颜色，共红、黄、绿、青、蓝、紫、白、黑8种颜色
  * @显示字符串"DFRobot",背景为黑色，字体颜色每5s在红、黄、绿、青、蓝、紫、白颜色中变化。
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

void setup() {
  // put your setup code here, to run once:
  /*初始化通信接口（Serial1）和调试接口（Serial）*/
    Serial.begin(115200);
    Serial1.begin(19200);
    screen.begin(Serial1);
    screen.setDbgSerial(Serial);
    screen.setMessage(s);//串口屏显示字符串"DFRobot"
    /*设置字符串显示背景和字体颜色*/
    screen.setDispalyColor(eColor_red, eColor_black);//黑底红字
}

void loop() {
  // put your main code here, to run repeatedly:
  /*每5s切换一种字体颜色*/
    eColorMode_t backgroud,font;
    backgroud = eColor_black;
    uint16_t buf[]= {eColor_red, eColor_yellow, eColor_green, eColor_cyan, eColor_blue, eColor_purple, eColor_white};
    for(int i = 0; i < sizeof(buf)/sizeof(uint16_t); i++){
        font = buf[i];
        screen.setDispalyColor(font, backgroud);
        delay(5000);
    }
}
