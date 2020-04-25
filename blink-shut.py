#program shines LED then shuts down 90 seconds later
#By Jeremy S. Cook 4/20/2020

import os
import time
import RPi.GPIO as GPIO

LED1 = 14

GPIO.setmode(GPIO.BCM)
GPIO.setup(LED1, GPIO.OUT)
print ("I'm baaaaack!")
print ("LED on, will shut down in 90 seconds")
GPIO.output(LED1, GPIO.HIGH)
time.sleep(90)
print ("Goodbye for now!")
os.system("sudo shutdown -h now")
GPIO.output(LED1, GPIO.LOW)
GPIO.cleanup
quit()
