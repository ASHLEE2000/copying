import RPi.GPIO as GPIO
from time import sleep

GPIO.setwarnings(False)
GPIO.setmode(GPIO.BCM)
GPIO.setup(4,GPIO.OUT, initial=GPIO.LOW)
GPIO.setup(14,GPIO.OUT, initial=GPIO.LOW)
GPIO.setup(15,GPIO.OUT, initial=GPIO.LOW)


while True:
    GPIO.output(4,GPIO.HIGH)
    GPIO.output(14, GPIO.LOW)
    GPIO.output(15, GPIO.LOW)
    sleep(5)
    GPIO.output(4, GPIO.LOW)
    GPIO.output(15, GPIO.LOW)
    GPIO.output(14,GPIO.HIGH)
    sleep(5)
    GPIO.output(4, GPIO.LOW)
    GPIO.output(14, GPIO.LOW)
    GPIO.output(15,GPIO.HIGH)
    sleep(5)
    GPIO.output(4, GPIO.LOW)
    GPIO.output(14, GPIO.LOW)
    GPIO.output(15, GPIO.LOW)
    sleep(1)
    
    

