def primeSum(m, n):
    primes = []
    for i in range(m, n+1):
        if is_prime(i):
            primes.append(i)
    return sum(primes)

def is_prime(num):
    if num < 2:
        return False
    for i in range(2, num):
        if num % i == 0:
            return False
    return True
def factorize(num):
    return [str(n) for n in range(1, num + 1) if num % n == 0]
m = int(input())
n = int(input())
print(" ".join(factorize(primeSum(m, n))))
