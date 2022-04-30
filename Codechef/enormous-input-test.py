n, k = map(int, input().split())
count = 0
while n > 0:
    num = int(input())
    if (num % k == 0):
        count += 1
    n = n - 1
print(count)   
