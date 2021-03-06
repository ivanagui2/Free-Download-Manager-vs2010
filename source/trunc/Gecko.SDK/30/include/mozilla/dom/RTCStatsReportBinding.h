/* THIS FILE IS AUTOGENERATED - DO NOT EDIT */

#ifndef mozilla_dom_RTCStatsReportBinding_h__
#define mozilla_dom_RTCStatsReportBinding_h__

#include "RTCStatsReportBinding.h"
#include "js/RootingAPI.h"
#include "jspubtd.h"
#include "mozilla/ErrorResult.h"
#include "mozilla/dom/BindingDeclarations.h"
#include "mozilla/dom/BindingUtils.h"
#include "mozilla/dom/CallbackFunction.h"
#include "mozilla/dom/CallbackInterface.h"
#include "mozilla/dom/Nullable.h"
#include "nsWeakReference.h"

namespace mozilla {
namespace dom {

class NativePropertyHooks;
class ProtoAndIfaceArray;
struct RTCCodecStats;
struct RTCCodecStatsAtoms;
struct RTCIceCandidatePairStats;
struct RTCIceCandidatePairStatsAtoms;
struct RTCIceCandidateStats;
struct RTCIceCandidateStatsAtoms;
struct RTCIceComponentStats;
struct RTCIceComponentStatsAtoms;
struct RTCInboundRTPStreamStats;
struct RTCInboundRTPStreamStatsAtoms;
struct RTCMediaStreamStats;
struct RTCMediaStreamStatsAtoms;
struct RTCMediaStreamTrackStats;
struct RTCMediaStreamTrackStatsAtoms;
struct RTCOutboundRTPStreamStats;
struct RTCOutboundRTPStreamStatsAtoms;
struct RTCRTPStreamStats;
struct RTCRTPStreamStatsAtoms;
struct RTCStatsAtoms;
class RTCStatsReport;
class RTCStatsReportCallback;
struct RTCStatsReportInternalAtoms;
struct RTCTransportStats;
struct RTCTransportStatsAtoms;

} // namespace dom
} // namespace mozilla

namespace mozilla {
namespace dom {


MOZ_BEGIN_ENUM_CLASS(RTCStatsType, uint32_t)
  Inboundrtp,
  Outboundrtp,
  Session,
  Track,
  Transport,
  Candidatepair,
  Localcandidate,
  Remotecandidate
MOZ_END_ENUM_CLASS(RTCStatsType)

namespace RTCStatsTypeValues {
extern const EnumEntry strings[9];
} // namespace RTCStatsTypeValues



MOZ_BEGIN_ENUM_CLASS(RTCStatsIceCandidatePairState, uint32_t)
  Frozen,
  Waiting,
  Inprogress,
  Failed,
  Succeeded,
  Cancelled
MOZ_END_ENUM_CLASS(RTCStatsIceCandidatePairState)

namespace RTCStatsIceCandidatePairStateValues {
extern const EnumEntry strings[7];
} // namespace RTCStatsIceCandidatePairStateValues



MOZ_BEGIN_ENUM_CLASS(RTCStatsIceCandidateType, uint32_t)
  Host,
  Serverreflexive,
  Peerreflexive,
  Relayed
MOZ_END_ENUM_CLASS(RTCStatsIceCandidateType)

namespace RTCStatsIceCandidateTypeValues {
extern const EnumEntry strings[5];
} // namespace RTCStatsIceCandidateTypeValues


struct RTCStats : public DictionaryBase
{
  Optional<nsString > mId;
  Optional<double > mTimestamp;
  Optional<RTCStatsType > mType;

  RTCStats();

  explicit inline RTCStats(const RTCStats& aOther)
  {
    *this = aOther;
  }

protected:
  explicit inline RTCStats(int )
  {
    // Do nothing here; this is used by our "Fast" subclass
  }

private:
  static bool
  InitIds(JSContext* cx, RTCStatsAtoms* atomsCache);

public:
  bool
  Init(JSContext* cx, JS::Handle<JS::Value> val, const char* sourceDescription = "Value");

