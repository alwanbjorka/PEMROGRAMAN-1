while True:
    print("Pilih program")
    print("1. Penjumlahan")
    print("2. Pengurangan")
    print("3. Perkalian")
    print("4. Pembagian")
    print("5. Exit")
    
    pilihan = int(input("Masukkan Pilihan : "))
    
    if pilihan == 5:
        print("Terimakasih, telah menggunakan kalkulator Muhamad Hafiz Alwan")
        break
    elif pilihan >= 1 and pilihan <= 4:
        nil1 = float(input("Masukkan nilai pertama: "))
        nil2 = float(input("Masukkan nilai kedua: "))
        
        if pilihan == 1:
            hasil = nil1 + nil2
            print(f"Hasil penjumlahan antara {nil1:.2f} dengan {nil2:.2f} adalah {hasil:.2f}")
        elif pilihan == 2:
            hasil = nil1 - nil2
            print(f"Hasil pengurangan antara {nil1:.2f} dengan {nil2:.2f} adalah {hasil:.2f}")
        elif pilihan == 3:
            hasil = nil1 * nil2
            print(f"Hasil perkalian antara {nil1:.2f} dengan {nil2:.2f} adalah {hasil:.2f}")
        elif pilihan == 4:
            hasil = nil1 / nil2
            print(f"Hasil pembagian antara {nil1:.2f} dengan {nil2:.2f} adalah {hasil:.2f}")
    else:
        print("Input anda salah, silahkan coba lagi")