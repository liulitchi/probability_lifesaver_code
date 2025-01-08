/********************************************************
 * Golang code to compute birthday probabilities        *
 * Book: The probability lifesaver by Steven J. Miller  *
 * Chapter 1, Figure 1-2                                *
 *                                                      *
 * now 365 - (n - 1) equals 366 - n                     *
 ********************************************************/

package main
import "fmt"

func main() {
    // at start 100% chance don’t share a birthday
    var noShare float32 = 1.0
    // at start 0% chance share a birthday
    var share float32
    // how many people
    for n := 2; n < 51 ; n++ {
        noShare *= (366.0 - float32(n)) / 365.0
        share = 1 - noShare
        fmt.Printf("p(%d) = %.2f%%\n", n, share * 100.0)
    }
}
                                               