  bool
  Init(const nsAString& aJSON);

  bool
  ToObject(JSContext* cx, JS::Handle<JSObject*> parentObject, JS::MutableHandle<JS::Value> rval) const;

  void
  TraceDictionary(JSTracer* trc);

  void
  operator=(const RTCStats& aOther);
};

namespace binding_detail {
struct FastRTCStats : public RTCStats
{
  inline FastRTCStats()
    : RTCStats(42)
  {
    // Doesn't matter what int we pass to the parent constructor
  }
};
} // namespace binding_detail


struct RTCCodecStats : public RTCStats
{
  Optional<uint32_t > mChannels;
  Optional<uint32_t > mClockRate;
  Optional<nsString > mCodec;
  Optional<nsString > mParameters;
  Optional<uint32_t > mPayloadType;

  RTCCodecStats();

  explicit inline RTCCodecStats(const RTCCodecStats& aOther)
  {
    *this = aOther;
  }

protected:
  explicit inline RTCCodecStats(int )
  {
    // Do nothing here; this is used by our "Fast" subclass
  }

private:
  static bool
  InitIds(JSContext* cx, RTCCodecStatsAtoms* atomsCache);

public:
  bool
  Init(JSContext* cx, JS::Handle<JS::Value> val, const char* sourceDescription = "Value");

  bool
  Init(const nsAString& aJSON);

  bool
  ToObject(JSContext* cx, JS::Handle<JSObject*> parentObject, JS::MutableHandle<JS::Value> rval) const;

  void
  TraceDictionary(JSTracer* trc);

  void
  operator=(const RTCCodecStats& aOther);
};

namespace binding_detail {
struct FastRTCCodecStats : public RTCCodecStats
{
  inline FastRTCCodecStats()
    : RTCCodecStats(42)
  {
    // Doesn't matter what int we pass to the parent constructor
  }
};
} // namespace binding_detail


struct RTCIceCandidatePairStats : public RTCStats
{
  Optional<nsString > mComponentId;
  Optional<nsString > mLocalCandidateId;
  Optional<uint64_t > mMozPriority;
  Optional<bool > mNominated;
  Optional<bool > mReadable;
  Optional<nsString > mRemoteCandidateId;
  Optional<bool > mSelected;
  Optional<RTCStatsIceCandidatePairState > mState;

  RTCIceCandidatePairStats();

  explicit inline RTCIceCandidatePairStats(const RTCIceCandidatePairStats& aOther)
  {
    *this = aOther;
  }

protected:
  explicit inline RTCIceCandidatePairStats(int )
  {
    // Do nothing here; this is used by our "Fast" subclass
  }

private:
  static bool
  InitIds(JSContext* cx, RTCIceCandidatePairStatsAtoms* atomsCache);

public:
  bool
  Init(JSContext* cx, JS::Handle<JS::Value> val, const char* sourceDescription = "Value");

  bool
  Init(const nsAString& aJSON);

  bool
  ToObject(JSContext* cx, JS::Handle<JSObject*> parentObject, JS::MutableHandle<JS::Value> rval) const;

  void
  TraceDictionary(JSTracer* trc);

  void
  operator=(const RTCIceCandidatePairStats& aOther);
};

namespace binding_detail {
struct FastRTCIceCandidatePairStats : public RTCIceCandidatePairStats
{
  inline FastRTCIceCandidatePairStats()
    : RTCIceCandidatePairStats(42)
  {
    // Doesn't matter what int we pass to the parent constructor
  }
};
} // namespace binding_detail


struct RTCIceCandidateStats : public RTCStats
{
  Optional<nsString > mCandidateId;
  Optional<RTCStatsIceCandidateType > mCandidateType;
  Optional<nsString > mComponentId;
  Optional<nsString > mIpAddress;
  Optional<nsString > mMozLocalTransport;
  Optional<int32_t > mPortNumber;
  Optional<nsString > mTransport;

  RTCIceCandidateStats();

