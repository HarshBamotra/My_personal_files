def check_age(df):
    errors = df[(df["Age"] < 0) or (df["Age"] > 150)].shape[0]
    return errors, "Checking if age is with the range."
    
def check_age_2(df):
    errors = df[(df["Age"] > df["YearsMarried"])].shape[0]
    return errors, "Checking if the age is valid."  
    
def status_check(df):
    errors = df[df["Status"] not in ["single", "married", "widowed"]].shape[0]
    
def check_age_group(df):
    errors = 0
    for i in range(df.shape[0]):
        if((df.iloc[i, 0] < 18) and (df.iloc[i, 1] != "child")):
            errors+=1
        elif((df.iloc[i, 0] > 18 and df.iloc) and (df.iloc[i, 1] != "child")):
            errors+=1
       

