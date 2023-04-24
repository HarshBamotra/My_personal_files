start:-
    write("Enter the list ::"),nl,
    read(L),nl,
    write("Enter the number to check in the list ::"),
    read(X),nl,
    memboX(X,L).

memboX(X, [X|_]).
memboX(X, [_|T]) :- 
    memboX(X, T).