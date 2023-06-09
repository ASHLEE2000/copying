import sys
import Adafruit_DHT

sensor = Adafruit_DHT.DHT11

gpio=17

humidity,temperature = Adafruit_DHT.read_retry(sensor,gpio)

while True:
    if humidity is not None and temperature is not None:
        print('Temp = {0:0.1f}*C Humidity={1:0.1f}%'.format(temperature,humidity))
    else:
        print('Failed to get reading. Try again!')

