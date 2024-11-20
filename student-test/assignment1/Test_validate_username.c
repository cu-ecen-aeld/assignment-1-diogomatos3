#include "unity.h"
#include <stdbool.h>
#include <stdlib.h>
#include "../../examples/autotest-validate/autotest-validate.h"
#include "../../assignment-autotest/test/assignment1/username-from-conf-file.h"

/**
* This function should:
*   1) Call the my_username() function in autotest-validate.c to get your hard coded username.
*   2) Obtain the value returned from function malloc_username_from_conf_file() in username-from-conf-file.h within
*       the assignment autotest submodule at assignment-autotest/test/assignment1/
*   3) Use unity assertion TEST_ASSERT_EQUAL_STRING_MESSAGE to verify the two strings are equal.  See
*       the [unity assertion reference](https://github.com/ThrowTheSwitch/Unity/blob/master/docs/UnityAssertionsReference.md)
*/
void test_validate_my_username()
{
    /**
     * TODO: Replace the line below with your code here as described above to verify your /conf/username.txt 
     * config file and my_username() functions are setup properly
     */
    
    /* 1) Call the my_username() function in autotest-validate.c to get your hard coded username. */
    // Call the function and store the returned string
    const char *actual_username = my_username();
    // Print the returned string
    printf("actual_username: %s\n", actual_username);

    /* 2) Obtain the value returned from function malloc_username_from_conf_file() in username-from-conf-file.h within
        the assignment autotest submodule at assignment-autotest/test/assignment1/ */
    // Call the function and store the returned pointer
    char *username_from_conf_file = malloc_username_from_conf_file();
    // Print the data to where pointer is pointing
    printf("Username: %s\n", username_from_conf_file);

    // Compare the expected and actual usernames
    // 0 if the strings are equal,
    // A negative value if the first string is less than the second string,
    // A positive value if the first string is greater than the second string.
    int result = strcmp(username_from_conf_file, actual_username);
    // Print the comparison result
    printf("result: %d\n", result);

    // 3) Use unity assertion TEST_ASSERT_EQUAL_STRING_MESSAGE to verify the two strings are equal.
    TEST_ASSERT_TRUE_MESSAGE(result == 0, "the two strings are not equal");
}
