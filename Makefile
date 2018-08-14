NAME = awesomeprog	// defining a variable called NAME

SRC = source.c	//defined a 2nd variable called SRC which will gather all C sources I want to compile
// Below I have 5 rules that are pretty standard
All: $(NAME)

$(NAME):
	Gcc -o $(NAME) $(SRC)

Clean:
	/bin/rm -f *.o	//removes all object files (.o) generated during compiling

fclean: clean
	/bin/rm -f $(NAME)	//deleting of the generated executable

Re: fclean all	//reset of the compilation meaning starting all over again in a clean environment