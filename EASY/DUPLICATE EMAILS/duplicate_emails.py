import pandas as pd

def duplicate_emails(person: pd.DataFrame) -> pd.DataFrame:
    duplicates = person.groupby('email').size()
    duplicates_emails =  duplicates[duplicates > 1].index
    return pd.DataFrame({'Email': duplicates_emails})