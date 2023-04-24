start:-
    write("Enter the list ::"),nl,
    read(L),nl,
    write("Enter the nth position :: "),
    read(N),
    delete_nth(N,L,R),
    write("The list after deletion :: "),
    write(R).

delete_nth(1, [_|T], T).
delete_nth(N, [H|T], [H|R]) :-
    N > 1,
    N1 is N - 1,
    delete_nth(N1, T, R).
