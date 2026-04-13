build-wsl:
	gcc -fsanitize=address,undefined app.c string.c -o program

build:
	gcc -g -Wall app.c string.c -o program.exe

run-wsl:
	ASAN_OPTIONS=detect_leaks=1 ./program

run:
	./program.exe

clean-wsl:
	rm -r ./program

clean:
	rm -r ./program.exe
	clear