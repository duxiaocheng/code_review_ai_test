void test_print_counter()
{
    unsigned int counter = 5;
    while (counter >= 0) {
       IMS_DLOG(IMS_LOGLOW, "Counter: %u\n", counter);
        counter--;
    }
}
