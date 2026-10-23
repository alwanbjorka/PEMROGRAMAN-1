import math

base = 5
height = 12

side_a = height
side_b = base
side_c = int(math.sqrt(base**2 + height**2))

perimeter = side_a + side_b + side_c
area = int(0.5 * base * height)

print("Diketahui :")
print(f"Alas = {base} cm")
print(f"Tinggi = {height} cm")

print("Jawab :")
print(f"Sisi A = {side_a} cm")
print(f"Sisi B = {side_b} cm")
print(f"Sisi C = {side_c} cm")
print(f"Keliling = {perimeter} cm")
print(f"Luas = {area} cm")