# esp8266

---
## 아래 내용은 ESP8266칩이 장착된 NodeMCU1.0보드에 대한 사용 설명입니다.

---
### 관련자료링크  
- [ESP8266, NodeMCU](https://jpralves.net/post/2016/11/15/esp8266.html#.WhoEskpl8uU)  
- [ESP8266 serial WIFI Witty cloud Development Board ESP-12F module MINI nodemcu](https://jpralves.net/post/2016/11/15/esp8266.html#gizwits-wifi-witty-esp8266-esp-12f)  

---
### 예제  
- [example/CdSLED.ino](https://github.com/mtinet/esp8266/blob/master/example/CdSLED.ino) - A0 핀과 연결된 내장 CdS로 들어오는 값을 통해 내장LED를 제어하는 예제  
- [example/buttonLED.ino](https://github.com/mtinet/esp8266/blob/master/example/buttonLED.ino) - 4번 핀과 연결된 내장 button으로 들어오는 값을 통해 내장LED를 제어하는 예제  

---
### 사용전 세팅방법  
- Arduino IDE 설치  
- 툴 - 보드 - 보드매니터 - esp8266 검색 - 클릭 후 install  
- 보드를 컴퓨터에 USB케이블로 연결  
- 보드를 선택 - NodeMCU 1.0(ESP-12E Module), ESP-12F는 ESP-12E모델의 성능 향상 모델이므로 함께 사용가능  
- 포트를 선택 - 연결된 포트를 확인한 후 선택  
- 아래 사진의 pinout을 확인한 후 스케치를 작성하고 업로드  


---
### 제품사진  
![](https://github.com/mtinet/esp8266/blob/master/image/gizwits_pinout_67.jpg?raw=true)
![](https://github.com/mtinet/esp8266/blob/master/image/gizwits-wifi-witty-esp8266-esp_1.jpg?raw=true)
![](https://github.com/mtinet/esp8266/blob/master/image/gizwits_dimensions_24.jpg?raw=true)
![](https://github.com/mtinet/esp8266/blob/master/image/gizwits_pinout_66.jpg?raw=true)
