n = input()
A = set(map(int, input().split()))
m = input()
B = set(map(int, input().split()))
print(len(A.intersection(B)))