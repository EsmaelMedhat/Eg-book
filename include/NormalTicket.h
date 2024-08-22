#ifndef NORMALTICKET_H
#define NORMALTICKET_H
#include <Ticket.h>
class NormalTicket : public Ticket
{
  public:
  double get_price()override;
  void display()override;




};

#endif // NORMALTICKET_H
