//
// Generated file, do not edit! Created by opp_msgtool 6.1 from TelnetPkt.msg.
//

#ifndef __TELNETPKT_M_H
#define __TELNETPKT_M_H

#if defined(__clang__)
#  pragma clang diagnostic ignored "-Wreserved-id-macro"
#endif
#include <omnetpp.h>

// opp_msgtool version check
#define MSGC_VERSION 0x0601
#if (MSGC_VERSION!=OMNETPP_VERSION)
#    error Version mismatch! Probably this file was generated by an earlier version of opp_msgtool: 'make clean' should help.
#endif

class TelnetPkt;
#include "NetPkt_m.h" // import NetPkt

/**
 * Class generated from <tt>TelnetPkt.msg:18</tt> by opp_msgtool.
 * <pre>
 * //
 * // Message class for representing a Telnet packet (bytes carried in TCP).
 * // For purposes of this model, we don't care about TCP connection setup
 * // and teardown, about TCP acks, or finite IP packet size.
 * //
 * packet TelnetPkt extends NetPkt
 * {
 *     string payload;
 * }
 * </pre>
 */
class TelnetPkt : public ::NetPkt
{
  protected:
    omnetpp::opp_string payload;

  private:
    void copy(const TelnetPkt& other);

  protected:
    bool operator==(const TelnetPkt&) = delete;

  public:
    TelnetPkt(const char *name=nullptr, short kind=0);
    TelnetPkt(const TelnetPkt& other);
    virtual ~TelnetPkt();
    TelnetPkt& operator=(const TelnetPkt& other);
    virtual TelnetPkt *dup() const override {return new TelnetPkt(*this);}
    virtual void parsimPack(omnetpp::cCommBuffer *b) const override;
    virtual void parsimUnpack(omnetpp::cCommBuffer *b) override;

    virtual const char * getPayload() const;
    virtual void setPayload(const char * payload);
};

inline void doParsimPacking(omnetpp::cCommBuffer *b, const TelnetPkt& obj) {obj.parsimPack(b);}
inline void doParsimUnpacking(omnetpp::cCommBuffer *b, TelnetPkt& obj) {obj.parsimUnpack(b);}


namespace omnetpp {

template<> inline TelnetPkt *fromAnyPtr(any_ptr ptr) { return check_and_cast<TelnetPkt*>(ptr.get<cObject>()); }

}  // namespace omnetpp

#endif // ifndef __TELNETPKT_M_H

