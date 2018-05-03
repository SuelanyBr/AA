# -*- coding: utf-8 -*-
dicionario = {}
deads = {}

while(True):
	try:
		x= raw_input()
		if(x == ''): break
		ass,dead = x.split(" ")
	
		deads[dead] = 1
		c = ass in deads.keys()
		b = ass in dicionario.keys()
		
		if( not(c) and b ):
			dicionario[ass] += 1
		elif (not(b) and not(c)):
			dicionario[ass] = 1
		
		if(dead in dicionario.keys()):
			del dicionario[dead]
			
		
		
	except EOFError:
		break
        

print("HALL OF MURDERERS")

for key in sorted(dicionario):
	print("%s %d" % (key, dicionario[key]))