  explicit inline RTCIceCandidateStats(const RTCIceCandidateStats& aOther)
  {
    *this = aOther;
  }

protected:
  explicit inline RTCIceCandidateStats(int )
  {
    // Do nothing here; this is used by our "Fast" subclass
  }

private:
  static bool
  InitIds(JSContext* cx, RTCIceCandidateStatsAtoms* atomsCache);

public:
  bool
  Init(JSContext* cx, JS::Handle<JS::Value> val, const char* sourceDescription = "Value");

  bool
  Init(const nsAString& aJSON);

  bool
  ToObject(JSContext* cx, JS::Handle<JSObject*> parentObject, JS::MutableHandle<JS::Value> rval) const;

  void
  TraceDictionary(JSTracer* trc);

  void
  operator=(const RTCIceCandidateStats& aOther);
};

namespace binding_detail {
struct FastRTCIceCandidateStats : public RTCIceCandidateStats
{
  inline FastRTCIceCandidateStats()
    : RTCIceCandidateStats(42)
  {
    // Doesn't matter what int we pass to the parent constructor
  }
};
} // namespace binding_detail


struct RTCIceComponentStats : public RTCStats
{
  Optional<bool > mActiveConnection;
  Optional<uint32_t > mBytesReceived;
  Optional<uint32_t > mBytesSent;
  Optional<int32_t > mComponent;
  Optional<nsString > mTransportId;

  RTCIceComponentStats();

  explicit inline RTCIceComponentStats(const RTCIceComponentStats& aOther)
  {
    *this = aOther;
  }

protected:
  explicit inline RTCIceComponentStats(int )
  {
    // Do nothing here; this is used by our "Fast" subclass
  }

private:
  static bool
  InitIds(JSContext* cx, RTCIceComponentStatsAtoms* atomsCache);

public:
  bool
  Init(JSContext* cx, JS::Handle<JS::Value> val, const char* sourceDescription = "Value");

  bool
  Init(const nsAString& aJSON);

  bool
  ToObject(JSContext* cx, JS::Handle<JSObject*> parentObject, JS::MutableHandle<JS::Value> rval) const;

  void
  TraceDictionary(JSTracer* trc);

  void
  operator=(const RTCIceComponentStats& aOther);
};

namespace binding_detail {
struct FastRTCIceComponentStats : public RTCIceComponentStats
{
  inline FastRTCIceComponentStats()
    : RTCIceComponentStats(42)
  {
    // Doesn't matter what int we pass to the parent constructor
  }
};
} // namespace binding_detail


struct RTCMediaStreamStats : public RTCStats
{
  Optional<nsString > mStreamIdentifier;
  Optional<Sequence<nsString > > mTrackIds;

  RTCMediaStreamStats();

  explicit inline RTCMediaStreamStats(const RTCMediaStreamStats& aOther)
  {
    *this = aOther;
  }

protected:
  explicit inline RTCMediaStreamStats(int )
  {
    // Do nothing here; this is used by our "Fast" subclass
  }

private:
  static bool
  InitIds(JSContext* cx, RTCMediaStreamStatsAtoms* atomsCache);

public:
  bool
  Init(JSContext* cx, JS::Handle<JS::Value> val, const char* sourceDescription = "Value");

  bool
  Init(const nsAString& aJSON);

  bool
  ToObject(JSContext* cx, JS::Handle<JSObject*> parentObject, JS::MutableHandle<JS::Value> rval) const;

  void
  TraceDictionary(JSTracer* trc);

  void
  operator=(const RTCMediaStreamStats& aOther);
};

namespace binding_detail {
struct FastRTCMediaStreamStats : public RTCMediaStreamStats
{
  inline FastRTCMediaStreamStats()
    : RTCMediaStreamStats(42)
  {
    // Doesn't matter what int we pass to the parent constructor
  }
};
} // namespace binding_detail


struct RTCMediaStreamTrackStats : public RTCStats
{
  Optional<uint32_t > mAudioLevel;
  Optional<uint32_t > mFrameHeight;
  Optional<uint32_t > mFrameWidth;
  Optional<uint32_t > mFramesDecoded;
  Optional<double > mFramesPerSecond;
  Optional<uint32_t > mFramesReceived;
  Optional<uint32_t > mFramesSent;
  Optional<bool > mRemoteSource;
  Optional<Sequence<nsString > > mSsrcIds;
  Optional<nsString > mTrackIdentifier;

