start:-
    write("Enter the list ::"),nl,
    read(L),nl,
    sumlist(L,S),
    write("The sum of the given list :: "),
    write(S).

% The sum of an empty list is 0
sumlist([], 0).    

% The sum of a non-empty list is the sum of its tail plus the head
sumlist([X|Xs], S) :- 
    sumlist(Xs, S0), 
    S is S0 + X.   

