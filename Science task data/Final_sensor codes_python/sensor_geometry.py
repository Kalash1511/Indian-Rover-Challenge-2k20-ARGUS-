#!/usr/bin/env python
import rospy
from sensor_msgs.msg import Joy
import MySQLdb as mdb
import time
import subprocess
from geometry_msgs.msg import Twist
moisture=0
air=0
temp=0
pressure=0
mq5=0
mq135=0	
mq136=0	

def keys_cb(msg):
        #if (msg.buttons[0]==1) :
                #while (msg.buttons[1]!=1):                        
	global moisture
	moisture=msg.angular.x        
	global air
	air=msg.linear.z        
	global temp
	temp=msg.linear.x        
	global pressure
	pressure=msg.linear.y	
	global mq5,mq135,mq136
	mq5=1
	mq135=2	
	mq136=5	
	print moisture,air,temp,pressure
        con=mdb.connect('127.0.0.1','root','1234567','argus');
        with con:
                cursor=con.cursor()
                cursor.execute("""TRUNCATE TABLE sensor""")
                cursor.execute("""INSERT INTO  sensor VALUES(NULL,%s,%s,%s,%s,%s,%s)""",(temp,pressure,moisture,mq5,mq135,mq136))	
                con.commit()
                cursor.close()
if __name__ =='__main__':
        rospy.init_node('sensors')
        #sensor_pub = rospy.Publisher('sensor',queue_size = 50)
        #rospy.Subscriber('joy',Joy,keys_cb)
	rospy.Subscriber('sensor_data',Twist,keys_cb)
	rospy.spin()
