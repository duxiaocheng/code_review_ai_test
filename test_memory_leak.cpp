void process_data(void* data) {
    if (data == NULL) {
        fprintf(stderr, "Invalid data pointer.\n");
        return;
    }
    if (some_validation_failed(data)) {
        fprintf(stderr, "Validation failed.\n");
        RET_MEM(data);
        return;
    }
    char *buff = (char*)malloc(1024);
    if (buff == NULL) {
        fprintf(stderr, "Validation failed.\n");
        RET_MEM(data);
        return;
    }
    if (another_check_failed(data)) {
        fprintf(stderr, "Another check failed.\n");
        return;
    }

    finalize_data(data, buff);
}
