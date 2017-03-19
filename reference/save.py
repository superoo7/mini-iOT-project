import serial
import time
ser = serial.Serial('/dev/ttyACM0', 9600)
def tempupdate() :	
	var1 = ser.readline()	
	repr(var1)	
	fob = open('/var/www/html/sensor.html', 'a')	
	fob.write('<!DOCTYPE html><html><head><META HTTP-EQUIV="refresh" CONTENT="2"></head><body><p>|Turbidity in V|Temperature in C|pH| </p><p>' + repr(var1) + '<p></body></html>')
	fob.close()