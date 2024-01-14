#include <SoftwareSerial.h>              // 소프트웨어 시리얼 통신 라이브러리 
#include <ros.h>
#include <std_msgs/Int32.h>

#define BT_TX        8                   // Bluetooth_TX핀을 8번핀에 연결
#define BT_RX        7                   // Bluetooth_RX핀을 7번핀에 연결

ros::NodeHandle nh;
std_msgs::Int32 msg;

ros::Publisher middlePoint("call_topic", &msg);

SoftwareSerial bluetooth(BT_TX, BT_RX);  // bluetooth객체 생성

void setup() {
  bluetooth.begin(9600);                 // 블루투스 통신 시작, HC-06 통신 속도는 9600(기본)
  Serial.begin(57600);                   // 시리얼 모니터 통신 시작, 블루투스 설정과 같은 9600으로 설정 

  nh.initNode();
  nh.advertise(middlePoint);
}
void loop() {

  nh.spinOnce();
  delay(1);

  bluetooth.listen();
    
  if (bluetooth.available()) {           // 블루투스에 받은 데이터가 있다면

    msg.data = bluetooth.read();
    Serial.write(msg.data);
    bluetooth.write(msg.data);
    middlePoint.publish(&msg);
    
  }
  
  
}
