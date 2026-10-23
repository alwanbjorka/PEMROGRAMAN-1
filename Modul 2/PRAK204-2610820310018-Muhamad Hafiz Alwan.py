try:
     baris = input().split()
     if len(baris) == 2:
         r, t = map(float, baris)
     else:
         r = float(baris[0])
         t = float(input())
except:
    pass

phi = 22 / 7

volume = phi * (r ** 2) * t
luas = 2 * phi * r * (r + t)
keliling = 2 * phi * r

print(f"Volume = {volume:.2f}")
print(f"Luas = {luas:.2f}")
print(f"Keliling = {keliling:.2f}")