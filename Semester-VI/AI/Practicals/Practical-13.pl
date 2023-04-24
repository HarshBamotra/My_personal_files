start:-
    write("Enter the list ::"),nl,
    read(L),nl,
    write("********** Menu **********"),nl,
    write("1. Check even"),nl,
    write("2. Check odd"),nl,
    write("Enter you choice :: "),
    read(C),
    (C =:= 1 -> evenlength(L);
    C =:= 2 -> oddlength(L);
    write("Wrong choice !! Exiting !!")).


evenlength([]). 
evenlength([_,_|T]) :- 
    evenlength(T). 


oddlength([_]). 
oddlength([_,_|T]) :- 
    oddlength(T). 