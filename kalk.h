struct Dzialanie *getParams();

void calculateResult();

void showResults();

struct Dzialanie {
    int a, b;
    float result;
    char action;
};

struct Dzialanie *getParams() {
    struct Dzialanie *mojeDzialanie = (struct Dzialanie *) malloc(sizeof(struct Dzialanie));
    printf("Napisz swoje dzialanie: \n");
    do {
        scanf("%i %c %i", &(mojeDzialanie->a), &(mojeDzialanie->action), &(mojeDzialanie->b));
    } while (mojeDzialanie->action == '/' && mojeDzialanie->b == 0);
    return mojeDzialanie;
}

void calculateResult(struct Dzialanie *d) {
    switch (d->action) {
        case '*':
            d->result = d->a * d->b;
            break;
        case '/':
            d->result = d->a / (float) d->b;
            break;
        case '+':
            d->result = d->a + d->b;
            break;
        case '-':
            d->result = d->a - d->b;
            break;
    }
}

void showResults(struct Dzialanie *d) {
    printf("Wynik dzialania: %i %c %i to %0.2f", d->a, d->action, d->b, d->result);
}
