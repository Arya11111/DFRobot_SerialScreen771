/*!
  * file displayMessageList.ino
  * 
  * 初始化8个信息列表M1->M8,直接打印信息列表中为"DFRobot"的列表
  * @显示以前存储的值为"DFRobot"的列表
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

const char* M1 = "DFRobot";
const char* M2 = "<CRY>DFRobot";
const char* M3 = "Hi!";
const char* M4 = "<CRY>Hello!";
const char* M5 = "World!";
const char* M6 = "66";
const char* M7 = "77";
const char* M8 = "88";


void setup() {
  // put your setup code here, to run once:
  /*初始化通信接口（Serial1）和调试接口（Serial）*/
    Serial.begin(115200);
    Serial1.begin(19200);
    screen.begin(Serial1);
    screen.setDbgSerial(Serial);
    /*发送8个信息列表到串口屏*/
    screen.setMessageList(1, M1);
    screen.setMessageList(2, M2);
    screen.setMessageList(3, M3);
    screen.setMessageList(4, M4);
    screen.setMessageList(5, M5);
    screen.setMessageList(6, M6);
    screen.setMessageList(7, M7);
    screen.setMessageList(8, M8);
    /*打印信息列表中为"DFRobot"的列表，及M0信息列表的数据*/
    screen.displayBanner("A");
	/*打印M8信息列表的数据*/
    //screen.displayBanner("H");
	/*打印M1和M8信息列表的数据*/
    //screen.displayBanner("AH");
}

void loop() {
  // put your main code here, to run repeatedly:
}