  RTCMediaStreamTrackStats();

  explicit inline RTCMediaStreamTrackStats(const RTCMediaStreamTrackStats& aOther)
  {
    *this = aOther;
  }

protected:
  explicit inline RTCMediaStreamTrackStats(int )
  {
    // Do nothing here; this is used by our "Fast" subclass
  }

private:
  static bool
  InitIds(JSContext* cx, RTCMediaStreamTrackStatsAtoms* atomsCache);

public:
  bool
  Init(JSContext* cx, JS::Handle<JS::Value> val, const char* sourceDescription = "Value");

  bool
  Init(const nsAString& aJSON);

  bool
  ToObject(JSContext* cx, JS::Handle<JSObject*> parentObject, JS::MutableHandle<JS::Value> rval) const;

  void
  TraceDictionary(JSTracer* trc);

  void
  operator=(const RTCMediaStreamTrackStats& aOther);
};

namespace binding_detail {
struct FastRTCMediaStreamTrackStats : public RTCMediaStreamTrackStats
{
  inline FastRTCMediaStreamTrackStats()
    : RTCMediaStreamTrackStats(42)
  {
    // Doesn't matter what int we pass to the parent constructor
  }
};
} // namespace binding_detail


struct RTCRTPStreamStats : public RTCStats
{
  Optional<nsString > mCodecId;
  bool mIsRemote;
  Optional<nsString > mMediaTrackId;
  Optional<nsString > mRemoteId;
  Optional<nsString > mSsrc;
  Optional<nsString > mTransportId;

  RTCRTPStreamStats();

  explicit inline RTCRTPStreamStats(const RTCRTPStreamStats& aOther)
  {
    *this = aOther;
  }

protected:
  explicit inline RTCRTPStreamStats(int )
  {
    // Do nothing here; this is used by our "Fast" subclass
  }

private:
  static bool
  InitIds(JSContext* cx, RTCRTPStreamStatsAtoms* atomsCache);

public:
  bool
  Init(JSContext* cx, JS::Handle<JS::Value> val, const char* sourceDescription = "Value");

  bool
  Init(const nsAString& aJSON);

  bool
  ToObject(JSContext* cx, JS::Handle<JSObject*> parentObject, JS::MutableHandle<JS::Value> rval) const;

  void
  TraceDictionary(JSTracer* trc);

  void
  operator=(const RTCRTPStreamStats& aOther);
};

namespace binding_detail {
struct FastRTCRTPStreamStats : public RTCRTPStreamStats
{
  inline FastRTCRTPStreamStats()
    : RTCRTPStreamStats(42)
  {
    // Doesn't matter what int we pass to the parent constructor
  }
};
} // namespace binding_detail


struct RTCTransportStats : public RTCStats
{
  Optional<uint32_t > mBytesReceived;
  Optional<uint32_t > mBytesSent;

  RTCTransportStats();

  explicit inline RTCTransportStats(const RTCTransportStats& aOther)
  {
    *this = aOther;
  }

protected:
  explicit inline RTCTransportStats(int )
  {
    // Do nothing here; this is used by our "Fast" subclass
  }

private:
  static bool
  InitIds(JSContext* cx, RTCTransportStatsAtoms* atomsCache);

public:
  bool
  Init(JSContext* cx, JS::Handle<JS::Value> val, const char* sourceDescription = "Value");

  bool
  Init(const nsAString& aJSON);

  bool
  ToObject(JSContext* cx, JS::Handle<JSObject*> parentObject, JS::MutableHandle<JS::Value> rval) const;

  void
  TraceDictionary(JSTracer* trc);

