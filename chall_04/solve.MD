# Challenge 04: Static Analysis

## Objective
Perform static analysis on the given binary file to uncover the hidden flag using basic Linux tools.

## Steps

### 1. Analyze File Properties
First, gather information about the file using the `file` command:

```bash
file <file_name>
```

**Understanding the Output:**
- **Executable**: The file can be run to perform its intended function
- **Not Stripped**: Debugging symbols and strings have not been removed during compilation, making analysis easier

### 2. Extract Strings from Binary
Since the binary is not stripped, extract all printable strings using the `strings` command:

```bash
strings <file_name>
```

**Hints for Analysis:**
- Look for strings that match common flag formats (e.g., `FLAG{...}`)
- The flag is likely embedded as a string literal in the source code
- Pay attention to thematic strings (anime references) that might hint at the flag's location
- Use `strings <file_name> | grep FLAG` to quickly filter for potential flags

This static analysis approach will help you find the Naruto-themed flag hidden in the binary!
