Tugas 4 Pedestrian Traffic Light
Halo! Saya Nesa Dwi Cahyani dengan NIM H1H024024 dari Prodi Teknik Komputer Unsoed.

📌 Deskripsi Project

Project ini merupakan implementasi sistem kendali lampu lalu lintas penyeberangan jalan (Pedestrian Traffic Light) berbasis Arduino yang disimulasikan melalui Tinkercad. Project ini dirancang untuk mensimulasikan interaksi antara kendaraan dan pejalan kaki secara aman menggunakan logika mikrokontroler.

Sistem ini bekerja berdasarkan input (tombol penyeberangan) yang akan mengubah urutan nyala lampu pada sisi kendaraan dan sisi pejalan kaki sesuai dengan prosedur keselamatan lalu lintas yang berlaku.

🎯 Tujuan

Memahami implementasi sistem input-output digital pada Arduino.

Mempelajari logika transisi warna lampu lalu lintas (Merah, Kuning, Hijau).

Mengimplementasikan fungsi delay dan timing dalam mengatur durasi penyeberangan.

Mendokumentasikan hasil pengerjaan tugas mata kuliah Sistem Mikrokontroler.

⚙️ Logika Kerja Sistem

Sistem mengikuti urutan logika sebagai berikut:

Kondisi Awal: Lampu kendaraan berwarna Hijau dan lampu pejalan kaki berwarna Merah.

Saat Tombol Ditekan: Lampu kendaraan berubah menjadi Merah, sementara lampu pejalan kaki berubah menjadi Hijau.

Setelah Waktu Tertentu: Lampu pejalan kaki kembali menjadi Merah, dan lampu kendaraan memasuki fase Kuning (transisi).

Kembali ke Awal: Sistem kembali ke kondisi semula di mana lampu kendaraan Hijau dan lampu pejalan kaki tetap Merah.

🔗 Link Simulasi

Klik di sini untuk melihat simulasi di Tinkercad

📁 File yang Disertakan

File Skematik: Desain rangkaian elektronik.

File Program (.ino): Kode sumber logika kontroler.

Dokumentasi: Gambar/Video demo simulasi.
