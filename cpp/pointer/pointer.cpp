int main() {
    int i = 0;
    int *ip = &i;
    int **ipp = &ip;
    int ***ippp = &ipp;
    int ****ipppp = &ippp;
    ****ipppp = 4;
    return 0;
}
