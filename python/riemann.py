import mpmath

mpmath.mp.dps = 50

zeros = [mpmath.zetazero(n) for n in range(1, 11)]

for n, zero in enumerate(zeros, start=1):
    print(f"Zero {n}: {zero}")
