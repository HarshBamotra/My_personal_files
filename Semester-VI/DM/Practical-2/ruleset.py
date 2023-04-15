#!/usr/bin/env python 

def check_species(df):
    count = df["Species"].isin(["setosa", "versicolor", "virginica"]).shape[0]
    return len(df) - count, "Checking if all the species name are correct."
    
def check_positive(df):
    col = df.columns[:-1]
    violations = 0
    for i in col:
        violations += df[df[col] < 0].count()
    return sum(violations), "Checking if all the numerical values are positive."
        
def check_Plen(df):
    violations = 0
    for i in range(1, len(df)+1):
        if(df.loc[i, "Petal.Length"] < 2*df.loc[i, "Petal.Width"]):
            violations +=1
    return violations, "Checking if the petal length is twice as of it's width."
    
def check_Slen(df):
    violations = df[df["Sepal.Length"] > 30].count()
    return sum(violations), "Checking if the sepal lenght is valid."
    
    
def check_SP_com(df):
    violations = 0
    for i in range(1, len(df)+1):
        if(df.loc[i, "Sepal.Length"] < df.loc[i, "Petal.Length"]):
            violations +=1
    return violations, "Checking if the sepal length is not longer than the petal length."
