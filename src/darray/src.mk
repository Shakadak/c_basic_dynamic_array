DARRAY	:=	darray_dimensions.c \
			darray_expand.c \
			darray_init.c \
			darray_pop.c \
			darray_push.c \
			darray_retract.c

OBJ := $(OBJ) $(DARRAY:.c=.o)

$(DIROBJ)/%.o: $(DIRDARRAY)/%.c
	$(COMPIL)
