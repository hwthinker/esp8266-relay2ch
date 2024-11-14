# Modul ESP8266 ESP-12f Relay 2 Channel 
![1](./assets/1.png)

![2](./assets/2.png)

## Cara Aktifkan relay
- Hubungkan Jumper RY1 dan RY2 seperti gambar berikut
![3](./assets/3.png)



## Persiapan di Arduino

1. **Instal Arduino IDE**: Jika belum menginstal, unduh dan instal Arduino IDE dari website resmi Arduino.

2. **Tambahkan Board ESP8266 ke Arduino IDE**:

   - Buka **Arduino IDE**.

   - Pergi ke menu **File** → **Preferences**.

   - Di bagian 

     Additional Board Manager URLs, masukkan URL berikut:

     ```bash
     http://arduino.esp8266.com/stable/package_esp8266com_index.json
     ```

   - Klik **OK**.

   - Buka menu **Tools** → **Board** → **Boards Manager**.

   - Cari **ESP8266** dan instal paket yang ditampilkan.

3. **Pilih Board ESP8266**:

   - Pergi ke menu **Tools** → **Board**, lalu pilih board yang sesuai, seperti **NodeMCU 1.0 (ESP-12E Module)** atau board ESP8266 yang Anda gunakan.

4. **Pilih Port yang Tepat**:

   - Sambungkan ESP8266 ke komputer menggunakan kabel USB.
   - Pergi ke menu **Tools** → **Port** dan pilih port yang sesuai dengan ESP8266 Anda.



## Testing Relay

1. **Buat Sketsa Baru**:

   - Buka Arduino IDE, klik **File** → **New** untuk membuat sketsa baru.

2. Ketik Kode 

   ```c++
   #include <Arduino.h>
   
   // Definisikan pin LED
   #define LED_ESP 2
   #define RLY1 4
   #define RLY2 5
   
   
   void setup() {
     // Atur kedua pin sebagai output
     pinMode(LED_ESP, OUTPUT);
     pinMode(RLY1, OUTPUT);
     pinMode(RLY2, OUTPUT);
   }
   
   void loop() {
     // Nyalakan LED pada pin GPIO2 dan matikan LED pada pin GPIO4
     digitalWrite(LED_ESP, HIGH);
     digitalWrite(RLY1, HIGH);
     digitalWrite(RLY2, HIGH);
   
     delay(1000); // Tunggu selama 1 detik
   
     // Matikan LED pada pin GPIO2 dan nyalakan LED pada pin GPIO4
     digitalWrite(LED_ESP, LOW);
     digitalWrite(RLY1, LOW);
     digitalWrite(RLY2, LOW);
     delay(1000); // Tunggu selama 1 detik
   }
   ```

3. **Simpan Sketsa**:

   - Simpan sketsa dengan nama seperti `testing-relay.ino`.

     Cara download dengan jumper

![4](./assets/4.png)
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
![5](./assets/5.png)
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
![6](./assets/6.png)
- Pasang serial USB TTL dengan ketentuan:
    - RX -> RX USB Serial  
    - TX -> TX USB Serial 
    - GND -> GND USB Serial  
    - IO0 -> IO# USB Serial 
    - EN -> EN# USB Serial
- Pastikan supply 9VDC dihubungkan pin 7-80VDC
- Download program dan tunggu sampai selesai

