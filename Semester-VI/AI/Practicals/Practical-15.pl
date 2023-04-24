start:-
    write("Enter the list :: "),nl,
    read(L),
    maxlist(L,M),
    write("The maximum number in the list :: "),
    write(M).

maxlist([X], X).
maxlist([H|T], M) :-
    maxlist(T, M1), 
    M is max(H, M1).
