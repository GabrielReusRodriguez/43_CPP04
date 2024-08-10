NAME= ex03

OBJ_DIR = ./obj
CPP_FLAGS = -Wall -Werror -Wextra -g3 -fsanitize=address -MMD -MP -std=c++98

SRC_FILES= 	main			\
			AMateria		\
			Character		\
			Cure			\
			Ice				\
			MateriaSource	\


SRC = $(addsuffix .cpp, ${SRC_FILES})
OBJ = $(addprefix ${OBJ_DIR}/, $(addsuffix .o , ${SRC_FILES}))
DEP = $(addprefix ${OBJ_DIR}/, $(addsuffix .d , ${SRC_FILES}))

all : ${NAME}

${NAME}: ${OBJ}
	c++ ${CPP_FLAGS} ${OBJ} -o ${NAME}

${OBJ_DIR}/%.o : %.cpp Makefile
	@mkdir -p ${OBJ_DIR}
	c++ ${CPP_FLAGS} -c $< -o $@

clean:
	rm -f ${OBJ_DIR}/*.o
	rm -f ${OBJ_DIR}/*.d

fclean : clean 
	rm -f ${NAME}

re: fclean all

-include ${DEP}

.PHONY : all clean fclean re