  void
  operator=(const RTCTransportStats& aOther);
};

namespace binding_detail {
struct FastRTCTransportStats : public RTCTransportStats
{
  inline FastRTCTransportStats()
    : RTCTransportStats(42)
  {
    // Doesn't matter what int we pass to the parent constructor
  }
};
} // namespace binding_detail


struct RTCInboundRTPStreamStats : public RTCRTPStreamStats
{
  Optional<uint64_t > mBytesReceived;
  Optional<double > mJitter;
  Optional<int32_t > mMozAvSyncDelay;
  Optional<int32_t > mMozJitterBufferDelay;
  Optional<int32_t > mMozRtt;
  Optional<uint32_t > mPacketsLost;
  Optional<uint32_t > mPacketsReceived;

  RTCInboundRTPStreamStats();

  explicit inline RTCInboundRTPStreamStats(const RTCInboundRTPStreamStats& aOther)
  {
    *this = aOther;
  }

protected:
  explicit inline RTCInboundRTPStreamStats(int )
  {
    // Do nothing here; this is used by our "Fast" subclass
  }

private:
  static bool
  InitIds(JSContext* cx, RTCInboundRTPStreamStatsAtoms* atomsCache);

public:
  bool
  Init(JSContext* cx, JS::Handle<JS::Value> val, const char* sourceDescription = "Value");

  bool
  Init(const nsAString& aJSON);

  bool
  ToObject(JSContext* cx, JS::Handle<JSObject*> parentObject, JS::MutableHandle<JS::Value> rval) const;

  void
  TraceDictionary(JSTracer* trc);

  void
  operator=(const RTCInboundRTPStreamStats& aOther);
};

namespace binding_detail {
struct FastRTCInboundRTPStreamStats : public RTCInboundRTPStreamStats
{
  inline FastRTCInboundRTPStreamStats()
    : RTCInboundRTPStreamStats(42)
  {
    // Doesn't matter what int we pass to the parent constructor
  }
};
} // namespace binding_detail


struct RTCOutboundRTPStreamStats : public RTCRTPStreamStats
{
  Optional<uint64_t > mBytesSent;
  Optional<uint32_t > mPacketsSent;

  RTCOutboundRTPStreamStats();

  explicit inline RTCOutboundRTPStreamStats(const RTCOutboundRTPStreamStats& aOther)
  {
    *this = aOther;
  }

protected:
  explicit inline RTCOutboundRTPStreamStats(int )
  {
    // Do nothing here; this is used by our "Fast" subclass
  }

private:
  static bool
  InitIds(JSContext* cx, RTCOutboundRTPStreamStatsAtoms* atomsCache);

public:
  bool
  Init(JSContext* cx, JS::Handle<JS::Value> val, const char* sourceDescription = "Value");

  bool
  Init(const nsAString& aJSON);

  bool
  ToObject(JSContext* cx, JS::Handle<JSObject*> parentObject, JS::MutableHandle<JS::Value> rval) const;

  void
  TraceDictionary(JSTracer* trc);

  void
  operator=(const RTCOutboundRTPStreamStats& aOther);
};

namespace binding_detail {
struct FastRTCOutboundRTPStreamStats : public RTCOutboundRTPStreamStats
{
  inline FastRTCOutboundRTPStreamStats()
    : RTCOutboundRTPStreamStats(42)
  {
    // Doesn't matter what int we pass to the parent constructor
  }
};
} // namespace binding_detail


struct RTCStatsReportInternal : public DictionaryBase
{
  Optional<Sequence<RTCCodecStats > > mCodecStats;
  Optional<Sequence<RTCIceCandidatePairStats > > mIceCandidatePairStats;
  Optional<Sequence<RTCIceCandidateStats > > mIceCandidateStats;
  Optional<Sequence<RTCIceComponentStats > > mIceComponentStats;
  Optional<Sequence<RTCInboundRTPStreamStats > > mInboundRTPStreamStats;
  Optional<Sequence<RTCMediaStreamStats > > mMediaStreamStats;
  Optional<Sequence<RTCMediaStreamTrackStats > > mMediaStreamTrackStats;
  Optional<Sequence<RTCOutboundRTPStreamStats > > mOutboundRTPStreamStats;
  nsString mPcid;
  Optional<Sequence<RTCRTPStreamStats > > mRtpStreamStats;
  Optional<Sequence<RTCTransportStats > > mTransportStats;

