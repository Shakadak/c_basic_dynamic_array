DARRAY	:=	darray_back.c \
			darray_basic.c \
			darray_mem.c

OBJ := $(OBJ) $(DARRAY:.c=.o)

$(DIROBJ)/%.o: $(DIRDARRAY)/%.c
	$(COMPIL)
