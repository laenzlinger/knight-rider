knight-rider
============

Idea: Getting started with arduino on minimum budget.

Goal: 
 - Have fun playing with the arduino platform and learn what we can do with it.
 - Build up our team: My 11 year old son (having little experience) and myself (having a lot of experince in software development and a background in electronics)


Material
--------

 - Arduiono board: We have used the [Leonardo](http://arduino.cc/en/Main/ArduinoBoardLeonardo) because it was cheap, available and compatible to most of the UNO shields (for later projects). The UNO board was not so easily available anymore, therefore we decided for the Leonardy, although the hackability of the leanardo board is not so good compared to the UNO board (for example due to the SMD components).
 - Breadboard: Solderless protoyping board is very usefull for starting simple hardware projects. It is definitly worth the money.
 - Jumper wires: We used the wires a of CAT5 cable (20cm, 10cm and 5cm) because we were a bit impatient to build [better wires](http://www.youtube.com/watch?v=0wpchXZIzJs) on our own.  
 - LEDs: We found a 5 pack of red leds including series resistor at our local DYI store.
 - Potentiometer: Disassembled from an old defect Walkman of the last century. 
 - Switches: Also disassembled from the Walkman. We soldered short cables to use them on our breadboard.


Approach
--------

We used a modern iterative development approach. Start with the simples possible circuit and iterativelx increased the complexity.

 1. Start prepared blink example using Leonardo's on-board LED on PIN 13.
 2. Write our own blink code.
 2. Blink on external LED (Pin 2).
 3. Extend circuit to switch on 5 different leds in a row in sequence.
 4. Extend software to run knight-rider sequence (forward an backward sequence).
 5. Control speed with a potentiometer (analogRead).
 6. Set the brightness of the LED by using pulse width modulation (analogWrite).
 7. Select speed or brightness control by using switches (digitalRead)

 
Wiring
-------
![wiring](https://github.com/laenzlinger/knight-rider/blob/master/wiring.jpg?raw=true)



