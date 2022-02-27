# Desain Pemrograman Berorientasi Objek

>Saya Cahya Gumilang (2003128) mengerjakan tugas LATIHAN3DPBO2022 dalam mata kuliah Desain dan Pemrograman Berbasis Objek untuk keberkahanNya maka saya tidak melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin.

Repository ini berisikan Latihan 3 pada mata kuliah Desain Pemrograman Berorientasi Objek tahun 2022. Di dalamnya terdapat beberapa implementasi Composition dalam bahasa  **C++**, **Java**, **PHP**, dan **Python**.

Modul dapat ditemukan di [Modul 3 - Composition](https://docs.google.com/document/d/1MIWVuyELNlAHzQQZp-9iOnOIrka_som8/edit)

### Usage

#### C++
```
g++ -c *.cpp
g++ main.cpp -o [filename].exe
```

#### Java
```
javac *.java
java Main
```

#### PHP
- Letakkan Folder yang berisi kode PHP di folder htdocs pada folder XAMPP
- Buka XAMPP dan jalankan Apache Web Server
- Buka Browser dan buka alamat berikut<br>
```localhost/[nama-folder]```

#### Python
```
py [filename].py
```

## Penjelasan Latihan
Project ini memiliki 4 kelas yaitu `Processor`, `Disk`, `Ram`, dan `Pc`. Kelas `Pc` Memiliki kelas `Processor`, `Disk`, dan `Ram`. Adapun atribut - atribut dari setiap kelas adalah sebagai berikut.
- `Processor`
    - name  (string)
    - price  (integer)
- `Disk`
    - type (string) 
    - capacity (integer)
    - price (integer)
- `Ram`
    - capacity (integer) 
    - price (integer)
- `Pc`
    - processor (Object dari kelas `Processor`)
    - disk (Object dari kelas `Disk`)
    - ram (Object dari kelas `Ram`)
    - totalPrice (integer)

attribute totalPrice pada kelas `Pc` diambil dari total penjumlaha dari attribute price pada kelas `Processor`, `Disk`, dan `Ram`.

## Screenshots Program
1. C++

![c++](/screenshots/cpp.png)

2. Java

![java](/screenshots/Java.png)

3. PHP

![PHP](/screenshots/php.png)

4. Python

![py](/screenshots/py.png)