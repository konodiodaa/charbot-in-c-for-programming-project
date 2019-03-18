#define SMAX 250
#define LSMAX 5
typedef struct talk
{
int power;
char in[SMAX];
char out[SMAX];
struct talk * next;
} Talk;
