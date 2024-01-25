/* The Solution class provides a method to compress a vector of characters by replacing consecutive
repeated characters with the character followed by the count of repetitions. */
class Solution {
public:
    // for this we can use two pointers approach.
    int compress(vector<char>& chars) {
        // index points on the index on which we have to return the ans.
        int index = 0;
        // counter for counting the number of repetitions
        int count = 1;
        // storing the first char of string and then looping from the index = 1.
        char prev = chars[0];
        for (int i = 1; i < chars.size(); i++) {
            // checking if the prev char and current char are equal.
            if (chars[i] == prev) {
                // increasing count of recurring char.
                count++;
            } else {
                // if charracters prev and current don't match then we store the
                // prev character at the pointed index.
                chars[index++] = prev;
                // from now on following procedure is done for storing the value
                // of count.
                if (count > 1) {
                    // storing the index value as we can utilise it later
                    int start = index;
                    // since we are dealing with characters and in ans we have
                    // to store count that is in form of integer so looping this
                    // to obtain so also in this loop the ans that gets stored
                    // is in reverse order so for correcting the order, we have
                    // to rverse it.
                    while (count) {
                        // storing the last integer at the value on which the
                        // index id pointing now
                        chars[index++] = (count % 10) + '0';
                        // decrementing the inter i.e. count
                        count = count / 10;
                    }
                    // reversing the stored count in our ans.
                    reverse(chars.begin() + start, chars.begin() + index);
                }
                // now since the first step is done so changing values of the
                // prev char and count for keeping track of occuring characters.
                prev = chars[i];
                count = 1;
            }
        }
        // since loop gets break but the count for last digit is not done so doing
        // count for the last one, above mentioned procedure is also followed
        // here.
        chars[index++] = prev;
        if (count > 1) {
            int start = index;
            while (count) {
                chars[index++] = (count % 10) + '0';
                count = count / 10;
            }
            reverse(chars.begin() + start, chars.begin() + index);
        }
        // since we have to return only the length of the compressed string here
        // it is equals to the value of index so returning index.
        return index;
    }
};