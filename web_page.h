#ifndef web_page_h
#define web_page_h
static const char PROGMEM INDEX_HTML[] = R"rawliteral(
<html>

  <head>
    <meta name="viewport" content="width=device-width, initial-scale=1, user-scalable=no">
    
    <style>
      body { font-family: Arial; text-align: center; margin:0px auto; padding-top: 10px;}
      /* ----------------------------------- Button */
      .button {
        display: inline-block;
        padding: 10px;
        font-size: 12px;
        cursor: pointer;
        text-align: center;
        text-decoration: none;
        outline: none;
        color: #fff;
        background-color: #1986e9;
        border: none;
        border-radius: 15px;
        box-shadow: 0 6px #999;
        -webkit-touch-callout: none;
        -webkit-user-select: none;
        -khtml-user-select: none;
        -moz-user-select: none;
        -ms-user-select: none;
        user-select: none;
        width: 15%
      }

      .button:hover {background-color: #031d8c}

      .button:active {
        background-color: #3e8e41;
        box-shadow: 0 2px #666;
        transform: translateY(4px);
      }
      /* ----------------------------------- */
      
      /* ----------------------------------- */
      .space {
        width: 15%;
        height: auto;
        display: inline-block;
      }
      /* ----------------------------------- */

      /* ----------------------------------- Stream Viewer */
      img {
        width: auto ;
        max-width: 100% ;
        height: auto ; 
      }
      /* ----------------------------------- */
      
    </style>
    
  </head>
  
  <body>
  
    <img src="" id="vdstream"> 
    <br><br>
    <br>

    <div>
      <!-- "T" suffix in "start_timer_TC" (example : start_timer_TC('UT')) and -->
      <!-- "M" suffix in "start_timer_MP" (example : start_timer_MP('UM')) to differentiate between touch screen input and mouse pointer input on button. -->
      <button class="button" ontouchstart="start_timer_TC('UT')" ontouchend="stop_timer()" onmousedown="start_timer_MP('UM')" onmouseup="stop_timer()" onmouseleave="stop_timer()"><b>UP</b></button>
      <br><br>
      <button class="button" ontouchstart="start_timer_TC('LT')" ontouchend="stop_timer()" onmousedown="start_timer_MP('LM')" onmouseup="stop_timer()" onmouseleave="stop_timer()"><b>LEFT</b></button>
      <div class="space"></div>
      <button class="button" ontouchstart="start_timer_TC('RT')" ontouchend="stop_timer()" onmousedown="start_timer_MP('RM')" onmouseup="stop_timer()" onmouseleave="stop_timer()"><b>RIGHT</b></button>
      <br><br>
      <button class="button" ontouchstart="start_timer_TC('DT')" ontouchend="stop_timer()" onmousedown="start_timer_MP('DM')" onmouseup="stop_timer()" onmouseleave="stop_timer()"><b>DOWN</b></button>
    </div>
    <script>
      /* ----------------------------------- Calls the video stream link and displays it. */ 
      window.onload = document.getElementById("vdstream").src = window.location.href.slice(0, -1) + ":81/stream";
      /* ----------------------------------- */
      
      /* ----------------------------------- Variable declarations for timers and their intervals. */
      var myTmr;
      var myTmr_Interval = 250;
      /* ----------------------------------- */

      // Variable declarations to differentiate the sending of button commands when the button is held down or just a single press.
      var onmousedown_stat = 0;

      /* ----------------------------------- Variable declaration for sending commands to ESP32 Cam from index/web page. */
      let btn_commands = "";
      let btn_commands_rslt = "";
      /* ----------------------------------- */

      // Variable declarations to distinguish between button presses using the mouse or using the touch screen (on a mobile browser or in a browser on a touch screen device).
      var join_TM = 0;

      /* :::::::::::::::::::::::::::::::::::::::::::::::: Start and stop the timer */
      function start_timer_MP(cmds) {
        btn_commands = cmds;
        btn_commands_rslt = cmds.substring(0, 1);
        if (join_TM == 0) {
          myTmr = setInterval(myTimer, myTmr_Interval);
          if (onmousedown_stat == 0) send_btn_cmd(btn_commands_rslt);
          onmousedown_stat = 1;
        }
      }

      function start_timer_TC(cmds) {
        join_TM = 1;
        btn_commands_rslt = cmds.substring(0, 1);
        myTmr = setInterval(myTimer, myTmr_Interval);
        btn_commands = cmds;
        if (onmousedown_stat == 0) send_btn_cmd(btn_commands_rslt);
        onmousedown_stat = 1;
      }
      
      function stop_timer() {
        clearInterval(myTmr);
        onmousedown_stat = 0;
      }
      /* :::::::::::::::::::::::::::::::::::::::::::::::: */

      /* :::::::::::::::::::::::::::::::::::::::::::::::: Timer to send data or commands from index page/web server to ESP32 Cam. */
      function myTimer() {
        send_btn_cmd(btn_commands_rslt);
      }
      /* :::::::::::::::::::::::::::::::::::::::::::::::: */

      /* :::::::::::::::::::::::::::::::::::::::::::::::: Function to send commands to the ESP32 Cam whenever the button is clicked. */
      function send_btn_cmd(cmds) {
        let btn_cmd = "B," + cmds;
        send_cmd(btn_cmd);
      }
      /* :::::::::::::::::::::::::::::::::::::::::::::::: */
      
      /* :::::::::::::::::::::::::::::::::::::::::::::::: Function for sending commands */
      function send_cmd(cmds) {
        var xhr = new XMLHttpRequest();
        xhr.open("GET", "/action?go=" + cmds, true);
        xhr.send();
      }
      /* :::::::::::::::::::::::::::::::::::::::::::::::: */
    </script>
  
  </body>
  
</html>
)rawliteral";
#endif