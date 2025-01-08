/******************************************************************************
 * Golang code for Sum four squares, 2.2.1 Coding Digression                  *
 * sum_4squares is the number we are investingating will count how often      *
 * sum_4squares = a^2 + b^2 + c^2 + d^2 with a <= b <= c <= d                 * 
 *                                                                            *
 * If you find hard to solve, try to think an easy way,                       *
 * like in two squares's situation. After this, you can it do better          *
 ******************************************************************************/

package main
import "fmt"

func main() {
    var sum4Squares uint32   // the number as a sum of four squres
	var a uint32              // four integers
	var b uint32
	var c uint32
	var d uint32
	var diff uint32          // check equation

	fmt.Print("Please input an integer number: ")
	fmt.Scan(&sum4Squares)

    for a = 1; a * a  <= sum4Squares; a++ {
	    for b = a; b * b <= sum4Squares - a * a; b++ {
		    for c = b; c * c <= sum4Ssquares - a * a - b * b; c++ {
			    for d = c; d *d <= sum4Squares - a * a - b * b - c * c; d++ {
				    diff = sum4Squares - a * a - b * b - c * c - d * d
					if diff == 0 {
					    fmt.Printf("%d = %d^2 + %d^2 + %d^2 + %d^2\n", sum4Squares, a, b, c, d)
					}
				}
			}
		}
	}
}
