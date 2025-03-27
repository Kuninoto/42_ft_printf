# ft_printf (42Porto - 42Cursus)  

## Grade: 100/100

### Description:

Libc's printf() basic replica.  

#### ft_printf() supported specifiers:  
`%c` - Prints a single character  
`%s` - Prints a string  
`%p` - Prints a pointer adress  
`%d` or `%i` - Prints a signed integer  
`%u` - Prints an unsigned integer  
`%x` or `%X` - Prints an unsigned integer in hexadecimal format  

### Installing and running the project:

1- Clone this repository
	
	git clone https://github.com/Kuninoto/42_ft_printf
2- Run `make`

   	make
3- Run `make clean` so that you don't keep the object files that you won't need anymore

	make clean
4- Compile your project (e.g. `main.c`) with your new `libftprintf.a`

	cc -Wall -Wextra -Werror main.c libftprintf.a

#### Makefile:  
Being `ft_printf()` an addition to the personal library started on [Libft](https://github.com/Kuninoto/42_Libft), the provided Makefile compiles them together.

##### Available targets

`make` or `make all` - Makes `libftprintf.a`  
`make clean` - Deletes all the resulting object files  
`make fclean` - Deletes `libftprintf.a` and all the resulting object files  
`make re` - Deletes everything (object files and `libftprintf.a`) and rebuilds `libftprintf.a`  

##### To keep track of what's inside your resulting `libftprintf.a` run `ar -t libftprintf.a`  

### Tests:  
[printfTester](https://github.com/Tripouille/printfTester)  
<img src="https://github.com/Kuninoto/42_ft_printf/blob/master/extras/printfTester.png" width="80%"/>

## Disclaimer
> At [42School](https://en.wikipedia.org/wiki/42_(school)), almost every project must be written in accordance to the "Norm", the schools' coding standard. As a result, the implementation of certain parts may appear strange and for sure had room for improvement.
---
Made by Nuno Carvalho (Kuninoto) | nnuno-ca@student.42porto.com  
<div id="badge"> <a href="https://www.linkedin.com/in/nuno-carvalho-218822247"/> <img src="https://img.shields.io/badge/LinkedIn-blue?style=for-the-badge&logo=linkedin&logoColor=white" alt="LinkedIn Badge"/>&nbsp;
