import sys

def factorial(n):
    if n <= 1:
        return 1
    return n * factorial(n - 1)

i = int(sys.argv[1])

print(f'factorial({i}) = {factorial(i)}')

# for i in range(22):
#     print(f'{i}! = {factorial(i)}')
