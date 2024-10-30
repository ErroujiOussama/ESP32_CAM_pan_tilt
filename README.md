# Pan Tilt ESP32 Cam Web Streaming
#### Overview
In this project, we’ll attach the ESP32-CAM to a pan and tilt stand with two SG90 servo motors. With a pan and tilt camera stand, you can move the camera up, down, to the left, and to the right—this is great for surveillance. The ESP32-CAM hosts a web server that shows video streaming and buttons to control the servo motors to move the camera.

![Pan tilt ESP32 Cam Project](images/Pan_tilt_ESP32_Cam_Project-20241028221918592.webp)

### Parts Required
For this project, we’ll use the following parts:
- [ESP32 CAM (AI Thinker)]()
- [FTDI]()
- [Pan and tilt stand]()
- [Jumper wires]()
- [Pan tilt module]()  
- [2 * Servos SG90]()

### Steps
#### 1) Pan and Tilt Stand and Motors Assembly
![Pan tilt ESP32 Cam Project](images/Pan_tilt_ESP32_Cam_Project-20241028223729276.webp)

#### 2) Connecting Servo Motors to ESP32 and Power Supply
![Servo Connection](images/Pan_tilt_ESP32_Cam_Project-20241029154135646.webp)

#### 3) ESP32 CAM Case Assembly
- *STL files*:
    - [Top Model on Sketchfab](https://sketchfab.com/3d-models/top-e2a87d0dc10746838a21e3a1ab0b27a4)
    - [Bottom Model on Sketchfab](https://sketchfab.com/3d-models/bottom-4c11fc81c39643fda570e0b3a168bfb9)
    - [Mount Model on Sketchfab](https://sketchfab.com/3d-models/mount-275df1afe2474d00bc77dd61d4536d96)

#### 4) ESP32 CAM Programming
- **FTDI <=> ESP32 CAM Wiring**  
  ![Wiring Diagram](images/Pan_tilt_ESP32_Cam_Project-20241028224355045.webp)

- **Software and Code Setup**:
  1. [Install Arduino IDE](https://www.arduino.cc/en/software/OldSoftwareReleases)
  2. [Download the code](https://github.com/ErroujiOussama/ESP32-CAM-pan-tilt-/tree/main/pan_tilt_esp32_cam)
  3. Download libraries & ESP32 board:
      - Open *pan_tilt_esp32_cam* sketch in Arduino IDE
      - Go to **Preferences** in the File menu  
        ![Preferences](images/Pan_tilt_ESP32_Cam_Project-20241029233436071.webp)
      - Paste this URL in **Additional boards manager URLs**: `https://dl.espressif.com/dl/package_esp32_index.json`  
        ![Boards Manager](images/Pan_tilt_ESP32_Cam_Project-20241029233958434.webp)
      - Go to **Boards Manager**, search for `esp32`, and install version `1.0.6`  
        ![ESP32 Board](images/Pan_tilt_ESP32_Cam_Project-20241029234625552.webp)
      - Go to **Library Manager**, search for `esp32Servo`, and install version `0.11.0`  
        ![Servo Library](images/Pan_tilt_ESP32_Cam_Project-20241029234636660.webp)
      - Setup the ESP32 CAM board  
        ![Board Setup](images/Pan_tilt_ESP32_Cam_Project-20241030004433764.webp)
      - Upload the code to the connected ESP32 board using the FTDI module  
        ![Code Upload](images/Pan_tilt_ESP32_Cam_Project-20241030004721719.webp)

#### 5) Web Application
- After uploading the code, remove the jumper wire  
  ![Jumper Removal](images/Pan_tilt_ESP32_Cam_Project-20241030013120277.webp)
- Press the reset button  
  ![Reset Button](images/Pan_tilt_ESP32_Cam_Project-20241030013433033.webp)
- Open the IP address in a browser connected to the same Wi-Fi network  
  ![Web Application Interface 1](images/Pan_tilt_ESP32_Cam_Project-20241030020927921.webp)
  ![Web Application Interface 2](images/Pan_tilt_ESP32_Cam_Project-20241030021425563.webp)
