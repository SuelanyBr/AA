dicionario = {}
List_deads = [0]
x = raw_input()
index = 0
while(x):
	ass,dead = x.split(" ")
	
	if(ass in dicionario.keys()):
		dicionario[ass] += 1
	else:
		dicionario[ass] = 1	
	
	List_deads.insert(index,dead)
	index = index +1
	
	x = raw_input()

for i in List_deads:
	if(i in dicionario.keys()):
		del dicionario[i]	

print("HALL OF MURDERERS")
print(dicionario)
dicionario.keys().sort()
print(type(dicionario.keys()))
