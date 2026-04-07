MyTime addTime(MyTime t1, MyTime t2) {
    MyTime result;
    result.min = (t1.min + t2.min) % 60;
    result.hour = (t1.hour + t2.hour) + (t1.min + t2.min) / 60;
    return result;
}
