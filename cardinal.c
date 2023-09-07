#include <stdio.h>
#include <stdlib.h>

struct Node 
{ 
    int data; 
    struct Node *next; 
}; 
typedef struct Node Node_t;

size_t assign( Node_t **head, const int a[], size_t n )
{
    while ( *head )
    {
        Node_t *tmp = *head;
        head = &( *head )->next;
        free( tmp );
    }
    
    size_t i = 0;
    
    for ( ; i < n && ( *head = malloc( sizeof( Node_t ) ) ) != NULL; i++ )
    {
        ( *head )->data = a[i];
        ( *head )->next = NULL;
        head = &( *head )->next;
    }
    
    return i;
}

size_t count_distinct( const Node_t *head )
{
    size_t n = 0;
    
    for ( const Node_t *current = head; current != NULL; current = current->next )
    {
        const Node_t *prev = head;
        
        while ( prev != current && prev->data != current->data )
        {
            prev = prev->next;
        }
        
        if ( prev == current ) ++n;
    }
    
    return n;
}

FILE * display( const Node_t *head, FILE *fp )
{
    for ( ; head != NULL; head = head->next )
    {
        fprintf( fp, "%d -> ", head->data );
    }
    
    fputs( "null", fp );
    
    return fp;
}

int main(void) 
{
    Node_t *head = NULL;
    int a[] = { 1, 2, 1, 1, 3, 4 };
    
    assign( &head, a, sizeof( a ) / sizeof( *a ) );
    
    fputc( '\n', display( head, stdout ) );
    
    printf( "There are %zu distinct data in the list.\n", count_distinct( head ) );
    
    return 0;
}
