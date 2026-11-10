def Biodata(tahunLahir, Namaku, Asal):
    print(f"\nPerkenalkan Nama Saya : {Namaku}")
    tahun_sekarang = 2020
    umur = tahun_sekarang - tahunLahir
    print(f"Umur Saya : {umur}")
    print(f"Saya Adalah Angkatan : {tahun_sekarang}")
    print(f"Asal Saya dari : {Asal}")

tahunLahir = int(input())
A = input()
B = input()
Biodata(tahunLahir, A, B)