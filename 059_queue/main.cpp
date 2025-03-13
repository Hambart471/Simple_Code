// First in first out
// We can add to the back and take from the front
// We can see what is in the front and in the back
// Looks like doubled linked list
// <-- -------------- <--
//     OOOOOOOOOOOOOO
// <-- -------------- <--
//
// Circular queue doesn't delete the first element after extraction of it's value. It moves this element to the back
//
// Priority Queue
//     ---------
// <-- (1)(2)(3) <--
//     ---------
// Priority addition: Priority is decided at the moment of adding. First you add all ones then twos and then threes
//     ------------------
// <-- (1)(1)(2)(2)(2)(3) (1) <--
//     ------------------
// Priority extraction: Or you add all elements and then extract according to priorities
//    -------------------
// <- (2)(3)<-(1)<-(3)(1) <-
//    -------------------