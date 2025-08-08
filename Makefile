# =======================
# Configuration
# =======================

NAME = game
TYPE = exe
LIBS = pthread
SRCS  = main

# =======================
# VARIABLES
# =======================

CFILES  := $(addprefix src/, $(addsuffix .c, $(SRCS)))
OFILES  := $(CFILES:.c=.o)
CC      := cc
AR      := ar
CFLAGS  := -Wall -Wextra -Werror

ifeq ($(TYPE),lib)
INCDIRS := -Iinclude $(addprefix -I../,$(addsuffix /include, $(LIBS)))
OUT := lib$(NAME).a
else
INCDIRS := -Iinclude $(addprefix -Ilib/,$(addsuffix /include, $(LIBS)))
LDIRS   := $(addprefix -Llib/,$(LIBS))
LLIBS   := $(addprefix -l,$(LIBS))
OUT := $(NAME)
endif

# =======================
# VARIABLES
# =======================

all: $(OUT)

$(OUT): $(OFILES)
ifeq ($(TYPE),lib)
	$(AR) rcs $@ $^
else
	$(CC) $(CFLAGS) $(INCDIRS) $(LDIRS) -o $@ $^ $(LLIBS)
endif

%.o: %.c
	$(CC) $(CFLAGS) $(INCDIRS) -c $< -o $@

clean:
	rm -f $(OFILES)

fclean: clean
	rm -f $(OUT)

re: fclean all
