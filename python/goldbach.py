import sympy

def goldbach(n):
    if n <= 2 or n % 2 != 0:
        return False

    for i in range(2, n):
        if sympy.isprime(i) and sympy.isprime(n - 1):
            return (i, n - 1)
    return None

for num in range(4, 21, 2):
    result = goldbach(num)
    if result:
	    print(f"{num} = {result[0]} + {result[1]}")
    else:
	    print(f"Pair not found for pair {num}")
