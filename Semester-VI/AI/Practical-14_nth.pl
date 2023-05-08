start:-
    write("Enter the list ::"),nl,
    read(L),nl,
    write("Enter the position to check ::"),
    read(N),nl,
    nth_element(N,L,X),
    write("The element at position "),write(N),
    write(" :: "), write(X).


nth_element(1,[X|_],X).
nth_element(N,[_|T],X) :- 
  N > 1, 
  M is N - 1, 
  nth_element(M,T,X).
