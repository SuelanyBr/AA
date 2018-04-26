while(1):
	D,N = raw_input().split(" ")
	NOVA = ""
	cont = 0
	qtd_0 = False
	if(D == "0" and N == "0"): break
	
	for i in N:
		if(i != D): 
			if(i != "0"):
				qtd_0 = True
			if(qtd_0):
				NOVA += i
		if(i == D):
			cont += 1
	
	if(NOVA == "" and cont != 0):
			print("0")
	else:
		print(NOVA)