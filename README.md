# 🍽️ Restaurant Billing System

A simple console-based **Restaurant Billing System** written in **C++**. It allows users to view the menu, place orders, and automatically generate a bill — all from the terminal.

---

## 📋 Features

- 📖 View a full menu with item names and prices
- 🛒 Place orders interactively (multiple items per session)
- 🧾 Auto-generate an itemized bill with total amount
- 🔄 Easy-to-navigate menu loop until exit

---

## 🗂️ Project Structure

```
├── function.h       # Header file — contains Menu and order class definitions
└── Project.cpp      # Main program file — entry point with the billing system loop
```

---

## 🍕 Menu Items

| # | Item | Price (Rs.) |
|---|------|-------------|
| 1 | Burger | 70 |
| 2 | Pizza | 150 |
| 3 | Pasta | 90 |
| 4 | Cold Drink | 30 |
| 5 | Ice Cream | 40 |
| 6 | Chaowmin | 60 |
| 7 | Garlic Bread | 65 |
| 8 | Tacos | 65 |
| 9 | Spring Roll | 40 |
| 10 | Momos | 80 |
| 11 | Choco Shake | 65 |
| 12 | Mango Shake | 40 |
| 13 | Cold Coffee | 55 |
| 14 | Oreo Shake | 70 |
| 15 | Samosa | 30 |
| 16 | Dosa | 65 |
| 17 | Idli | 50 |
| 18 | Vada | 45 |
| 19 | Pav Bhaji | 60 |

---

## 🚀 How to Compile & Run

### Prerequisites
- A C++ compiler (g++ recommended)
- Both files must be in the **same directory**

### Compile

```bash
g++ Project.cpp -o restaurant
```

### Run

```bash
./restaurant
```

---

## 🖥️ Usage

Once running, you will see the following menu:

```
==============================
  RESTAURANT BILLING SYSTEM
==============================
       1. View Menu
       2. Place Order
       3. Generate Bill
       4. EXIT
==============================
Enter your choice:
```

- **Option 1** — Displays the full menu with prices.
- **Option 2** — Starts the ordering process. Enter item numbers one by one and press `y` to continue or `n` to stop. Bill is auto-generated after ordering.
- **Option 3** — Prints the bill for items ordered so far.
- **Option 4** — Exits the program.

---

## 📁 File Descriptions

### `function.h`
Contains:
- `printpadded()` — Utility function for aligned console output
- `Menu` class — Stores item names, prices, and displays the menu
- `order` class — Handles order taking and bill generation

### `Project.cpp`
Contains:
- `main()` function — Runs the main interactive loop using a `do-while` and `switch` statement

---

## 📌 Notes

- Up to **50 items** can be ordered per session (array limit in `order` class).
- Prices are stored as `float` values.
- Input validation is included for invalid item numbers.

---

## 🧑‍💻 Technologies Used

- **Language:** C++
- **Libraries:** `<iostream>`, `<string>`, `<iomanip>`
- **Paradigm:** Object-Oriented Programming (OOP)

---

## 📄 License

This project is open-source and free to use for educational purposes.