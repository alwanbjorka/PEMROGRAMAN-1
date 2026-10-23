data = []

while len(data) < 6:
    try:
        baris = input().split()
        for angka in baris:
            data.append(float(angka))
    except EOFError:
        break

a, b, i, j, x, y = data[:6]

hasil = (a - b) * i / j - (x + y)

print(f"{hasil:.3f}")