#if defined(ARDUINO) && ARDUINO >= 100
#include "Arduino.h"
#else
#include <WProgram.h>
#endif

#include <ros.h>
#include <Servo.h>
#include <std_msgs/Int32.h> // servo 값 주기 위함
#include <SoftwareSerial.h>
#include <AFMotor.h>
#define angle 180

Servo servo1; // 10번 attach
Servo servo2; // 9번 attach

ros::NodeHandle nh;

// Servo 1번 callback 함수, close = 180도
void Callback_s1(const std_msgs::Int32 &msg) { 

  servo1.write(msg.data);
}

// Servo 2번 callback 함수, close = 180도
void Callback_s2(const std_msgs::Int32 &msg) { 

  servo2.write(msg.data);
}

// Jetson으로부터 Topic을 받아오는 Subscriber 선언
ros::Subscriber<std_msgs::Int32> sub1("servo1", Callback_s1);
ros::Subscriber<std_msgs::Int32> sub2("servo2", Callback_s2);

void setup() {
  Serial.begin(57600);
  Serial.println("Door operated");
  servo1.attach(10);
  servo2.attach(9);
  servo1.write(angle);
  servo2.write(angle);

  nh.initNode();
  nh.subscribe(sub1);
  nh.subscribe(sub2);
}

void loop() {
  nh.spinOnce();
  delay(1);
}

// 서보모터는 로봇 구조 상 
// 180도 -> close 상태(Default)
// 0도 -> open 상태 (토픽 받아서 동작)
// 현재 각도는 180도, 즉 기본값으로 되어있음. 

 // servo 1번이 attach 10번임
