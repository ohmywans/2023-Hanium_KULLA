
## 경유지 알고리즘을 활용한 LiDAR 기반 자율주행 물류 배송 로봇

## 🏆2023 한이음 ICT공모전 / 한국정보산업연합회장상 수상🏆

안녕하세요. 2023년 한이음 ICT공모전에서 동상(한국정보산업연합회장상) 수상한 KULLA 팀의 팀장 이수완 입니다.
다수의 경유지를 두고 로봇은 사용자의 호출 순서에 따라 다음 목적지를 선택하기도 하고, 현 위치로부터 가장 가까운 위치의 
사용자의 거점을 선택하기도 하는 알고리즘을 제작하여 두 가지로 주행하는 배송 로봇을 구현했습니다.

# 호출 기능
로봇에게 접근하지 않고도 로봇을 호출할 수 있도록 구현한 기능입니다. 스마트폰과 자체 제작한 앱으로 블루투스 연결된 로봇을 호출하여
근거리에서도 성공적으로 로봇을 즉각 호출할 수 있습니다.

## 호출 화면




# HMI
사용자가 쉽고 편리하게 로봇을 제어할 수 있도록 물품 보관함을 열고 닫을 수 있는 기능과 원하는 거점 선택 기능, 물품을 주고 받는 기능을 모두 구현한 HMI 입니다.
사용된 프레임워크는 QT 이며, 사용언어는 C++ 입니다. kulla_qt_ws 에서 확인하실 수 있습니다.

## HMI 화면
![give_take_press](https://github.com/ohmywans/2023-Hanium_KULLA/assets/104372864/afd64543-7366-4e6e-9f84-912a559b9dd2)
![give_one](https://github.com/ohmywans/2023-Hanium_KULLA/assets/104372864/4b5186ba-7c85-441e-8db1-6499cd1e8b69)
![take_one](https://github.com/ohmywans/2023-Hanium_KULLA/assets/104372864/8798dc7a-9ae4-4a56-9378-f8107148feea)
- give_take 에서 뻗어나가 [give_one -> 발신자 1, take_one -> 수신자 1], [giva_two -> 발신자 2, take_two -> 수신자 2] 로 구분합니다.
- Unlock / lock 으로 물품 보관함을 잠금/해제할 수 있습니다.
- 화면의 지도는 정적 사진으로 resource 에서 사진을 교체할 수 있고, 이는 QT designer 에서 수정 가능합니다.
- HMI를 만들어두어 디버깅도 편했고, 더욱 완성도 있는 프로젝트를 수행할 수 있게 되었습니다.





### ALB(Autonomous Logistics Bot) 
![noframe_front](https://github.com/ohmywans/2023-Hanium_KULLA/assets/104372864/3a1c4066-e611-417c-b651-067b9087fd82)


