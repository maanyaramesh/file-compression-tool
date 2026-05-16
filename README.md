# ZipLite — File Compression Tool in C

📋 Overview

ZipLite is a full-stack file compression platform built using C, Python, and JavaScript. The project implements classic lossless compression algorithms such as Run-Length Encoding (RLE) and Huffman Coding while integrating a Python Flask backend and interactive frontend dashboard.

The system demonstrates systems programming, backend integration, API communication, and frontend visualization in a modular architecture.

---

# ✨ Features

## 🗜️ Compression Engine

- Run-Length Encoding (RLE)
- Huffman Coding
- File Compression & Decompression
- Heap-Based Huffman Tree Construction
- Compression Statistics Analysis
- Modular Compression Architecture

---

## ⚙️ Systems Programming

- Dynamic Memory Allocation
- Binary Trees
- Min Heap / Priority Queue Implementation
- Recursive Tree Traversal
- File Handling in C
- Multi-File Modular Architecture
- Command Line Interface (CLI)

---

## 🌐 Backend Integration

- Python Flask Backend
- REST API Communication
- Frontend ↔ Backend Integration
- C Executable Automation using Python
- File Upload Handling
- Compression Request Processing

---

## 🎨 Frontend Dashboard

- File Upload Interface
- Compression Analytics Visualization
- Compression Ratio Display
- Responsive UI Design
- Interactive Compression Dashboard
- Modern User Interface

---

# 💻 Tech Stack

## Core Compression Engine

- C Programming Language
- GCC Compiler
- Makefile Build System

---

## Backend

- Python
- Flask
- Flask-CORS

---

## Frontend

- HTML5
- CSS3
- JavaScript

---

# 🧠 Algorithms Implemented

## Run-Length Encoding (RLE)

A lossless compression algorithm that compresses repeated character sequences into compact count-value pairs.

### Complexity

```text
Time Complexity: O(n)
Space Complexity: O(1)
```

---

## Huffman Coding

A lossless compression technique using:
- Binary Trees
- Frequency Analysis
- Min Heaps
- Prefix Encoding

Frequently occurring characters receive shorter binary codes for optimized compression.

### Complexity

```text
Time Complexity: O(n log n)
Space Complexity: O(n)
```

---

# 🏗️ System Architecture

```text
Frontend Dashboard
        │
        ▼
Python Flask Backend
        │
        ▼
C Compression Engine
   ┌──────────────┐
   ▼              ▼
 RLE          Huffman
```

---

# 📂 Project Structure

```text
file-compression/
│
├── compressor/
│   ├── main.c
│   ├── rle.c
│   ├── rle.h
│   ├── huffman.c
│   ├── huffman.h
│   ├── heap.c
│   ├── heap.h
│   ├── utils.c
│   ├── utils.h
│   ├── makefile
│   └── compressor
│
├── backend/
│   ├── server.py
│   ├── requirements.txt
│
├── frontend/
│   ├── index.html
│   ├── style.css
│   └── app.js
│
├── sample-files/
│
│
├── README.md
└── .gitignore
```

---

# ⚡ Installation

## Clone Repository

```bash
git clone https://github.com/maanyaramesh/ziplite-file-compression-tool.git

cd ziplite-file-compression-tool
```

---

# 🔧 Build Instructions

## Compile Compression Engine

```bash
cd compressor

make
```

---

# 📦 Install Backend Dependencies

```bash
cd ../backend

pip3 install -r requirements.txt
```

---

# 🚀 Running the Project

## Step 1 — Start Flask Backend

```bash
cd backend

python3 server.py
```

Backend runs at:

```text
http://127.0.0.1:5000
```

---

## Step 2 — Open Frontend Dashboard

Open another terminal:

```bash
cd frontend

open index.html
```

---

# 📊 Compression Analytics

ZipLite provides:
- Original File Size
- Compressed File Size
- Compression Ratio
- Compression Efficiency Metrics

---

# 🔄 Compression Workflow

```text
User Uploads File
        ↓
Frontend Sends API Request
        ↓
Flask Backend Receives File
        ↓
Backend Executes C Compressor
        ↓
Compressed File Generated
        ↓
Analytics Returned to Frontend
```

---

# 🧩 Concepts Demonstrated

This project demonstrates:

- Systems Programming
- File Compression Algorithms
- Heap Data Structures
- Binary Trees
- Dynamic Memory Allocation
- API Development
- Backend Engineering
- Frontend/Backend Communication
- CLI Application Development
- Multi-Language Integration
- Software Architecture Design

---

# 📸 Screenshots

## Compression Engine

<img width="941" height="78" alt="Screenshot 2026-05-16 at 9 32 34 AM" src="https://github.com/user-attachments/assets/1626a683-13d5-43e3-856a-61a0114febcf" />


```text
screenshots/terminal-output.png
```

---

## Huffman Coding Output

<img width="477" height="240" alt="Screenshot 2026-05-16 at 9 32 42 AM" src="https://github.com/user-attachments/assets/ced3b072-3cf7-4f00-8d8b-b297c70b88f8" />


```text
screenshots/huffman-demo.png
```

---

## Frontend Dashboard

<img width="1703" height="652" alt="Screenshot 2026-05-16 at 10 13 26 AM" src="https://github.com/user-attachments/assets/5cfed897-a9c5-4eae-90be-ba49927a7104" />


```text
screenshots/frontend-ui.png
```

---

# 🔮 Future Improvements

Potential upgrades:
- Bit-Level Binary Compression
- Huffman Decompression Engine
- Real Binary File Encoding
- Compression Benchmarking
- Multi-threaded Compression
- Drag-and-Drop Upload
- WebAssembly Integration
- Cloud File Storage
- Real-Time Compression Progress

---

# 🤝 Contributing

Contributions are welcome.

## Steps

1. Fork the repository
2. Create a feature branch
3. Commit your changes
4. Push to your branch
5. Open a Pull Request

---

# 👨‍💻 Author

Maanya Ramesh

GitHub: https://github.com/maanyaramesh

LinkedIn: https://linkedin.com/in/maanyaramesh

---

# ⭐ Acknowledgments

- Huffman Coding Algorithm
- Data Structures & Algorithms Concepts
- Open Source Systems Programming Community
- Compression Theory Fundamentals
- Flask Documentation
- GCC Compiler Toolchain
