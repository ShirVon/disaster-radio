#include "HistoryRecord.h"

void HistoryRecord::receive(struct __attribute__((__packed__)) Datagram datagram, size_t len)
{
    if (history)
    {
        history->record(datagram, len);
    }
}
