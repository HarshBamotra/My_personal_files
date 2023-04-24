start:- 
    write("Enter the list ::"),nl,
    read(L),nl,
    write("Enter the element to insert :: "),
    read(I),nl,
    write("Enter the position :: "),
    read(X),nl,
    insert_nth(I,X,L,R),
    write("The list after insertion :: "),
    write(R).


% Base case: if N is 1, insert I at the beginning of L to generate R
insert_nth(I, 1, L, [I|L]).

% Recursive case: if N is greater than 1, recursively insert I at position N-1 in the tail of L
insert_nth(I, N, [X|L], [X|R]) :- 
    N > 1, 
    N1 is N-1, 
    insert_nth(I, N1, L, R).
