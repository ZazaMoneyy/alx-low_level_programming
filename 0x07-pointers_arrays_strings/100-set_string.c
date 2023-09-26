/**
 * set_string - Set the value of a pointer to a new string.
 * @s: A pointer to a pointer to a string.
 * @to: The string to set the pointer to.
 *
 * This function takes a pointer to a pointer to a string (s) and sets the
 * value of the pointer to a new string (to). It effectively changes the
 * reference of the pointer to point to a different string.
 */
void set_string(char **s, char *to)
{
	*s = to;
}
