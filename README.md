# Proximity-sensor

This project uses PlatformIO as it's ecosystem. Turns on/off LED ligits/buzzer depending on distance from ultrasonic sensor. One LED ligit turn on from 300cm away from sensor and an extra LED turns on each 50cm an object gets closer to sensor. When the distance is less than 10cm. 

## Pins and corresponding segments

Trigger pin = 6
Echo pin = 5
Red LED 1 = 13
Red LED 2 = 12
Yellow LED 1 = 11
Yellow LED 2 = 10
Green LED 1 = 9
Green LED 2 = 8
Buzzer = 7

## Tools used

An Arduino compatible board
A breadboard
330 ohms resistors(6)
6 LED lights(2 of each(red,yellow,green))
Jumper wires(4 female-male, 15 male-male)

## Library used

Ultrasonic@^3.0.0 by ericksimoes

## Design

See proximity-sensor_circuit.png for circuit design.

## Physical appearance

See proximity-sensor.jpg for physical appearance.
See proximity-sensor_circuit.MP4 for to see how it works.