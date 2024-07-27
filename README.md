# Modul ESP8266 ESP-12f Relay 2 Channel 
![](https://github.com/hwthinker/esp8266-relay2ch/blob/main/picture/1.png)

![](https://github.com/hwthinker/esp8266-relay2ch/blob/main/picture/2.png)

## Cara Aktifkan relay
- Hubungkan Jumper RY1 dan RY2 seperti gambar berikut
![](https://github.com/hwthinker/esp8266-relay2ch/blob/main/picture/3.png)

## Cara download dengan jumper
![](https://github.com/hwthinker/esp8266-relay2ch/blob/main/picture/4.png)
- Pasang serial USB TTL dengan ketentuan: 
   - TX -> RX USB Serial (Kabel Putih)
   - RX -> TX USB Serial (Kabel Hijau)
   - GND -> GND USB Serial (Kabel Hitam)
- Pastikan supply 9VDC dihubungkan pin 7-80VDC
- pasang Jumper untuk menghubungkan IO0 terhubung GND
- Klik tombol reset (Tekan dan lepas tombol reset)
- Download program dan tunggu sampai selesai
- lepas jumper
- Klik tombol reset lagi untuk run-program
- ulang langkah awal bila melakukan download ulang lagi

## Cara download dengan button
![](https://github.com/hwthinker/esp8266-relay2ch/blob/main/picture/5.png)
- Pasang serial USB TTL dengan ketentuan:
   - TX -> RX USB Serial (Kabel Putih)
   - RX -> TX USB Serial (Kabel Hijau)
   - GND -> GND USB Serial (Kabel Hitam)
- Pastikan supply 9VDC dihubungkan pin 7-80VDC
- pasang push button dengan ujung yang satu ke pin IO0, ujung yang lain ke GND
- Tekan dan tahan push button IO0
- Klik tombol reset (Tekan dan lepas tombol reset) dengan tetap menahan pushbutton IO0
- lepas pushbutton IO0
- Download program dan tunggu sampai selesai
- Klik tombol reset lagi untuk run-program
- ulang langkah awal untuk download ulang

## Cara download dengan Serial USB auto Download
![](https://github.com/hwthinker/esp8266-relay2ch/blob/main/picture/6.png)
- Pasang serial USB TTL dengan ketentuan:
    - RX -> RX USB Serial  
    - TX -> TX USB Serial 
    - GND -> GND USB Serial  
    - IO0 -> IO# USB Serial 
    - EN -> EN# USB Serial
- Pastikan supply 9VDC dihubungkan pin 7-80VDC
- Download program dan tunggu sampai selesai

