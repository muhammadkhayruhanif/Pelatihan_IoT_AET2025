# 📡 Pelatihan IoT AET 2025

Repositori ini berisi dokumentasi dan kode dari pelatihan **IoT** melalui **AET (Agriculture Engineering Training) 2025**. Fokus utama pelatihan ini adalah pembuatan sistem monitoring dan kontrol berbasis mikrokontroler menggunakan ESP8266, serta integrasi dengan platform cloud seperti ThingSpeak.

---

## 📘 Pelatihan yang Telah Diselesaikan

### ✅ Monitoring Suhu, Kelembaban, kelembaban tanah, dan Kendali Kipas

- Menggunakan sensor **DHT11** untuk mengukur suhu dan kelembaban.
- Data dikirim ke platform **ThingSpeak** secara real time.
- Sistem dapat mengontrol **kipas** menggunakan **relay** berdasarkan ambang suhu atau kelembaban.
- Koneksi internet melalui **ESP8266 (NodeMCU)**.
- Menggunakan sensor **Soil Moisture Capacitive** untuk mengukur kelembaban tanah
  
---

## 🧰 Komponen yang Digunakan

| Nama Alat             | Gambar | Kegunaan |
|-----------------------|--------|----------|
| **ESP8266 (NodeMCU)** | <img src="https://github.com/user-attachments/assets/cc9cc759-ca5a-4374-83e6-c7c4eb7fcb89" width="100"/> | Mikrokontroler dengan koneksi WiFi untuk mengirim data ke internet, seperti ke ThingSpeak. |
| **DHT11**             | <img src="https://github.com/user-attachments/assets/5675e142-3922-4eb5-aef7-15b5117bca85" width="100"/> | Sensor suhu dan kelembaban yang digunakan untuk monitoring lingkungan. |
| **Soil Moisture Sensor** | <img src="https://github.com/user-attachments/assets/d41ca34a-115d-4cbb-bf27-f0f46f6844b6" width="100"/> | Sensor kelembaban tanah yang digunakan untuk mendeteksi kondisi kering atau basah pada media tanam. |
| **Relay 1 Channel**   | <img src="https://github.com/user-attachments/assets/84d8ebb7-382d-4ba1-b30e-53f5011e9023" width="100"/> | Modul saklar elektronik yang digunakan untuk mengontrol perangkat AC/DC seperti pompa atau kipas. |

---

## 📟 Rangkaian

<p align="center">
  <img src="https://github.com/user-attachments/assets/1684347f-f586-42ca-a0fc-334d61cb8f0c" width="500"/>
</p>

---

## 📌 Catatan

- Kode disusun dan diuji pada lingkungan lokal dengan koneksi WiFi aktif.
- Harap perbarui `ssid`, `password`, dan `writeAPIKey` sesuai konfigurasi masing-masing saat menjalankan proyek.

---

📁 Untuk menjalankan kode, pastikan semua library yang dibutuhkan seperti `DHT` dan `ThingSpeak` telah terinstal di Arduino IDE.
