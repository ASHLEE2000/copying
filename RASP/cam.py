from picamera import PiCamera
from time import sleep
camera=PiCamera()
#camera.resolution=(259,194)
#camera.framerate=15
#camera.rotation=90
#camera.start_record()
#slepp(5)
#camera.stop_record()
for i in range (5):
	camera.start_preview()
	sleep(5)
	camera.capture('/home/gcq/max%s.jpg' % i)
	camera.stop_preview()

