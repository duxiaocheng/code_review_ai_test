void test_print_counter()
{
    unsigned int counter = 5;
    while (counter >= 0) {
       IMS_DLOG(IMS_LOGLOW, "Counter: %u\n", counter);
       counter--;
    }
}

class LinkNodeManager {
    private:
        unsigned int mNumOfLinkNode;

    public:
        LinkNodeManager(unsigned int numOfLinkNode) : mNumOfLinkNode(numOfLinkNode) {}

        void getWeights(unsigned short *weights) {
            int i = 0;
            while (i < mNumOfLinkNode - 1) {
                weights[i] = 0;
                i++;
            }
        }
};
