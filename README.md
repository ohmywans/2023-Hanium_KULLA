
## 경유지 알고리즘을 활용한 LiDAR 기반 자율주행 물류 배송 로봇

## 🏆2023 한이음 ICT공모전 / 한국정보산업연합회장상 수상🏆

안녕하세요. 2023년 한이음 ICT공모전에서 동상(한국정보산업연합회장상) 수상한 Team KULLA 입니다.
다수의 경유지를 두고 로봇은 사용자의 호출 순서에 따라 다음 목적지를 선택하기도 하고, 현 위치로부터 가장 가까운 위치의 
사용자의 거점을 선택하기도 하는 알고리즘을 제작하여 두 가지로 주행하는 배송 로봇을 구현했습니다.

## 시연 영상
<p align="center">
<img width="700" alt="한이음 gif 전체영상 압축" src="https://github.com/ohmywans/2023-Hanium_KULLA/assets/104372864/eb948533-35a0-467c-a7f0-76da00572a6b">
</p>



## 프로젝트 특징
1) 메카넘 휠 주행
- 기존 배달 로봇의 경우 일반 휠의 사용으로 전방향으로의 회전이 쉽지 않음
- 제자리에서 8방향으로 움직일 수 있는 특성에 따라 협소한 공간에서 주행 가능
- 평지나 경사 또는 완만한 지형 등 일상적인 공간에서도 빠르고 안정적인 주행
- Steering 없이 바퀴의 모터 회전만으로 조향을 제어할 수 있어, 내부 공간 활용이 효율적  

2) 경유지 알고리즘 – 사용자 우선순위 고려
- 기존 배달 로봇의 경우 단일 사용자만을 고려하여 주행
- 2개의 물품 보관함을 활용하여 사용자의 배송 요청 순서에 따라 정확한 배송 처리
- 배송 사이클 내에서 모든 경우의 수 고려로 배송 시간 단축과 사용자 만족도 향상

3) 사용자 UI
- 기존 배달 로봇의 경우 직접 UI를 이용하여 목적지를 설정할 수 없음 
- 식별 번호에 따라 사용자 구분 가능
- 직관적인 버튼의 구성으로 높은 UX 사용성
- 사용자가 목적지를 선택하여 물품을 원하는 위치까지 배송 가능

4) 로봇 호출 기능
- 기존 배달 로봇의 경우 로봇에 대한 직접적인 호출이 불가함
- 사용자가 앱 내에서 블루투스를 이용하여 손쉽게 ALB 호출 가능

5) SLAM 기반 위치 추정
- 지형지물을 2D 이미지로 맵을 생성하고, 주행에 활용
- 저장한 Map을 바탕으로 LiDAR를 활용해 주변 사물에 대해 안정적인 Localization
- 거점 정보를 인지하여 주·정차 시 ALB의 정확한 Pose 값 계산

---
## 알고리즘 명세서
<img width="400" alt="image" src="https://github.com/ohmywans/2023-Hanium_KULLA/assets/104372864/45442a18-9b23-4e3d-b29a-2c53062e823a">


## 메인 알고리즘 1: 최단거리 경유지 알고리즘
- 거점 선택 시 최단 거리를 우선으로 다음 목적지 선택하는 알고리즘
- short_distance()
- kulla_ws/src/my_waypoint/src/goal_node.cpp

## 메인 알고리즘 2: 사용자 우선순위 알고리즘
- 거점 선택 시 호출 순서를 우선으로 다음 목적지 선택하는 알고리즘
- priority()
- kulla_ws/src/my_waypoint/src/goal_node.cpp

# 호출 기능
- 앱 제작 프레임워크: Android Studio, 사용언어: Java, 폴더: 없음
- 로봇에게 접근하지 않고도 로봇을 호출할 수 있도록 구현한 기능입니다. 스마트폰과 자체 제작한 앱으로 블루투스 연결된 로봇을 호출하여 근거리에서도 성공적으로 로봇을 즉각 호출할 수 있습니다.

## 호출 구현 GIF
<p align="center">
<img width="544" alt="호출 gif" src="https://github.com/ohmywans/2023-Hanium_KULLA/assets/104372864/edc0a17f-eee8-4747-b244-35f3b902be40">
</p>


# HMI
- HMI 구현 프레임워크: QT, 사용언어: C++, 폴더: kulla_qt_ws
- 사용자가 쉽고 편리하게 로봇을 제어할 수 있도록 물품 보관함을 열고 닫을 수 있는 기능과 원하는 거점 선택 기능, 물품을 주고 받는 기능을 모두 구현한 HMI 입니다.

## HMI 화면
<p align="center">
<img width="800" alt="그림012" src="https://github.com/ohmywans/2023-Hanium_KULLA/assets/104372864/2f6fd5a8-e0bf-4c8e-a603-45d7a1583069">
</p>

- give_take 에서 뻗어나가 [give_one -> 발신자 1, take_one -> 수신자 1], [give_two -> 발신자 2, take_two -> 수신자 2] 로 구분합니다.
- Unlock / lock 으로 물품 보관함을 잠금/해제할 수 있습니다.
- HMI를 만들어두어 디버깅도 편했고, 더욱 완성도 있는 프로젝트를 수행할 수 있게 되었습니다.

---

# H/W: 물품 보관함 잠금/해제
- Servo motor를 Arduino Uno / L293D와 연결하고 Serial 통신으로 잠금 및 해제를 구현했습니다.

## H/W: 물품 보관함 잠금/해제 3D 설계
<p align="center">
<img width="544" alt="스크린샷 2023-11-03 113909" src="https://github.com/ohmywans/2023-Hanium_KULLA/assets/104372864/87c21813-6244-48a7-9125-8dc945635d22">
</p>


---

### ALB(Autonomous Logistics Bot) 
<p align="center">
<img width="600" alt="noframe_front" src="https://github.com/ohmywans/2023-Hanium_KULLA/assets/104372864/3a1c4066-e611-417c-b651-067b9087fd82">
<img width="600" alt="ALB_noFrame" src="https://github.com/ohmywans/2023-Hanium_KULLA/assets/104372864/4850fe89-6ca5-4531-877c-f61d842b719a">
</p>

---

### Youtube 주소
https://youtu.be/9sB9MVCQnIU?si=3um7l2SVBdeLrFrE
