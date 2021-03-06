#ifndef MD_H
#define MD_H

#include <version.h>

class md
{
    md(md const &);
    md const &operator=(md const &);

public:
    md();
    ~md();

    double location_altitude() const;

private:
    class impl;
    impl *pimpl;
};

#endif /* MD_H */
