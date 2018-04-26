N = input()
LIST = raw_input().split(" ")
LIST2 = [int(i) for i in LIST]
LIST2.sort()

numeros = ""
for i in range(N):
	if i == N-1:
		numeros += str(LIST2[i])
	else:
		numeros += str(LIST2[i]) + " "

print numeros 