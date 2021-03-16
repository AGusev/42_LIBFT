**42 School Silicon Valley Project**

**Libft**
======================== 
My implementation of some C Standart Library (LIBC) functions including additionals.

**Contents**
-----------------------
* [What is libft](#what-is-libft)
* [What inside the libft](#what-inside-the-libft)
* [How does the libft work](#how-does-the-libft-work)


**What is libft**
-----------------------
LIBFT is a project at 42 Silicon Valley that requires re-create C Standart Library that would be used later in my projects.

**What inside the libft**
-----------------------------
1. *Libc Functions:* Standard C functions
2. *Additional functions:* Useful functions
3. *Extra Functions: *

Libc functions | Additional functions | Extra functions   |
:----------- | :----------------------| :-----------------|
memset	     |    ft_memalloc         |   ft_lstnew
bzero		     |    ft_memdel	          |   ft_lstdelone
memcpy		   |    ft_strnew	          |   ft_lstdel
memccpy	     |    ft_strdel           |   ft_lstadd
memmove	     |    ft_strclr	          |   ft_lstiter
memchr		   |    ft_striter          |   ft_lstmap
memcmp	     |    ft_striteri         |   ft_isspace
strlen		   |    ft_strmap           |   ft_list_size
strdup		   |    ft_strmapi	        |
strcpy		   |    ft_strequ           |
strncpy			 |    ft_strnequ	        |
strcat		   |    ft_strsub	          |
strlcat	     |    ft_strjoin          |
strchr		   |    ft_strtrim          |
strrchr      |    ft_strsplit         |
strstr		   |    ft_itoa             |
strnstr	     |    ft_putchar	        |
strcmp		   |    ft_putstr           |
strncmp		   |    ft_putendl          |
atoi	       |    ft_putnbr	          |
isalpha		   |    ft_putchar_fd       |
isdigit	     |    ft_putstr_fd        |
isalnum		   |    ft_putendl_fd       |
isascii		   |    ft_putnbr_fd        |
isprint		   |                        |
toupper		   |                        |
tolower		   |                        |


**How does the libft work**
------------------------------

Download/clone the project, **cd** into the project, copy all the files from the subdirectiry to the root directory and finally, call make:

	cd libft
	make

You should see a *libft.a* file and some object files (.o).

To remove the library:
1. call `make clean` (removing the .o files from the root).
2. call `make fclean` (removing the .o and .a files from the root).
