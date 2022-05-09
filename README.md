# Animated Cube 
Module 2 Project repository, COMS3930
https://www.notion.so/Module-2-Animating-Cube-in-3JS-Using-Analog-Sensors-98310628d0f84c63b229314fc386e9e6

# Introduction: Module 2  

Module 2 was an “Interactive Devices” assignment in which students in COMS-3930 were asked to create a device using three interactive analog sensors, whose jobs were to send analog values over a serial connection, parse through the analog inputs they’d received, and communicate with the developing software in order to control outputs according to those analog values. The devices which students were required to use was a joystick, a potentiometer, and a button. For this project, I chose to create an animated floating cube in ThreeJS, in which the analog inputs could control its movement, speed and color. 

# What you will need to install this project is: 

Arduino IDE, properly configured. To download this IDE visit: https://www.arduino.cc/en/software and to configure, see this reference video: https://www.youtube.com/watch?v=adLUgmCJKnM&t=11s

A USB-C Cable

Potentiometer

Button

8 screws

Arduino-Uno

Joystick

Soldering Equipment

Arduino Software

A stash of wires

Clear Acrylic material

Hot glue (a hot glue gun)

Tac

Laser-cutter

Power drill

Dremel

Wood-cutting scissors

A USB-C cable

A cable jack


...as well as purchased my own materials from University Hardware on Broadway and 114th St: 

 
one magnet

magnet strips (to close the box securely)

two 2’’ Door hinges

# Steps:

# Create the Enclosure: 

1. Create a box model in Adobe Illustrator (or some other illustrating tool) with the following dimensions. 2.5” x 3",  5.5” x 3", 5 x 2”. 

2. Send the model to the laser-cutter over a flash drive or otherwise. 

3. Select a piece of acrylic you would like to use for your piece. (I prefer clear.)

4. Cut the acrylic. Then, set a 5.5" x 3" piece and a 2.5" x 3" and set it aside. 

5. Take the larger piece of acryllic which was set aside. Decide where you want your analog devices to go and measure how large the holes must be. Then, laser cut holes for those analog device sizes. 

6. Take the smaller piece which was set aside. Decide where the jack cable will go, and measure its dimensions. Then, laser cut to create a hole for the cable.  

7. Lay out the two pieces of acrylic with holes in them, and line them up about a centimeter and a half apart, laying the hinges flush against each piece of acryllic. Using a sharpie, mark where the hinge holes (where the screws will go) lie. Then, using a dremel, make small holes where the hinge screws will go to prime your acryilic pieces for drilling. 

8. Drill screw into the eight appropriate spots. The screws may be too long and overlap. This is okay, simply use the dremel tool to shave them down so that your box lid can close. 

9. Using hot glue, glue the sides of your acrylic box together. Place the analog devices inside and secure with tac and clear tape. 


# Run the Code: 

1. Plug the enclosure into your laptop or desktop. Download the Arduino code to your Arduino-Uno board. Be sure to check that you have selected the correct board. 

2. Select the correct port.

3. Download the ThreeJS Code. 

3. Using your command line, navigate to the folder where you have downloaded the index.js file and open it in a browser over a serial connection. 

4. Click anywhere on the page. You will be prompted to select the port through which your serial messages will be sent. Be sure to select the correct one. 

5. Use the potentiometer or the mouse to manipulate the cube. Potentiometer will quicken the speed, button will change its color, and joystick will determine the direction of the cube.
