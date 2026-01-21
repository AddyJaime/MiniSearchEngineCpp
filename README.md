# 🔍 Search Engine Mini (C++)

**A lightweight, high-performance text search engine built from scratch in modern C++**

---

## 📌 What is this project?

**Search Engine Mini** is a compact yet powerful text search engine implemented in modern C++.  
The goal of this project is to demonstrate how the **core logic behind search engines** works—without relying on frameworks, databases, or external libraries.

It focuses on fundamental computer science concepts such as **string processing, exact matching, normalization, and relevance scoring**, making it both an educational tool and a solid foundation for more advanced systems.

This project is ideal for learners who want to understand *how search engines think*, not just how to use them.

---

## 🧠 What does it do?

- 🔎 **Word-Based Search**  
  Searches text by individual words rather than raw strings.

- 🔡 **Case-Insensitive Matching (Normalization)**  
  Normalizes both text and queries so that `HELLO`, `Hello`, and `hello` are treated as the same word.

- 🎯 **Exact Word Matching**  
  Counts only full-word matches—no partial matches  
  (e.g., `cat` does **not** match `catalog`).

- 📊 **Relevance Scoring**  
  Calculates a relevance score based on how frequently a word appears relative to the total number of words, allowing results to be ranked intelligently.

- ⚡ **Efficient Processing**  
  Uses clean and optimized logic suitable for small to medium-sized text inputs.

---

## ⚙️ How it works (High-Level Overview)

1. The input text is read and split into individual words  
2. All words are normalized into a consistent format  
3. The search query is normalized the same way  
4. Each word is compared using **exact matching**  
5. Matches are counted precisely  
6. A relevance score is calculated based on frequency  
7. Results are displayed in a clear and readable format  

This mirrors the simplified logic used by real-world search engines.

---

## 🚀 How to Run the Project

### Prerequisites

- A C++ compiler (`clang++`, `g++`, or MSVC)
- macOS, Linux, or Windows
- Terminal access

### Step 1: Compile the Project

```bash
clang++ -std=c++17 main.cpp -o search_engine

```

### Step 2: Run the Project
```bash

Once the project is compiled, run the executable using the following command:

./search_engine
```

## Git

This repository includes a `.gitignore` that excludes binaries and temporary files (for example, `app`).

Basic Git commands to get started (if you haven't already):

```bash
git init
git add .
git commit -m "Initial commit: add README and .gitignore"
```

## Notes

- The `.gitignore` already contains common entries (binaries, editor/IDE files, local config, and secrets).
- If you'd like, I can add a build file (Makefile / CMake) or more detailed instructions—just tell me which you prefer.

Enjoy coding! ✅
