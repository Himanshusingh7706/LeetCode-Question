# Remove Outermost Parentheses (C++ Solution)

## 📝 Problem Statement
A **valid parentheses string** is either:
- `""` (empty string),
- `"(" + A + ")"`, where `A` is a valid parentheses string, or
- `A + B`, where `A` and `B` are valid parentheses strings.

For example:
- Valid: `""`, `"()"`, `"(())()"`, `"(()(()))"`
- Invalid: `"())("`, `"(()"`

A **primitive valid parentheses string** is a non-empty valid parentheses string that **cannot** be split into two smaller valid strings.  
- Example: `"()"` and `"(())"` are primitive  
- Example: `"()()"` is **not** primitive (it splits into `"()" + "()"`)

---

### Task
Given a valid parentheses string `s`, decompose it into primitive strings and **remove the outermost parentheses** of each primitive.  
Return the resulting string.

---

## 🔍 Examples

### Example 1
**Input:**  
