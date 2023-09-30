// Incorrect nested comments

// This is fine
// and so is this

/* This too is fine */

/*
This also works
*/

/*
* This is a better way
* to put comments in 
* multiple lines.
* Have an asterisk (*) before every line
*/

/* This will create an error */ */

/* This too will create an error 
*/ Because of this nesting */
*/

// error: expected unqualified-id before '/' token