# Sem6-UNIX-Soil-Moisture-Sensor

## Software Download:
	http://arduino.cc/en/main/software

Download Arduino IDE for the appropriate Operating System from the above link.
The open-source Arduino Software (IDE) makes it easy to write code and upload it to the board. It runs on Windows, Mac OS X, and Linux. The environment is written in Java and based on Processing and other open-source software. This software can be used with any Arduino board.

## Components:

	•	Arduino Uno
	•	Arduino GSM Shield SIM900 A (with MAX232 IC incorporated)
	•	FC 28 Soil Moisture Sensor

## Setup:

	•	Connect the Arduino Uno board after installing the IDE to your laptop, at the USB Jack in the board. The device is detected automatically and driver software is installed.
	•	Use the Device Manager to find out the port at which the device has been installed (COM3/ COM6/ COM8). On opening the IDE, click on Tools -> Board and ensure Arduino Uno is ticked. Then click on Tools -> Port and ensure that the same port at which the connection was made is ticked.
	•	Test the working of the board by clicking on File -> Examples -> Basics -> Blink. Upload the code to the board.
	•	When done uploading, an LED will blink on the board.

	•	Insert the SIM card into the slot in the GSM SIM900A shield. Connect a 12V adapter to the Power Jack in the GSMShield.
	•	The green light in the GSMShield will blink with a 1 second delay initially. Wait till the delay becomes 2 seconds. This implies that the SIM card is now receiving the signal of the service provider.

	•	The FC 28 soil moisture sensor has two wires attached to the prongs. One wire is connected to a GND port on the board and the other wire is connected to A0 pin (ANALOG IN ports). The prongs are placed in the soil to be tested.

	•	Create a new sketch and paste gsmsoil.ino into the IDE.

	•	Connect the GND pin on the GSMShield to the GND pin on the Arduino Uno board. Upload the code after compiling.
	•	Connect the RX pin on the Uno to the TX pin on the GSMShield and connect the TX pin on the Uno to the RX pin on the GSMShield.
(NOTE: Ensure that code is uploaded before connecting the RX and TX pins.)
	•	Open the Serial Monitor and ensure that it is set to 9600 baud rate. The program will start executing and send a text message to the given number about the soil moisture value read with the help of the sensor.
