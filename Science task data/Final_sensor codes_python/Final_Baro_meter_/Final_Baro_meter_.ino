#include <Wire.h>
#include <BMP180TwoWire.h>
#define I2C_ADDRESS 0x77
#include <ros.h>
#include<geometry_msgs/Twist.h>
#define air_pin A1
#define soil_pin A0

ros::NodeHandle  nh;
geometry_msgs::Twist data;
ros::Publisher datapub("sensor_data", &data);

BMP180TwoWire bmp180(&Wire, I2C_ADDRESS);

void setup() {
  nh.getHardware()->setBaud(9600);
  Serial.begin(9600);
  Wire.begin();  
  if (!bmp180.begin())
  {
    Serial.println("begin() failed. check your BMP180 Interface and I2C Address.");
    while (1);
  }
 nh.initNode();
 nh.advertise(datapub);
}

void loop() {

int air,soil; //fc-28 is soil moisture sensor

air = analogRead(air_pin);
air= map(air,550,0,0,1000);

soil=analogRead(soil_pin);
soil= map(soil,600,100,0,100);

  delay(1000);

  //start a temperature measurement
  if (!bmp180.measureTemperature())
  {
    Serial.println("could not start temperature measurement, is a measurement already running?");
    return;
  }

  do
  {
    delay(100);
  } while (!bmp180.hasValue());

  data.linear.x=bmp180.getTemperature();
  
  if (!bmp180.measurePressure())
  {
    Serial.println("could not start perssure measurement, is a measurement already running?");
    return;
  }
 
  do
  {
    delay(100);
  } while (!bmp180.hasValue());

  data.linear.y=(bmp180.getPressure()/100000);
  
datapub.publish(&data);
nh.spinOnce();
}
