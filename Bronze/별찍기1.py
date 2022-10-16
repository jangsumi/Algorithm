i = int(input())

for n in range(1, i+1):
    for m in range(n):
        print("*", end="")
    print("")

# # 다른 방법
# for n in range(1, i+1):
#     print("*" * n)
