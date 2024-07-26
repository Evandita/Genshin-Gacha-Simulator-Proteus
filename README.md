# Genshin Gacha Simulator

Genshin Gacha Simulator adalah rangkaian yang menggunakan mikrokontroller Arduino untuk mensimulasikan mekanisme Gacha/Wishing yang terdapat pada Role-Playing Game terkenal, yakni `Genshin Impact`.

## Main Simulator

![](/img/main.png)

Dalam main simulator, tersedia 2 buah button, yakni untuk gacha 1 kali dan untuk gacha 10 kali, sama halnya yang terdapat pada mekanisme gacha aslinya. Terdapat juga button untuk reset, yang akan menghapus seluruh data yang tersimpan pada saat melakukan simulasi gacha. Di tengah rangkaian terdapat 10 16-segment Display untuk menampilkan nama karakter yang berhasil didapatkan pada saat proses gacha. Terdapat juga sejumlah LED yang mengelilinginya, yang akan menyala berdasarkan **tingkat kelangkaan** dari hasil yang didapatkan setelah melakukan gacha, yakni sebagai berikut:

- Apabila pemain mendapatkan bintang 3, maka **LED BIRU** akan menyala mengelilingi rangkaian dengan jeda animasi.

- Apabila pemain mendapatkan bintang 4, maka **LED UNGU** akan menyala mengelilingi rangkaian dengan jeda animasi.

- Apabila pemain mendapatkan bintang 5, maka **LED KUNING** akan menyala mengelilingi rangkaian dengan jeda animasi.

## Counter Simulator

![](/img/counter.png)

Counter simulator digunakan untuk menampilkan jumlah gacha yang telah dilakukan, beserta dengan karakter yang diperoleh pemain berdasarkan tingkat kelangkaannya. Terdapat juga counter `pity` yang mengindikasi jumlah gacha yang perlu dilakukan sebelum menjamin pemain untuk mendapatkan karakter dengan tingkat kelangkaan tertentu.

## Simulation

![](/img/simulation.png)

Gambar di atas merupakan hasil demonstrasi dari Genshin Gacha Simulator, dimana pemain berhasil mendapatkan karakter bintang 4 yang bernama "Ningguang".

# Hardware

Meskipun telah mengimplementasikan microcontroller, rangkaian digital tambahan perlu diimplementasikan karena Genshin Gacha Simulator tidak menggunakan LCD biasa untuk menampilkan teks, melainkan sejumlah komponen 16-Segment Display untuk tujuan estetika.

## Text Generator

![](/img/text.png)

Rangkaian ini cukup kompleks karena terlibat pada salah satu fitur utama Genshin Gacha Simulator, yakni menampilkan teks pada 10 16-Segment Display yang ada pada simulator. Rangkaian ini tidak hanya berperan dalam menampilkan teks, tapi juga berperan untuk menghasilkan animasi pada teks itu sendiri. Berikut merupakan penjelasan dari masing-masing bagian yang terdapat pada rangkaian kompleks ini:

### Binary to Ascii Converter

![](/img/binary2ascii.png)

Karena pin output yang digunakan pada mikrokontroller Arduino adalah pin digital, maka output hanya bisa bersifat **High** atau **Low**. Hal ini menyebabkan output dari microcontroller itu sendiri bersifat biner karena hanya memiliki 2 nilai, sehingga untuk mengkonversikan nilai biner itu menjadi huruf, maka diperlukan sebuah rangkaian untuk mengubahnya. Huruf yang tersedia pada alfabet sejumlah 26, sehingga bilangan biner yang diperlukan sebanyak 6 buah karena 2^6 akan menghasilkan sejumlah 32 kombinasi, yang dimana akan cukup untuk menghasilkan seluruh huruf yang diperlukan.

### Ascii Decoder

![](/img/asciiDisplay.png)

Untuk menampilkan Ascii pada komponen 16-Segment Display, maka sebuah konversi nilai perlu dilakukan lagi. Rangkaian Ascii Decoder berfungsi untuk menyambungkan seluruh huruf pada alfabet ke masing-masing pin input pada 16-Segment Display yang dibutuhkan untuk menampilan karakter yang sesuai.

### Animation Generator

![](/img/textAnimation.png)

Rangkaian ini berfungsi untuk mengatur jeda nyala matinya setiap huruf pada main simulator agar tercipta animasi ketika melakukan sebuah gacha. Rangkaian ini terdiri 10 kolom dan 16 baris flip-flop untuk mengatur 10 16-Segment Display yang terdapat pada main simulator.

## LED Color Generator

![](/img/led.png)

Rangkaian ini berguna untuk menciptakan animasi pada macam-macam warna LED yang menglilingi main simulator. Tugas dari rangkaian adalah untuk menciptakan animasi dari LED tersebut sebagai berikut:

- Apabila pemain berhasil mendapatkan karakter bintang 5, maka LED berwarna kuning akan menyala secara bergantian mengelilingi simulator.

- Apabila pemain berhasil mendapatkan karakter bintang 4, maka LED berwarna ungu akan menyala secara bergantian mengelilingi simulator.

- Apabila pemain berhasil mendapatkan karakter bintang 3, maka LED berwarna biru akan menyala secara bergantian mengelilingi simulator.

## Counter Machine

![](/img/counterMachine.png)

Rangkaian ini berfungsi untuk menyimpan data dari seluruh gacha yang telah dilakukan oleh pemain, serta memperbarui data tersebut apabila pemain ingin melakukan gacha lagi.





