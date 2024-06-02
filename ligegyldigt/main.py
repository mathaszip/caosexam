import itertools
import pandas as pd

# Function to evaluate the original boolean expression
def original_expression(A, B, C):
    return (A & B) | (B & C & (B | C))

# Function to evaluate a custom boolean expression
def evaluate_expression(expression, A, B, C):
    return eval(expression)

# Generate all possible combinations of A, B, and C (0 and 1)
combinations = list(itertools.product([0, 1], repeat=3))

# Prepare the data for the original expression
data = []
for combo in combinations:
    A, B, C = combo
    original_result = original_expression(A, B, C)
    data.append([A, B, C, original_result])

# Create a DataFrame
df = pd.DataFrame(data, columns=['A', 'B', 'C', 'Original_Result'])

# Function to compare with a custom expression
def compare_with_custom_expression(custom_expression):
    custom_data = []
    for combo in combinations:
        A, B, C = combo
        custom_result = evaluate_expression(custom_expression, A, B, C)
        custom_data.append([A, B, C, custom_result])
    custom_df = pd.DataFrame(custom_data, columns=['A', 'B', 'C', 'Custom_Result'])
    return custom_df

# Example usage
custom_expression = 'B&(A|C)'  # Replace this with your custom expression
custom_df = compare_with_custom_expression(custom_expression)
merged_df = df.merge(custom_df, on=['A', 'B', 'C'])
merged_df['Match'] = merged_df['Original_Result'] == merged_df['Custom_Result']

print(f"Custom Expression Comparison", custom_expression)
print(merged_df.to_string())