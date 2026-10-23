import math

try:
    data = []
    while len(data) < 2:
        baris = input().split()
        for angka in baris:
            data.append(float(angka))

    A, B = data[0], data[1]

    tinggi = A
    miring = B
    alas = math.sqrt((miring ** 2) - (tinggi ** 2))
    keliling = alas + tinggi + miring
    luas = 0.5 * alas * tinggi

    print(f"Alas = {alas:.0f} cm")
    print(f"Tinggi = {tinggi:.0f} cm")
    print(f"Keliling = {keliling:.0f} cm")
    print(f"Luas = {luas:.0f} cm^2")
except Exception as e:
    pass