  RTCStatsReportInternal();

  explicit inline RTCStatsReportInternal(const RTCStatsReportInternal& aOther)
  {
    *this = aOther;
  }

protected:
  explicit inline RTCStatsReportInternal(int )
  {
    // Do nothing here; this is used by our "Fast" subclass
  }

private:
  static bool
  InitIds(JSContext* cx, RTCStatsReportInternalAtoms* atomsCache);

public:
  bool
  Init(JSContext* cx, JS::Handle<JS::Value> val, const char* sourceDescription = "Value");

  bool
  Init(const nsAString& aJSON);

  bool
  ToObject(JSContext* cx, JS::Handle<JSObject*> parentObject, JS::MutableHandle<JS::Value> rval) const;

  void
  TraceDictionary(JSTracer* trc);

  void
  operator=(const RTCStatsReportInternal& aOther);
};

namespace binding_detail {
struct FastRTCStatsReportInternal : public RTCStatsReportInternal
{
  inline FastRTCStatsReportInternal()
    : RTCStatsReportInternal(42)
  {
    // Doesn't matter what int we pass to the parent constructor
  }
};
} // namespace binding_detail


class RTCStatsReportCallback : public CallbackFunction
{
public:
  explicit inline RTCStatsReportCallback(JS::Handle<JSObject*> aCallback, nsIGlobalObject* aIncumbentGlobal)
    : CallbackFunction(aCallback, aIncumbentGlobal)
  {
    MOZ_ASSERT(JS_ObjectIsCallable(nullptr, mCallback));
  }

  explicit inline RTCStatsReportCallback(CallbackFunction* aOther)
    : CallbackFunction(aOther)
  {
  }

  template <typename T>
  inline void
  Call(const T& thisObjPtr, mozilla::dom::RTCStatsReport& obj, ErrorResult& aRv, ExceptionHandling aExceptionHandling = eReportExceptions)
  {
    CallSetup s(this, aRv, aExceptionHandling);
    if (!s.GetContext()) {
      aRv.Throw(NS_ERROR_UNEXPECTED);
      return;
    }
    JS::Rooted<JSObject*> thisObjJS(s.GetContext(),
      WrapCallThisObject(s.GetContext(), CallbackPreserveColor(), thisObjPtr));
    if (!thisObjJS) {
      aRv.Throw(NS_ERROR_FAILURE);
      return;
    }
    JS::Rooted<JS::Value> thisValJS(s.GetContext(),
                                    JS::ObjectValue(*thisObjJS));
    return Call(s.GetContext(), thisValJS, obj, aRv);
  }

  inline void
  Call(mozilla::dom::RTCStatsReport& obj, ErrorResult& aRv, ExceptionHandling aExceptionHandling = eReportExceptions)
  {
    CallSetup s(this, aRv, aExceptionHandling);
    if (!s.GetContext()) {
      aRv.Throw(NS_ERROR_UNEXPECTED);
      return;
    }
    return Call(s.GetContext(), JS::UndefinedHandleValue, obj, aRv);
  }

  inline bool
  operator==(const RTCStatsReportCallback& aOther) const
  {
    return CallbackFunction::operator==(aOther);
  }

private:
  void Call(JSContext* cx, JS::Handle<JS::Value> aThisVal, mozilla::dom::RTCStatsReport& obj, ErrorResult& aRv);
};


namespace RTCStatsReportBinding {

  typedef mozilla::dom::RTCStatsReport NativeType;

