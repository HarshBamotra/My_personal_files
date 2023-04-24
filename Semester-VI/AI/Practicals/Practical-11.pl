start:-
    write("Enter the list :: "),nl,
    read(L),nl,
    palindrome(L).
    

palindrome(L) :- 
    reverse(L, L).

reverse([], []).
reverse([X|Xs], Ys) :- 
    reverse(Xs, Zs), append(Zs, [X], Ys).


