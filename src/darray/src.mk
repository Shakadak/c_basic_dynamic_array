DARRAY	:=	darray_dimensions.c \
			darray_expand.c \
			darray_init.c \
			darray_push.c

OBJ := $(OBJ) $(DARRAY:.c=.o)

$(DIROBJ)/%.o: $(DIRDARRAY)/%.c
	$(COMPIL)
