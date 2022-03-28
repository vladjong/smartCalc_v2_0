S=--suppress=
CC=g++
FLAGS=-lgtest -lstdc++ -std=c++17
WCHECK=-Werror -Wall -Wextra
BD=../build/
APP=$(BD)smartCalc_V2.app

SOURCES = ./smartCalc_V2/model/creditModel.cpp \
		./smartCalc_V2/main.cpp \
		./smartCalc_V2/view/plotOrEquationview.cpp \
		./smartCalc_V2/view/plotView.cpp \
		./smartCalc_V2/controller/smartCalcController.cpp \
		./smartCalc_V2/model/smartCalcModel.cpp \
		./smartCalc_V2/view/smartCalcView.cpp

HEDERS 	= ./smartCalc_V2/model/creditModel.h \
		./smartCalc_V2/view/plotOrEquationview.h \
		./smartCalc_V2/view/plotView.h \
		./smartCalc_V2/controller/smartCalcController.h \
		./smartCalc_V2/model/smartCalcModel.h \
		./smartCalc_V2/view/smartCalcView.h

make: build
	open $(APP)

build: $(BD)smartCalc_V2.pro font
	cd $(BD); qmake smartCalc_V2.pro
	make -C $(BD)

./$(BD)smartCalc_V2.pro:
	cp smartCalc_V2.pro $(BD)

./$(BD)%.o: */%.cpp
	$(CC) $(FLAGS) $< -o $@

install: build
	@mkdir $(HOME)/Applications/Smartcalc_v2.0/
	cp -rf $(APP) $(HOME)/Applications/Smartcalc_v2.0/
	cp -R fonts $(HOME)/Applications/Smartcalc_v2.0/
	make clean


uninstall:
	rm -rf $(HOME)/Applications/Smartcalc_v2.0/

font:
	cp -R fonts $(BD)

dvi:
	open documentatuon.html

dist:
	tar -cvf $(HOME)/Applications/Smartcalc_v2.0/../Smartcalc_v2.0.tar $(HOME)/Applications/Smartcalc_v2.0/
	gzip $(HOME)/Applications/Smartcalc_v2.0/../Smartcalc_v2.0.tar

cpplint:
	python3 ../materials/linters/cpplint.py --extensions=cpp $(SOURCES) $(HEDERS)

cppcheck:
	cppcheck --enable=all $(S)unusedFunction $(S)constParameter $(S)syntaxError $(S)missingInclude $(S)unknownMacro $(SOURCES) $(HEDERS)

test:
	$(CC) test.cpp $(FLAGS) $(WCHECK) -o test
	./test

gcov_report: 
	@$(CC) -lgtest --coverage test.cpp $(FLAGS) $(WCHECK) -o test
	@./test
	lcov -t "test" -o test.info -c -d ./
	genhtml -o report test.info
	open report/index.html

clean:
	rm -rf *.o *.out *.a *.gcda *.gcno *.info test
	rm -rf ./report/
	rm -rf ./$(BD)*
