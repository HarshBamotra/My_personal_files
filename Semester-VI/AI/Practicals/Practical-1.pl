start:-
    write("Enter the first number ::"),
    read(N1),nl,
    write("Enter the second number ::"),
    read(N2),nl,
    sum(N1,N2,R),
    write("The sum of numbers :: "),
    write(R).


sum(N1,N2,R):-
    R is N1+N2.