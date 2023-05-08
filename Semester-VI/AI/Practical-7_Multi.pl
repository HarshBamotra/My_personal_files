start:-
    write('Enter the first number ::'),
    read(N1),nl,
    write('Enter the second number ::'),
    read(N2),nl,
    multi(N1, N2, R),
    write('Multiplication Result :: '),write(R).

multi(N1,N2,R):-
    R is N1*N2.
    
