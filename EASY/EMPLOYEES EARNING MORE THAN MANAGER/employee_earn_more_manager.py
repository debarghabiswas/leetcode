import pandas as pd

def find_employees(employee: pd.DataFrame) -> pd.DataFrame:
    merged = employee.merge(employee, left_on='managerId', right_on='id', suffixes=('', '_manager'))
    
    high_earners = merged[merged['salary'] > merged['salary_manager']]

    result = pd.DataFrame({'Employee': high_earners['name'].values})

    return result