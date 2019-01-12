# Data Stuctures in C++ with Kristoffer Hebert
## Design and implement sorting algorithms

## What is a sorting algorithm?
A algorithm is like a list of instructions, similar to a set of instructions. We use sorting algorithms to sort lists of data like numbers or strings. The goal of a algorithm is to do the task with the least amount of steps as possible.

## Examples of sorting algorithms

### Selection Sort

**What is Selection Sort?**

Selection sort involves two lists, one unsorted and one sorted. Loop through the unsorted list, remove one value, and add the value to the appropriate index in the sorted array. Repeat until there are no items in the unsorted list.
```
    #Pseudo Code
    Loop through array
    Starting with the second index marker, Find value of lowest and swap into the correction postion if it is smaller than last index
    increment index marker
    Repeat until array is compeletly looped
```

### Bubble Sort

**What is Bubble Sort?**

In summary, Bubble Sort is "Each iteration puts the smallest unsorted element into its correct place, but it also changes the locations of the other elements in the array" (Dale 593)

```
#Pseudo Code
Set current_index to first element
Loop through array and find lowest value in array
Store current_index value into tmp variable
Set value in current_index to lowest value
Swap values in other indexes up to accommodate updated value and tmp variable
```

### Insertion Sort

**What is insertion sort?**

According to Nell Dale, Insertion Sort is described as, "Each successive element in the array to be sorted is inserted into its proper place with respect to the other, already-sorted elements" (Dale 598).
```
#Pseudo Code
set first element as marker of sorted array
swap next unsorted value into correct sorted array position
evaluate next unsorted value into sorted array
repeat until entire unsorted array has been sorted
```

### Merge Sort

**What is merge sort?**

Merge sort cuts a list in half, and sorts the array halves. Once sorted, combine the two lists into one new list and return that sorted list.

```
#Pseudo Code
Divide array in half
Sort array halves
Return combined array halves
```

### Quick Sort
Quick sort is a divide and conquer algorithm. Find a value to pivot the list upon. Move values less than the pivot to the left of the pivot and right if value is greater. Repeat until list is sorted.

**What is Quick Sort?**
```
#Pseudo Code
Find pivot value 
Loop through other values recursively
If value is larger than pivot move to the right
```

## References

Dale, Nell B. C Plus Data Structures ; Third Edition. Jones and Bartlett Learning, 2003.