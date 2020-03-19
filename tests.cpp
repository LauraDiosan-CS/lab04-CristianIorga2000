#include "tests.h"
#include "assert.h"
#include "bills.h"
#include "repository.h"
#include <string.h>

void testEntity()
{
    Bill b1(1, "saxofon", 2);
    Bill b2(69, "manele", 21);

    assert((b1.getApt == 1) && (b2.getApt == 69));
    assert((b1.getSum == 2) && (b2.getSum == 21));
    assert(strcmp(b1.getType, "saxofon") == 0 && strcmp(b2.getType, "manele") == 0);


    b1.set(2, "xxy", 0);

    assert(b1.getApt == 2);

}

void testRepo()
{
    Repo rep;

    Bill b1(1, "antidot", 3);
    Bill b2(2, "emo", 12);

    rep.addElem(b1);
    rep.addElem(b2);

    Bill b3 = rep.getElemFromPos(0);

    assert(b3 == b1);
    assert(rep.getSize() == 2);

}

