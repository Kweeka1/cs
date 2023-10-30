# Boolean Algebra

## Definition <--- Included --->

Boolean algebra is a branch of algebra that deals with the study of Boolean variables and their logical operations.

## Combinational Logic Circuits

Combinational logic circuits are used to represent Boolean circuits.

### Boolean algebra

- A set of 2 values: {0, 1}
- The basic operations: AND, OR, NOT
And is denoted by "."
OR is denoted by "+"
NOT is denoted by "-" or " ' "

### Truth table

### Logic Diagram

### Rules

### Important

- Practice 3/4 variables table truth or equation

$$x \cap (x \cup y) = x$$
$$(x \cap 1) \cup (x \cap y) = x$$
$$x \cap (y \cup 1) = x \cap 1 = x$$

$$(a\cap b\cap c) \cup (a \cap b) \iff (a\cap b)\cap (c \cup T)$$
$$(a\cap b) \cup (a \cap b\cap c) \iff (a\cap b) \cap T$$
$$(a\cap b) \cup (a \cap b\cap c) \iff (a\cap b)$$

## Duality Principle

| Boolean Algebra Rule        | Dual Property                |
|----------------------------|-------------------------------|
| **Identity**               | **Null**                      |
| $$A \vee 0 = A$$               | $$A \wedge 1 = A$$                  |
| $$A \wedge 1 = A$$               | $$A \vee 0 = A$$                  |
| **Complement**|
| $$A \vee A' = 1$$              | $$A \wedge A' = 0$$                 |
| $$A \wedge A' = 0$$              | $$A \vee A' = 1$$                 |
| **Associative**|
| $$A \vee (B \vee C) = (A \vee B) \vee C$$ | $$A \wedge(B \wedge C) = (A \wedge B) \wedge C$$ |
| $$A \wedge (B \wedge C) = (A \wedge B) \wedge C$$ | $$A \vee (B \vee C) = (A \vee B) \vee C$$ |
| **Distributive**|
| $$A \vee (B \wedge C) = (A \vee B) \wedge (A \vee C)$$ | $$A \wedge (B \vee C) = (A \wedge B) \vee (A \wedge C)$$ |
| $$A \wedge (B \vee C) = (A \wedge B) \vee (A \wedge C)$$ | $$A \vee (B \wedge C) = (A \vee B) \wedge (A \vee C)$$ |
| **De Morgan's**|
| $$(A \vee B)' = A' \wedge B'$$      | $$(A \wedge B)' = A' \vee B'$$         |
| $$(A \wedge B)' = A' \vee B'$$      | $$(A \vee B)' = A' \wedge B'$$         |
| **Null**                   | **Identity**                  |
| $$A \vee A = A$$               | $$A \wedge A = A$$                  |
| $$A \wedge A = A$$               | $$A \vee A = A$$                  |
| **Idempotence**|
| $$A \vee A = A$$               | $$A \wedge A = A$$                  |
| $$A \wedge A = A$$               | $$A \vee A = A$$                  |
| **Involution**|
| $$(A')' = A$$               | $$(A')' = A$$                  |
| $$(A')' = A$$               | $$(A')' = A$$                  |
| **Commutative**|
| $$A \vee B = B \vee A$$           | $$A \wedge B = B \wedge A$$                |
| $$A \wedge B = B \wedge A$$             | $$A \vee B = B \vee A$$              |
| **Absorption**|
| $$A \vee (A \wedge B) = A$$         | $$A \wedge (A \vee B) = A$$            |
| $$A \wedge (A \vee B) = A$$         | $$A \vee (A \wedge B) = A$$            |
| **Simplification**|
| $$A \vee (A' \wedge B) = A \vee B$$      | $$A \wedge (A' \vee B) = A \wedge B$$         |
| $$A' \wedge (A \vee B) = A' \wedge B$$     | $$A \vee A' \wedge B = A \vee B$$         |

### Definitions

- The duality principle states that if two Boolean variables are equal, then their logical values are equal.

### Properties and dual property

## Logic gates and symbols

## Combinational Circuits

### Minterms and Maxterms

- Minterms -> AND | 1
- Maxterms -> OR | 0

- sum of product (SOP) canonical form.

- Product of sum (POS)
