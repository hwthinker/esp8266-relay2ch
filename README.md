# Modul ESP8266 ESP-12f Relay 2 Channel 
![](https://github.com/hwthinker/esp8266-relay2ch/blob/main/picture/1.png)

![](https://github.com/hwthinker/esp8266-relay2ch/blob/main/picture/2.png)
## Cara download dengan jumper
- Pasang serial USB TTL dengan ketentuan RX -> TX USB Serial ; TX -> RX USB Serial; GND -> GND USB Serial
- 5V -> 5V USB Serial
- pasang Jumper untuk menghubungkan IO0 terhubung GND
- Klik tombol reset (Tekan dan lepas tombol reset)
- Download ke alat dan tunggu sampai selesai
- lepas jumper
- Klik tombol reset lagi untuk run-program
- ulang langkah awal bila melakukan download ulang


## Cara download dengan button
- Pasang serial USB TTL dengan ketentuan RX -> TX USB Serial ; TX -> RX USB Serial; GND -> GND USB Serial
- 5V -> 5V USB Serial
- pasang push button dengan ujung yang satu ke pin IO0, ujung yang lain ke GND
- Tekan dan tahan push button IO0
- Klik tombol reset (Tekan dan lepas tombol reset) dengan tetap menahan pushbutton IO0
- lepas pushbutton IO0
- Download ke alat dan tunggu sampai selesai
- Klik tombol reset lagi untuk run-program
- ulang langkah awal untuk download ulang

## Cara Aktifkan relay
- Hubungkan Jumper RY1 dan RY2 seperti gambar berikut
![](https://github.com/hwthinker/esp8266-relay2ch/blob/main/picture/3.png)


## cara push file di github 
- echo "# esp8266-relay-1ch" >> README.md 
- git init git add README.md 
- git commit -m "first commit" 
- git branch -M main 
- git remote add origin git@github.com:hwthinker/esp8266-relay-1ch.git 
- git push -u origin main 

### push an existing repository from the command line 
- git remote add origin git@github.com:hwthinker/esp8266-relay-1ch.git 
- git branch -M main git push -u origin main

### contoh markdown editor
- https://pandao.github.io/editor.md/en.html
