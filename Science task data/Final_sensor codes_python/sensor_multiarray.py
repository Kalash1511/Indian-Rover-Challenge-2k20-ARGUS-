#!/usr/bin/env python
import rospy
from sensor_msgs.msg import Joy
import MySQLdb as mdb
import time
import subprocess
from std_msgs.msg import Int16MultiArray

flag=0

def sensor_callback(sol):
	global flag

	while(flag==1):		
		global moisture,mq136,temp,sub_temp,mq5,mq135,pressure
		moisture=sol.data[4]
		mq136=sol.data[6] #humid
		temp=sol.data[0]
		sub_temp=sol.data[5]
		mq5=sol.data[3] 
		mq135=sol.data[2]
		pressure=sol.data[1]
		print moisture,mq136,temp,sub_temp,mq5,mq135,pressure	
		con=mdb.connect('127.0.0.1','root','1234567','argus');
		with con:
		        cursor=con.cursor()
		        cursor.execute("""TRUNCATE TABLE sensor""")
		        cursor.execute("""INSERT INTO  sensor VALUES(NULL,%s,%s,%s,%s,%s,%s)""",(temp,pressure,moisture,mq5,mq135,mq136))	
		        con.commit()
		        cursor.close()
def callback(msg):
	global flag

	flag=msg.buttons[0]

if __name__ =='__main__':
        rospy.init_node('sensors')
        #sensor_pub = rospy.Publisher('sensor',queue_size = 50)
        joy_sub=rospy.Subscriber('joy',Joy,callback)
	sensor_sub=rospy.Subscriber('sensor_data',Int16MultiArray,sensor_callback)
	print "Subscriber Made"	
	rospy.spin()





