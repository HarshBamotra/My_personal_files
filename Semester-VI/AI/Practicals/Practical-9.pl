start:-
    write("Enter the first list ::"),nl,
    read(L1),nl,
    write("Enter the second list ::"),nl,
    read(L2),nl,
    cone(L1,L2,L3),
    write("List after concatenation :: "),
    write(L3).

cone([], L2, L2).
cone([X|Xs], L2, [X|Ys]) :-
    cone(Xs, L2, Ys).