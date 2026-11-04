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

[Token(Token = "0x2000390")]
internal class Lease : MarshalByRefObject, ILease
{
	[Token(Token = "0x2000391")]
	private delegate TimeSpan RenewalDelegate(ILease lease);

	[Token(Token = "0x4000EE8")]
	[FieldOffset(Offset = "0x18")]
	private DateTime _leaseExpireTime;

	[Token(Token = "0x4000EE9")]
	[FieldOffset(Offset = "0x20")]
	private LeaseState _currentState;

	[Token(Token = "0x4000EEA")]
	[FieldOffset(Offset = "0x28")]
	private TimeSpan _initialLeaseTime;

	[Token(Token = "0x4000EEB")]
	[FieldOffset(Offset = "0x30")]
	private TimeSpan _renewOnCallTime;

	[Token(Token = "0x4000EEC")]
	[FieldOffset(Offset = "0x38")]
	private TimeSpan _sponsorshipTimeout;

	[Token(Token = "0x4000EED")]
	[FieldOffset(Offset = "0x40")]
	private ArrayList _sponsors;

	[Token(Token = "0x4000EEE")]
	[FieldOffset(Offset = "0x48")]
	private Queue _renewingSponsors;

	[Token(Token = "0x4000EEF")]
	[FieldOffset(Offset = "0x50")]
	private RenewalDelegate _renewalDelegate;

	[Token(Token = "0x1700035D")]
	public TimeSpan CurrentLeaseTime
	{
		[Token(Token = "0x6001D88")]
		[Address(RVA = "0x19FCDF0", Offset = "0x19FB3F0", VA = "0x1819FCDF0", Slot = "6")]
		get
		{
			return default(TimeSpan);
		}
	}

	[Token(Token = "0x1700035E")]
	public LeaseState CurrentState
	{
		[Token(Token = "0x6001D89")]
		[Address(RVA = "0xA4C170", Offset = "0xA4A770", VA = "0x180A4C170", Slot = "7")]
		get
		{
			return default(LeaseState);
		}
	}

	[Token(Token = "0x1700035F")]
	public TimeSpan RenewOnCallTime
	{
		[Token(Token = "0x6001D8B")]
		[Address(RVA = "0x5853F0", Offset = "0x5839F0", VA = "0x1805853F0", Slot = "8")]
		get
		{
			return default(TimeSpan);
		}
	}

	[Token(Token = "0x6001D87")]
	[Address(RVA = "0x19FCC80", Offset = "0x19FB280", VA = "0x1819FCC80")]
	public Lease()
	{
	}

	[Token(Token = "0x6001D8A")]
	[Address(RVA = "0x19FBFD0", Offset = "0x19FA5D0", VA = "0x1819FBFD0")]
	public void Activate()
	{
	}

	[Token(Token = "0x6001D8C")]
	[Address(RVA = "0x19FC8B0", Offset = "0x19FAEB0", VA = "0x1819FC8B0", Slot = "9")]
	public TimeSpan Renew(TimeSpan renewalTime)
	{
		return default(TimeSpan);
	}

	[Token(Token = "0x6001D8D")]
	[Address(RVA = "0x19FC980", Offset = "0x19FAF80", VA = "0x1819FC980", Slot = "10")]
	public void Unregister(ISponsor obj)
	{
	}

	[Token(Token = "0x6001D8E")]
	[Address(RVA = "0x19FCAD0", Offset = "0x19FB0D0", VA = "0x1819FCAD0")]
	internal void UpdateState()
	{
	}

	[Token(Token = "0x6001D8F")]
	[Address(RVA = "0x19FBFE0", Offset = "0x19FA5E0", VA = "0x1819FBFE0")]
	private void CheckNextSponsor()
	{
	}

	[Token(Token = "0x6001D90")]
	[Address(RVA = "0x19FC340", Offset = "0x19FA940", VA = "0x1819FC340")]
	private void ProcessSponsorResponse(object state, bool timedOut)
	{
	}
}
