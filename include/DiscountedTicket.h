#ifndef DISCOUNTEDTICKET_H
#define DISCOUNTEDTICKET_H

#include <Ticket.h>


class DiscountedTicket : public Ticket
{
public:
    double get_price() override;
  void display()override;



};

#endif // DISCOUNTEDTICKET_H
