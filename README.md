<<<<<<< HEAD
#### TO DO
- Add video links (English version)
- Create an Arabic version of this blog

#### Overview
In this project, we’ll attach the ESP32-CAM to a pan and tilt stand with two SG90 servo motors. With a pan and tilt camera stand, you can move the camera up, down, to the left, and to the right—this is great for surveillance. The ESP32-CAM hosts a web server that shows video streaming and buttons to control the servo motors to move the camera.

![Pan tilt ESP32 Cam Project](images/Pan_tilt_ESP32_Cam_Project-20241028221918592[232].webp)

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
=======
#### TO DO : add video links (english version) , create an arabic version of this blog
#### Overview 
In this project, we’ll attach the ESP32-CAM to a pan and tilt stand with two SG90 servo motors. With a pan and tilt camera stand, you can move the camera up, down, to the left, and the right— this is great for surveillance. The ESP32-CAM hosts a web server that shows video streaming and buttons to control the servo motors to move the camera.
![[Pan tilt ESP32 Cam Project-20241028221918592.webp|232]]
### Parts Required 
For this project, we’ll use the following parts:
- [ESP32 CAM (AI Thinker)]()
- [FTDI]()
- [Pan and tilt stand ]()
- [Jumper wires]()
- [pan tilt module]()  
- [2 * Servos SG90]()

### Steps 
#### 1) Pan and Tilt Stand and Motors Assembly :
![[Pan tilt ESP32 Cam Project-20241028223729276.webp|205]]

#### 2) Connecting Servo Motors To ESP32 and Power Supply :
![[Pan tilt ESP32 Cam Project-20241029154135646.webp|310]]

#### 3) ESP32 CAM Case Assembly : 
- *STL files* : 
<div class="sketchfab-embed-wrapper"> <iframe title="Top" frameborder="0" allowfullscreen mozallowfullscreen="true" webkitallowfullscreen="true" allow="autoplay; fullscreen; xr-spatial-tracking" xr-spatial-tracking execution-while-out-of-viewport execution-while-not-rendered web-share src="https://sketchfab.com/models/e2a87d0dc10746838a21e3a1ab0b27a4/embed"> </iframe> <p style="font-size: 13px; font-weight: normal; margin: 5px; color: #4A4A4A;"> <a href="https://sketchfab.com/3d-models/top-e2a87d0dc10746838a21e3a1ab0b27a4?utm_medium=embed&utm_campaign=share-popup&utm_content=e2a87d0dc10746838a21e3a1ab0b27a4" target="_blank" rel="nofollow" style="font-weight: bold; color: #1CAAD9;"> Top </a> by <a href="https://sketchfab.com/ossamaerrouji?utm_medium=embed&utm_campaign=share-popup&utm_content=e2a87d0dc10746838a21e3a1ab0b27a4" target="_blank" rel="nofollow" style="font-weight: bold; color: #1CAAD9;"> RobotX&More </a><a href="https://sketchfab.com?utm_medium=embed&utm_campaign=share-popup&utm_content=e2a87d0dc10746838a21e3a1ab0b27a4" target="_blank" rel="nofollow" style="font-weight: bold; color: #1CAAD9;"></a></p></div>
<div class="sketchfab-embed-wrapper"> <iframe title="Bottom" frameborder="0" allowfullscreen mozallowfullscreen="true" webkitallowfullscreen="true" allow="autoplay; fullscreen; xr-spatial-tracking" xr-spatial-tracking execution-while-out-of-viewport execution-while-not-rendered web-share src="https://sketchfab.com/models/4c11fc81c39643fda570e0b3a168bfb9/embed"> </iframe> <p style="font-size: 13px; font-weight: normal; margin: 5px; color: #4A4A4A;"> <a href="https://sketchfab.com/3d-models/bottom-4c11fc81c39643fda570e0b3a168bfb9?utm_medium=embed&utm_campaign=share-popup&utm_content=4c11fc81c39643fda570e0b3a168bfb9" target="_blank" rel="nofollow" style="font-weight: bold; color: #1CAAD9;"> Bottom </a> by <a href="https://sketchfab.com/ossamaerrouji?utm_medium=embed&utm_campaign=share-popup&utm_content=4c11fc81c39643fda570e0b3a168bfb9" target="_blank" rel="nofollow" style="font-weight: bold; color: #1CAAD9;"> RobotX&More </a><a href="https://sketchfab.com?utm_medium=embed&utm_campaign=share-popup&utm_content=4c11fc81c39643fda570e0b3a168bfb9" target="_blank" rel="nofollow" style="font-weight: bold; color: #1CAAD9;"></a></p></div>
<div class="sketchfab-embed-wrapper"> <iframe title="Mount" frameborder="0" allowfullscreen mozallowfullscreen="true" webkitallowfullscreen="true" allow="autoplay; fullscreen; xr-spatial-tracking" xr-spatial-tracking execution-while-out-of-viewport execution-while-not-rendered web-share src="https://sketchfab.com/models/275df1afe2474d00bc77dd61d4536d96/embed"> </iframe> <p style="font-size: 13px; font-weight: normal; margin: 5px; color: #4A4A4A;"> <a href="https://sketchfab.com/3d-models/mount-275df1afe2474d00bc77dd61d4536d96?utm_medium=embed&utm_campaign=share-popup&utm_content=275df1afe2474d00bc77dd61d4536d96" target="_blank" rel="nofollow" style="font-weight: bold; color: #1CAAD9;"> Mount </a> by <a href="https://sketchfab.com/ossamaerrouji?utm_medium=embed&utm_campaign=share-popup&utm_content=275df1afe2474d00bc77dd61d4536d96" target="_blank" rel="nofollow" style="font-weight: bold; color: #1CAAD9;"> RobotX&More </a><a href="https://sketchfab.com?utm_medium=embed&utm_campaign=share-popup&utm_content=275df1afe2474d00bc77dd61d4536d96" target="_blank" rel="nofollow" style="font-weight: bold; color: #1CAAD9;"></a></p></div>

