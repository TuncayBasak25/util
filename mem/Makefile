# =======================
# User Configuration
# =======================
LIBNAME	= mem
SRC		= copy shift alloc realloc clone free free_null
LIB		= core math

# =======================
# Internals (Do not modify)
# =======================
NAME	= lib$(LIBNAME).a
CFILES	= $(addprefix src/, $(addsuffix .c, $(SRC)))
OFILES	= $(CFILES:.c=.o)
CC		= cc
AR		= ar
CFLAGS	= -Wall -Wextra -Werror
INCDIRS	= -Iinclude $(addprefix -I../,$(addsuffix /include, $(LIB)))

# =======================
# Rules
# =======================
all: $(NAME)

$(NAME): $(OFILES)
	$(AR) rcs $@ $^

%.o: %.c
	$(CC) $(CFLAGS) $(INCDIRS) -c $< -o $@

clean:
	rm -f $(OFILES)

fclean: clean
	rm -f $(NAME)

re: fclean all
