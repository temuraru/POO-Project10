# POO-Project10
Project 10 from POO - FMI-Unibuc - ID, An I, Sem. II

10.	Structură ierarhică de clase privitoare la figuri plane, care conţine  o clasă abstractă, din care derivă clase care reprezintă: puncte (date prin perechi de coordonate exprimate în pixeli, perechile fiind date cu ajutorul  unei structuri definite separat);  segmente orizontale  (date prin 3 numere reprezentând ordonata comună şi cele două abscise ale capetelor, exprimate în pixeli);  segmente verticale  (date prin 3 numere reprezentând abscisa comună şi cele două ordonate ale capetelor, exprimate în pixeli); dreptunghiuri (date printr-un punct reprezentând vârful din stânga sus şi două numere reprezentând laturile dreptunghiului, exprimate în pixeli). Operatorii +, * sunt supraîncărcaţi cu operaţiile de translaţie, respectiv de scalare (adică modificarea fiecărei coordonate a punctelor figurii prin înmulţirea cu un număr real numit factor de scalare ataşat respectivei coordonate). Ambele operaţii au primul operand o figură, iar al doilea operand o pereche de numere reprezentând  vectorul de translaţie, respectiv perechea de factori de scalare, rezultatul fiind o figură. Operaţiile se dau ca metode virtuale pure în clasa abstractă şi se definesc pentru fiecare clasă reprezentând figuri particulare. Se vor scrie metode de afişare a figurilor, prin supradefinirea unei metode virtuale pure din clasa abstractă, utilizându-se funcţii din bibliotecile grafice. Clasa abstractă are o dată membră de tip int reprezentând tipul de figură, iar fiecare constructor al unei clase derivate dă acestui câmp o valoare proprie clasei: 0 pentru puncte, 1 pentru segmente orizontale , 2 pentru segmente verticale , 3 pentru dreptunghiuri.


Cerinţe comune:
Toate clasele vor trebui să aibă constructor fără argumente, constructor de copiere, cel puţin încă un constructor, destructor şi metode de citire a datelor de la consolă.


Se vor putea propune şi alte teme de către studenţi, îndeplinind următoarele condiţii:
-	cerinţele comune de mai sus;
-	supraîncărcarea mai multor funcţii şi operatori, dintre care operatorul de atribuire şi cel puţin încă 2 operatori;
-	se utilizează clase generice sau clase abstracte şi moştenire.


La o temă pot lucra până la 3 studenţi, urmând ca examinarea şi verificarea cunoştinţelor să se facă individual.
