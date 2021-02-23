ECHO=@echo
RM=@rm
COMP=g++
EDL=g++
RMFLAGS=-f
CPPFLAGS=-Wall -ansi -pedantic -std=c++11
DEBUGFLAGS= -DMAP -g
EDLFLAGS=
INT=automate.h lexer.h e0.h e1.h e2.h e3.h e4.h e5.h e6.h e7.h e8.h e9.h exprPlus.h exprMult.h exprVal.h exprPar.h entier.h etat.h
REAL=$(INT:.h=.cpp)
OBJ=$(INT:.h=.o)
EXE=exec
LIBS= #-lpthread ?
CLEAN=clean

.PHONY : $(CLEAN)

default : $(EXE)

debug: CPPFLAGS+= $(DEBUGFLAGS)
debug: $(EXE)

main.o : main.cpp
automate.o : automate.cpp automate.h
lexer.o : lexer.cpp lexer.h
e0.o : e0.cpp e0.h
e1.o : e1.cpp e1.h
e2.o : e2.cpp e2.h
e3.o : e3.cpp e3.h
e4.o : e4.cpp e4.h
e5.o : e5.cpp e5.h
e6.o : e6.cpp e6.h
e7.o : e7.cpp e7.h
e8.o : e8.cpp e8.h
e9.o : e9.cpp e9.h
exprPlus.o : exprPlus.cpp exprPlus.h 
exprMult.o : exprMult.cpp exprMult.h
exprPar.o : exprPar.cpp exprPar.h
exprVal.o : exprVal.cpp exprVal.h
entier.o : entier.h
etat.o : etat.h

%.o : %.cpp
	$(ECHO) compil de \<$@\>
	$(COMP) $(CPPFLAGS) -c $<


$(EXE) : $(OBJ) main.o
	$(ECHO) "edition des liens de <$(EXE)>"
	$(EDL) -o $(EXE) main.o $(OBJ) $(LIBS)

$(CLEAN) :
	$(RM) $(RMFLAGS) $(OBJ) $(EXE) core

#options de make :
#	-s silence
#	-t touch
#	-p toutes les régles implicites + info du makefile dans le meme dossier
#	-i ingore errors in commands
#	-k keep going after erros