#### 4) ESP32 CAM Programming :
- *FTDI <=> ESP32 CAM* Wiring : 
![[Pan tilt ESP32 Cam Project-20241028224355045.webp|432]]
- *Software and code Setup* : 
1- [Arduino IDE installing](https://www.arduino.cc/en/software/OldSoftwareReleases)
2- [Downloading the code](https://github.com/ErroujiOussama/ESP32-CAM-pan-tilt-/tree/main/pan_tilt_esp32_cam)
3- Downloading libraries & esp32 board : 
- open the *pan_tilt_esp32_cam* sketch in arduino ide 
- go to Preferences in the File menu 
	![[Pan tilt ESP32 Cam Project-20241029233436071.webp|1062]]
- paste this link https://dl.espressif.com/dl/package_esp32_index.json in 'Additional boards manager URLs'
	![[Pan tilt ESP32 Cam Project-20241029233958434.webp|688]]
- go to Boards Manager, search for 'esp32' and install the version  1.0.6
	![[Pan tilt ESP32 Cam Project-20241029234625552.webp]]
- go to Library Manager, search for 'esp32Servo' and install the version 0.11.0
	![[Pan tilt ESP32 Cam Project-20241029234636660.webp]]
- esp32 CAM board setup 
	![[Pan tilt ESP32 Cam Project-20241030004433764.webp]]
- upload the code to the connected esp32 board by FTDI module
	![[Pan tilt ESP32 Cam Project-20241030004721719.webp|562]]
#### 5) Web application 
- after uploading the code remove the jumper wire
	![[Pan tilt ESP32 Cam Project-20241030013120277.webp|289]]
- click on the reset button 
	![[Pan tilt ESP32 Cam Project-20241030013433033.webp|244]]
-  open the ip @ in a browser connected to the same wifi 
	 ![[Pan tilt ESP32 Cam Project-20241030020927921.webp|545]]
	 ![[Pan tilt ESP32 Cam Project-20241030021425563.webp|530]]
>>>>>>> 3e1674bff1abda55e4976c885fe2a1fbd630d2fd
