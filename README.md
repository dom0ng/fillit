# fillit


### What is fillit?

Fillit is a project who let you discover and/or familiarize yourself with a recurring problematic in programming : searching for the optimal solution among a huge set of possibilities. In this particular project, you will be charged of creating an algorithm which fits some Tetriminos together into the smallest possible square.

The goal of this project is to arrange the Tetriminos among themselves to make the smallest possible square, but in some cases, this square may have holes when some given pieces won’t fit perfectly with others.

Program must display the smallest square solution on the standard output. To identify each Tetriminos in the square solution, you will assign a capital letter (starting with ’A’) to each Tetriminos in the order they appear in the file. A file will contain 26 Tetriminos maximum.

In order to build a project use a Makefile.

### How does it work?

	git clone https://github.com/dom0ng/fillit
	cd fillit
	make


Now to clean up (removing the .o files and the .c files from the root), call `make clean`
