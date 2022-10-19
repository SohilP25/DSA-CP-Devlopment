#include <stdio.h>
#include <string.h>

int i, j, m, n;
char s1[50] = "ABAABA", s2[50] = "BABBAB", s3[50], s4[50];

void lcs()
{
    m = strlen(s1);
    n = strlen(s2);
    int lcs_table[m + 1][n + 1];

    // making 1st row and column zero

    for (int i = 0; i <= m; i++)
    {
        lcs_table[i][0] = 0;
    }
    for (int i = 0; i <= n; i++)
    {
        lcs_table[0][i] = 0;
    }

    for (int i = 1; i <= m; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            if (s1[i - 1] == s2[j - 1])
            {
                lcs_table[i][j] = lcs_table[i - 1][j - 1] + 1;
            }
            else if (lcs_table[i - 1][j] >= lcs_table[i][j - 1])
            {
                lcs_table[i][j] = lcs_table[i - 1][j];
            }
            else
            {
                lcs_table[i][j] = lcs_table[i][j - 1];
            }
        }
    }
    for (int i = 0; i <= m; i++)
    {
        for (int j = 0; j <= n; j++)
        {
            printf("%d  ", lcs_table[i][j]);
        }
        printf("\n");
    }

    // start tracing from here

    int pointer = lcs_table[m][n];

    for (int k = 0; k < lcs_table[m][n]; k++)
    {
        for (i = m; i >= 0; i--)
        {
            for (j = n; j >= 0; j--)
            {
                if (lcs_table[i][j - 1] == lcs_table[i][j])
                {
                    n--;
                }
                else if (lcs_table[i - 1][j] == lcs_table[i][j])
                {
                    m--;
                    break;
                }
                else
                {
                    m--;
                    n--;
                    // printf("%c", s1[m]);
                    s3[0]=s1[m];
                    break;
                    break;
                }
            }
        }
    }
    s3.strrev();
    printf("%s", s3);
}

int main()
{
    lcs();
    printf("\n");
}
