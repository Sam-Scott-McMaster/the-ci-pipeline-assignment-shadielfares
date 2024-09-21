/* Shadi El-Fares, 400525799, Sept 21, 2024
 *
 * This is a simple Linux command line quiz utility tool
 *
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* main()
 *Ask questions and retrieve answers.
 */

int main(int argc, char *argv[]){
	// Check if runnable conditions
	if (argc < 2) {
		printf("Usage: quiz [-#] [<answer>] \n");
		printf("Try 'quiz --help' for more information");
		return EXIT_FAILURE;
	} if (strcmp(argv[1], "--help") == 0){
		printf("Valid entries must have a flag of ./quiz followed by -# where # is between of the range (1-3). \n Any of the above will simply output the question associated with the flag. \n To answer the question, include the same flag with the addition of your answer in " ". \n e.g: ./quiz -1 \"answer\"");
	// First Question & Answer Logic
	} if (strcmp(argv[1], "-1") == 0 ){
		printf("Question 1: Assume you have a folder (named foo), populated with files, what is the command to recurssively delete the folder and its contents? \n");
		       	//Answer:rm -r foo
		if (argc == 3 && strcmp(argv[2], "rm -r foo") == 0 ){
			printf("Correct. \n");
			return EXIT_SUCCESS;
		} else if (argc == 3){
			printf("Incorrect. \n");
			return EXIT_FAILURE;
		} return EXIT_SUCCESS;
	// Second Question & Answer Logic
	} if (strcmp(argv[1], "-2") == 0 ){
		printf("Question 2: Is it possible to output text, via printf() or put() without containing \\n? \n"); 
			//Answer:no
		if( argc == 3 && strcmp(argv[2], "no") == 0 ){
			printf("Correct. \n");
			return EXIT_SUCCESS;
		} else if (argc == 3) {
			printf("Incorrect. \n");
			return EXIT_FAILURE;
		} return EXIT_SUCCESS;
	// Third Question & Answer Logic
	} if (strcmp(argv[1], "-3") == 0 ){
		printf("Question 3: What is the Git command for initalizing an instance of Git inside a directory? \n"); 
			//Answer: git init
		if ( argc == 3  && strcmp(argv[2], "git init") == 0 ){
			printf("Correct. \n");
			return EXIT_SUCCESS;
		} else if (argc == 3) {
			printf("Incorrect. \n");
			return EXIT_FAILURE;
		} return EXIT_SUCCESS;	
	}

	printf("Invalid question number. \n");
	return EXIT_FAILURE;
}
