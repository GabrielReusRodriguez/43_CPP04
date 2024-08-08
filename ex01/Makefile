NAME = ex01

CPP_FLAGS = -Wall -Wextra -Werror -MMD -MP -std=c++98 -g1 -fsanitize=address

OBJ_DIR = ./obj

SRC_FILES = main	\
			Animal	\
			Cat		\
			Dog		\
			Brain

SRC = $(addsuffix .cpp, ${SRC_FILES})
OBJ = $(addprefix ${OBJ_DIR}/, $(addsuffix .o, ${SRC_FILES}))
DEP = $(addprefix ${OBJ_DIR}/, $(addsuffix .d, ${SRC_FILES}))

all: ${NAME}

${NAME}: ${OBJ}
	c++ ${CPP_FLAGS} ${OBJ} -o ${NAME}

${OBJ_DIR}/%.o : %.cpp Makefile
	@mkdir -p ${OBJ_DIR}
	c++ ${CPP_FLAGS} -c $< -o $@

clean:
	rm -f ${OBJ_DIR}/*.o
	rm -f ${OBJ_DIR}/*.d

fclean: clean
	rm -f ${NAME}

re: fclean all

-include ${DEP}

.PHONY: all re clean fclean