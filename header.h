extern int yylineno;
void yyerror(char *s, ...);

//AST

struct ast
{
    int nodetype;
    struct ast *l;
    struct ast *r;
};

struct numval
{
    int nodetype;
    double number;
};

// budowanie AST
struct ast *newast(int nodetype, struct ast *l, struct ast *r);
struct ast *newnum(double d);

double eval(struct ast *);

// usunięcie ABS
void treefree(struct ast *);