a = raw_input()
b = raw_input()
d = len(b) - len(a)

mat = [[0]*2 for i in range(len(b) + 1)]

mat[0][0] = 0
mat[0][1] = 0

num_0 = 0
num_1 = 0

for i in range(len(b)):
	if (b[i] == "0"):
		num_0 += 1
	else:
		num_1 += 1
	
	mat[i+1][0] = num_0
	mat[i+1][1] = num_1

soma = 0
for i in range(len(a)):
	for c in range(2):
		soma += abs((int(a[i]) - c)) * (mat[d + i + 1][c] - mat[i][c])


print(soma)
