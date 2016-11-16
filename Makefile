gmbass.dll: gmbass.o
	gcc -shared -o gmbass.dll $^ -Lvendor/lib -lbass
	
%.o: %.c
	gcc -Ivendor/include -c $< -o $@
