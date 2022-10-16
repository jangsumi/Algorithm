n = int(input())

for i in range(1, n+1):
    print("*" * i + " " * (n*2-(2*i)) + "*" * i)

for i in range(1, n+1):
    print("*" * (n-i) + " "*(2*i) + "*" *(n-i))