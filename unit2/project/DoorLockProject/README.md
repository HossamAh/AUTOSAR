## DOOR Lock Indicator AUTOSAR Project
# project overview
![Project Overview](project_description.png)

AUTOSAR project that gets Door Lock Status and Accordingly taking Action to LED.

# AUTOSAR Layers:
this project targets the SWAL (applicaion layer) , RTE, I/O stack in Service Layer.
![project Architecture](AUTOSAR_Layers.png)
# Application Layer:
contains Door Lock Indication Application Software component which is responsible for :
1. Read the Door State through Requester port of Sender-Receiver Interface type.
2. Call the service responsible for taking action to the Led according to the Door lock State.
![Application SWC](APPSWC.png)
# I/O Stack (IO Abstraction)
contains Door Sensor ECU abstration software Component which is responsible for:
1. communicate to MCAL to Read the Door Lock sensor Through GPIO.
2. Apply the Led Action to the LED through GPIO.
![ECU Abstraction SWC](ECUAbsSWC.png)

** implemented all SWCs and its elements ,runnable,Events with Arxml based on AUTOSAR schema 4.0.2 using ARTOP **
![ARTOP project Tree](ARXMLTree.png)

# results:
project run on STM32F103c6 and debugged on Keil and run on proteus
[![Run of the project on protues](proteus%20-%20frame.jpg)](proteus.mp4)

![Run of the project on keil](Screenshot%202024-08-05%20015656.png)

# project is part of the tasks of Learn in Depth AUTOSAR Diploma with Eng.Keroles Shenouda