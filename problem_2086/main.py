MOD = 10**9

def matrix_mul(A, B):
    return [
        [(A[0][0]*B[0][0] + A[0][1]*B[1][0]) % MOD,
        (A[0][0]*B[0][1] + A[0][1]*B[1][1]) % MOD],
        [(A[1][0]*B[0][0] + A[1][1]*B[1][0]) % MOD,
        (A[1][0]*B[0][1] + A[1][1]*B[1][1]) % MOD]
    ]

def matrix_pow(mat, pow):
    res = [[1, 0], [0, 1]]
    while pow > 0:
        if pow % 2 == 1:
            res = matrix_mul(res, mat)
        mat = matrix_mul(mat, mat)
        pow //= 2
    return res

def fibonacci(n):
    if n == 0:
        return 0
    matrix = [[1, 1], [1, 0]]
    res = matrix_pow(matrix, n - 1)
    return res[0][0]

a, b = map(int, input().split())
print((fibonacci(b + 2) - fibonacci(a + 1)) % MOD)