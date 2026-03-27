# Challenge 05: Static Strings CTF

## Objective
Perform static analysis on a compiled binary to recover a hidden flag. The target is not stripped, so string analysis should reveal the secret.

## Step-by-Step Approach

### 1. Inspect the binary
Use `file` to check type and metadata:

```bash
file <file_name>
```

- **Executable**: can run on the host
- **Not stripped**: symbol metadata is available, making analysis easier

### 2. Look for embedded text
Extract printable strings and locate the flag-related content:

```bash
strings <file_name>
```

### 3. Find the encoded clue
You should see a Base64-looking token inside the output.

Hint: The final flag is not shown directly; it is encoded and hidden inside the binary text.

### 4. Decode the Base64 clue
Use CyberChef or local tools:

```bash
echo "<base64_string>" | base64 --decode
```

Or online:
- https://gchq.github.io/CyberChef/
- Recipe: **From Base64**

## Expected Result
- The extracted and decoded payload should reveal: `FLAG{HINOKAMI_KAGURA_REVEALED}`

---

## Quick command sequence

```bash
file challenge_05
strings challenge_05
strings challenge05 | grep -E "[A-Za-z0-9+/]{20,}="
echo "<base64_string>" | base64 --decode
```

## Extra tip
If the hidden flag is missing, try `strings -a` and `objdump -s -j .rodata` to inspect the read-only data region.
 
