start:-
    write("Enter the number ::"),
    read(N),nl,
    write("Enter the power ::"),
    read(P),nl,
    power(N,P,R),
    write(N),write(" to the power "),
    write(P),write(" is :: "),
    write(R).

power(_, 0, 1).

power(Num, Pow, Ans) :-
    Pow > 0,
    Pow1 is Pow - 1,
    power(Num, Pow1, Ans1),
    Ans is Num * Ans1.
    