// 분할 정복을 이용하는 알고리즘

string reverse(string::iterator& it) {
    char haed = *it;
    ++it;
    if(head == 'b' || head == 'w')
        return string(1, head);
    string upperLeft = reverse(it);
    string upperRight = reverse(it);
    string lowerLeft = reverse(it);
    string lowerRight = reverse(it);
    return string("x") + lowerLeft + lowerRight + upperLeft + upperRight;
}