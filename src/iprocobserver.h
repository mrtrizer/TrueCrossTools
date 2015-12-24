#ifndef IPROCOBSERVER
#define IPROCOBSERVER

class IProcObserver
{
public:
    virtual float getProgress() const {return 0;}
    virtual bool isDone() const = 0;
};

#endif // IPROCOBSERVER

