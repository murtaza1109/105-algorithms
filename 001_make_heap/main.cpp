/*
 * Author: Murtaza Sidhpurwala
 * Date: 06-Aug-2024
 * Description: This program demonstrates the use of std::make_heap to convert 
 * a range of elements into a heap.
 * 
 * Important points : 
 * 1.) std::make_heap is used to convert a range of elements into a heap. 
 * 2.) A heap is a way to organize elements in a way that the largest element 
 *     is always at the root.
 * 3.) std::make_heap should be used along with std::push_heap and 
 *     std::pop_heap to maintain the heap property.
 * 4.) It's useful for scenarios where you need to access the highest element 
 *     in constant time, eg:-Task Scheduling, Dijkstra's Algorithm.
 * 5.) Insertion and removal operations are performed in logarithmic time.
 * 
 *                            9
 *                           / \
 * {3, 1, 4, 1, 5, 9}  ==>  5   4  ==>  {9, 5, 4, 1, 1, 3} 
 *                         / \ / \
 *                        1  1 3
 */

#include <iostream>
#include <algorithm>
#include <vector>

int main() 
{
    std::vector<int> v = {3, 1, 4, 1, 5, 9};
    std::make_heap(v.begin(), v.end());
    for (int i : v) {
        std::cout << i << " ";
    }
    return 0;
}