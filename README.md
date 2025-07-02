# Algorithms
This repository contains all algorithms (like sort, binary search, aggregation function etc.) design in c++ programming language.

## Header defined function

### algo::reverse
````
template<class BidirectionalIterator> void reverse(BidirectionalIterator begin, BidirectionalIterator end);
````
Reverse the order of the elements in the range [begin,end). Through the function call `iter_swap` which swaps two iterator elements.

#### Parameters
```
begin,end: is an inital and last position of the sequence to be sorted. The range used is [begin,end) which contains all elemetns between begin and end, including the element pointed by  begin but not pointed by end. (1)(2)
```

### algo::sort
````
template<class RandomAccessIterator> void sort(RandomAccessIterator begin, RandomAccessIterator end); (1)
template<class RandomAccessIterator,class Compare> void sort(RandomAccessIterator begin, RandomAccessIterator end, Compare comp); (2)
````
Sort the elements in the reage [begin,end) in accending order. The elements are compared using `operator<` for the first version and `comp` for second version. Equivalent elements are not guarenteed to keep there relative order.
#### Parameters
```
begin,end: is an inital and last position of the sequence to be sorted. The range used is [begin,end) which contains all elemetns between begin and end, including the element pointed by  begin but not pointed by end. (1)(2)
comp: is a binary function which accepts two elements in the range as argurment make comparision between them and return a bool value (2)
```

