# emb_activity

# Heat Controller System


A car seat's temperature is controlled by the Seat Heating control system. When a passenger or driver sits in a car, the button sensor activates, acting as one switch. The user must then turn on the heater, which acts as a second switch. The temperature sensor continues to monitor and record the temperature, and the analogue value is sent to the ATmega328 microcontroller. The microcontroller reads the temperature sensor's analogue input and outputs the temperature value via USART.

>1. Button Sensor will check the passenger is sited or not
>2. Temperature sensor works as table no. 1
>3. Display CDD-CRO will give the temperature value by showing PWM
>4. Led Actuator shows the driver is sited 
>5. Heater will check the heater button is ON
>6. Temp to CAN shows the value of temperature gone over protocol

# Given casestudy:
![case study](https://github.com/LoneWalker619/311173_Embedded_CaseStudy/blob/main/IMAGES%20AND%20RESULTS/casestudy.JPG)

# Conditions:
![conditions](https://github.com/LoneWalker619/311173_Embedded_CaseStudy/blob/main/IMAGES%20AND%20RESULTS/tabulation.JPG)

# Solution:
![solution](https://github.com/LoneWalker619/311173_Embedded_CaseStudy/blob/main/IMAGES%20AND%20RESULTS/Screenshot%20(36).png)



