start:-
    write("Enter the list :: "),nl,
    read(L),nl,
    write("The list after reversal :: "),
    reverse(L, R),
    write(R).

reverse([], []).

reverse([H|T], R) :- 
    reverse(T, RevT), 
    append(RevT, [H], R).