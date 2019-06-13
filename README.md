# 771 RGB flexible Screen 


################################################
该款RGB软屏，由7x71的RGB灯组成，通过串口与主控通信，可显示字符串，改变字体和背景颜色,
可设置显示亮度和移动速度，修改并显示信息列表的内容
################################################


/*!
     *  @brief Initialize the communication serial port
     *
     *  @param &s_  Stream port
     *  @return  true if execute successfully, false otherwise.
     */
    bool begin(Stream &s_);

/*!
     *  @brief Set the debug serial port
     *
     *  @param &s_  Stream port
     *  @return  true if execute successfully, false otherwise.
     */
    void setDbgSerial(Stream &s_){dbg = &s_;}

/*!
     *  @brief Set display movement mode
     *
     *  @param m_  Direction of movement
     *     eMove_left : Move to the left
     *     eMove_right : Move to the right
     *     eMove_hold : hold
     *     eMove_up : Move to the up
     *     eMove_down : Move to the down
     *     eMove_flash : flicker
     *  @return  true if execute successfully, false otherwise.
     */
    bool setMoveMode(eMoveMode_t m_);

/*!
     *  @brief Set display color
     *
     *  @param font_  font color
     *     eColor_red : red
     *     eColor_yellow : yellow
     *     eColor_green : green
     *     eColor_cyan : cyan
     *     eColor_blue : blue
     *     eColor_purple : purple
     *     eColor_white : white
     *     eColor_black : black
     *  @param font_  background color
     *     eColor_red : red
     *     eColor_yellow : yellow
     *     eColor_green : green
     *     eColor_cyan : cyan
     *     eColor_blue : blue
     *     eColor_purple : purple
     *     eColor_white : white
     *     eColor_black : black
     *  @return  true if execute successfully, false otherwise.
     */
    bool setDispalyColor(eColorMode_t font_, eColorMode_t back_);

/*!
     *  @brief Set the display brightness level
     *
     *  @param b_  Brightness level
     *     eBrightLevel_1 
     *     eBrightLevel_2
     *     eBrightLevel_3 
     *     eBrightLevel_4 
     *     eBrightLevel_5
     *     eBrightLevel_6
     *     eBrightLevel_7 
     *     eBrightLevel_8 
     *  @return  true if execute successfully, false otherwise.
     */
    bool setBrightness(eBrightLevel_t b_);

/*!
     *  @brief Set display speed level
     *
     *  @param s_  Speed level
     *     eSpeedLevel_1 
     *     eSpeedLevel_2
     *     eSpeedLevel_3 
     *     eSpeedLevel_4 
     *     eSpeedLevel_5
     *     eSpeedLevel_6
     *     eSpeedLevel_7 
     *     eSpeedLevel_8 
     *  @return  true if execute successfully, false otherwise.
     */
    bool setMoveSpeed(eSpeedLevel_t s_);

/*!
     *  @brief Modify the value of the message list
     *
     *  @param s_  banN
     *     banN of range 1~8
     *  @param s_  message_
     *     String information
     *  @return  true if execute successfully, false otherwise.
     */
    bool setMessageList(uint8_t banN, const char *message_);

/*!
     *  @brief Display data for a list of messages
     *
     *  @param s_  message_
     *     "A" -> "JIHGFEDCBA"
     *  @return  true if execute successfully, false otherwise.
     */
    bool displayBanner(const char *message_);

/*!
     *  @brief Set display information
     *  
     *  @param s_  message_
     *  String information
     *  @return  true if execute successfully, false otherwise.
     */
    bool setMessage(const char *message_);

/*!
     *  @brief Full screen lights up to show a certain color
     *
     *  @param color_  RGB color
     *     eColor_red : red
     *     eColor_yellow : yellow
     *     eColor_green : green
     *     eColor_cyan : cyan
     *     eColor_blue : blue
     *     eColor_purple : purple
     *     eColor_white : white
     *     eColor_black : black
     *  @return  true if execute successfully, false otherwise.
     */
bool setFullScreenColor(eColorMode_t color_);
