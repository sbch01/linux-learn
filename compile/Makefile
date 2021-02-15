#Този Makefile е разширение на Makefile.2, като е добавена верига от зависимости
#Вижда се в Makefile.2, че редове 21 и 24 се повтарят за да се избегне повторение 
#в дъното на файла се добавя т.н. верига от зависимости 
#
#


CC = gcc        	
FLAGS = -o      	
LINKER = -c			

MAIN_PRG = my_program 	
TRIG_PRG = cos_program 	 

all: $(MAIN_PRG) $(TRIG_PRG)

$(MAIN_PRG): prg.o val.o
	$(CC) $^ $(FLAGS) $@

%.o: %.c %.h      # Тук добавяме общия запис на повтарящите се редове това означава всички таргети .о i .c, .h
	$(CC) $< $(LINKER)

$(TRIG_PRG): cos.o val.o
	$(CC) $^ $(FLAGS) $@ -l m

cos.o: cos.c val.h
	$(CC) $< $(LINKER) -l m


#Тук добавяме изчистващи рецепти
	
clean: 
	@rm *.o $(MAIN_PRG) $(TRIG_PRG)
	@echo "Clean all generated files"

clear: 
	@rm *.o $(MAIN_PRG) $(TRIG_PRG)
	@echo "Clean all generated files"

# Тук разполагаме веригата от зависимости
# ----------------------------------------
prg.o   : prg.c val.h
val.o   : val.c
