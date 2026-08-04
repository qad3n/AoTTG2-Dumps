// ==================== AoTTG2 cross-reference ====================
// Type: System.Runtime.Remoting.Lifetime.Lease
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections;
using Il2CppDummyDll;

namespace System.Runtime.Remoting.Lifetime;

[Token(Token = "0x2000361")]
internal class Lease : MarshalByRefObject, ILease
{
	[Token(Token = "0x2000362")]
	private delegate TimeSpan RenewalDelegate(ILease lease);

	[Token(Token = "0x4000EDB")]
	[FieldOffset(Offset = "0x18")]
	private DateTime _leaseExpireTime;

	[Token(Token = "0x4000EDC")]
	[FieldOffset(Offset = "0x20")]
	private LeaseState _currentState;

	[Token(Token = "0x4000EDD")]
	[FieldOffset(Offset = "0x28")]
	private TimeSpan _initialLeaseTime;

	[Token(Token = "0x4000EDE")]
	[FieldOffset(Offset = "0x30")]
	private TimeSpan _renewOnCallTime;

	[Token(Token = "0x4000EDF")]
	[FieldOffset(Offset = "0x38")]
	private TimeSpan _sponsorshipTimeout;

	[Token(Token = "0x4000EE0")]
	[FieldOffset(Offset = "0x40")]
	private ArrayList _sponsors;

	[Token(Token = "0x4000EE1")]
	[FieldOffset(Offset = "0x48")]
	private Queue _renewingSponsors;

	[Token(Token = "0x4000EE2")]
	[FieldOffset(Offset = "0x50")]
	private RenewalDelegate _renewalDelegate;

	[Token(Token = "0x1700035B")]
	public TimeSpan CurrentLeaseTime
	{
		[Token(Token = "0x6001D19")]
		[Address(RVA = "0x3B77370", Offset = "0x3B77370", VA = "0x3B77370", Slot = "6")]
		get
		{
			return default(TimeSpan);
		}
	}

	[Token(Token = "0x1700035C")]
	public LeaseState CurrentState
	{
		[Token(Token = "0x6001D1A")]
		[Address(RVA = "0x3B773D0", Offset = "0x3B773D0", VA = "0x3B773D0", Slot = "7")]
		get
		{
			return default(LeaseState);
		}
	}

	[Token(Token = "0x1700035D")]
	public TimeSpan RenewOnCallTime
	{
		[Token(Token = "0x6001D1C")]
		[Address(RVA = "0x3B773F0", Offset = "0x3B773F0", VA = "0x3B773F0", Slot = "8")]
		get
		{
			return default(TimeSpan);
		}
	}

	[Token(Token = "0x6001D18")]
	[Address(RVA = "0x3B771C0", Offset = "0x3B771C0", VA = "0x3B771C0")]
	public Lease()
	{
	}

	[Token(Token = "0x6001D1B")]
	[Address(RVA = "0x3B773E0", Offset = "0x3B773E0", VA = "0x3B773E0")]
	public void Activate()
	{
	}

	[Token(Token = "0x6001D1D")]
	[Address(RVA = "0x3B77400", Offset = "0x3B77400", VA = "0x3B77400", Slot = "9")]
	public TimeSpan Renew(TimeSpan renewalTime)
	{
		return default(TimeSpan);
	}

	[Token(Token = "0x6001D1E")]
	[Address(RVA = "0x3B774E0", Offset = "0x3B774E0", VA = "0x3B774E0", Slot = "10")]
	public void Unregister(ISponsor obj)
	{
	}

	[Token(Token = "0x6001D1F")]
	[Address(RVA = "0x3B77650", Offset = "0x3B77650", VA = "0x3B77650")]
	internal void UpdateState()
	{
	}

	[Token(Token = "0x6001D20")]
	[Address(RVA = "0x3B77830", Offset = "0x3B77830", VA = "0x3B77830")]
	private void CheckNextSponsor()
	{
	}

	[Token(Token = "0x6001D21")]
	[Address(RVA = "0x3B77BF0", Offset = "0x3B77BF0", VA = "0x3B77BF0")]
	private void ProcessSponsorResponse(object state, bool timedOut)
	{
	}
}