  // We declare this as an array so that retrieving a pointer to this
  // binding's property hooks only requires compile/link-time resolvable
  // address arithmetic.  Declaring it as a pointer instead would require
  // doing a run-time load to fetch a pointer to this binding's property
  // hooks.  And then structures which embedded a pointer to this structure
  // would require a run-time load for proper initialization, which would
  // then induce static constructors.  Lots of static constructors.
  extern const NativePropertyHooks sNativePropertyHooks[];
  JSObject*
  DefineDOMInterface(JSContext* aCx, JS::Handle<JSObject*> aGlobal, JS::Handle<jsid> id, bool aDefineOnGlobal);

  bool
  ConstructorEnabled(JSContext* aCx, JS::Handle<JSObject*> aObj);

  const JSClass*
  GetJSClass();

  JSObject*
  Wrap(JSContext* aCx, JS::Handle<JSObject*> aScope, mozilla::dom::RTCStatsReport* aObject, nsWrapperCache* aCache);

  template <class T>
  inline JSObject* Wrap(JSContext* aCx, JS::Handle<JSObject*> aScope, T* aObject)
  {
    return Wrap(aCx, aScope, aObject, aObject);
  }

  void
  CreateInterfaceObjects(JSContext* aCx, JS::Handle<JSObject*> aGlobal, ProtoAndIfaceArray& aProtoAndIfaceArray, bool aDefineOnGlobal);

  JS::Handle<JSObject*>
  GetProtoObject(JSContext* aCx, JS::Handle<JSObject*> aGlobal);

  JS::Handle<JSObject*>
  GetConstructorObject(JSContext* aCx, JS::Handle<JSObject*> aGlobal, bool aDefineOnGlobal = true);

} // namespace RTCStatsReportBinding



class RTCStatsReportJSImpl : public CallbackInterface
{
public:
  explicit inline RTCStatsReportJSImpl(JS::Handle<JSObject*> aCallback, nsIGlobalObject* aIncumbentGlobal)
    : CallbackInterface(aCallback, aIncumbentGlobal)
  {
  }

  void ForEach(RTCStatsReportCallback& callbackFn, JS::Handle<JS::Value> thisArg, ErrorResult& aRv, JSCompartment* aCompartment = nullptr);

  JSObject* Get(const nsAString& key, ErrorResult& aRv, JSCompartment* aCompartment = nullptr);

  bool Has(const nsAString& key, ErrorResult& aRv, JSCompartment* aCompartment = nullptr);

  inline bool
  operator==(const RTCStatsReportJSImpl& aOther) const
  {
    return CallbackInterface::operator==(aOther);
  }

  void GetMozPcid(nsString& aRetVal, ErrorResult& aRv, JSCompartment* aCompartment = nullptr);
};


class RTCStatsReport MOZ_FINAL : public nsSupportsWeakReference,
                                 public nsWrapperCache
{
public:
  NS_DECL_CYCLE_COLLECTING_ISUPPORTS
  NS_DECL_CYCLE_COLLECTION_SCRIPT_HOLDER_CLASS(RTCStatsReport)

private:
  nsRefPtr<RTCStatsReportJSImpl> mImpl;
  nsCOMPtr<nsISupports> mParent;

public:
  RTCStatsReport(JS::Handle<JSObject*> aJSImplObject, nsPIDOMWindow* aParent);

  nsISupports* GetParentObject() const;

  virtual JSObject* WrapObject(JSContext* aCx, JS::Handle<JSObject*> aScope) MOZ_OVERRIDE;

  void GetMozPcid(nsString& aRetVal, ErrorResult& aRv, JSCompartment* aCompartment = nullptr) const;

  void ForEach(RTCStatsReportCallback& callbackFn, JS::Handle<JS::Value> thisArg, ErrorResult& aRv, JSCompartment* aCompartment = nullptr);

  JSObject* Get(const nsAString& key, ErrorResult& aRv, JSCompartment* aCompartment = nullptr);

  bool Has(const nsAString& key, ErrorResult& aRv, JSCompartment* aCompartment = nullptr);

  static bool
  _Create(JSContext* cx, unsigned argc, JS::Value* vp);
};


} // namespace dom
} // namespace mozilla

#endif // mozilla_dom_RTCStatsReportBinding_h__
