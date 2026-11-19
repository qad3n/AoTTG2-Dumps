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

[Token(Token = "0x2000369")]
internal class Lease : MarshalByRefObject, ILease
{
	[Token(Token = "0x200036A")]
	private delegate TimeSpan RenewalDelegate(ILease lease);

	[Token(Token = "0x4000E48")]
	[FieldOffset(Offset = "0x18")]
	private DateTime _leaseExpireTime;

	[Token(Token = "0x4000E49")]
	[FieldOffset(Offset = "0x20")]
	private LeaseState _currentState;

	[Token(Token = "0x4000E4A")]
	[FieldOffset(Offset = "0x28")]
	private TimeSpan _initialLeaseTime;

	[Token(Token = "0x4000E4B")]
	[FieldOffset(Offset = "0x30")]
	private TimeSpan _renewOnCallTime;

	[Token(Token = "0x4000E4C")]
	[FieldOffset(Offset = "0x38")]
	private TimeSpan _sponsorshipTimeout;

	[Token(Token = "0x4000E4D")]
	[FieldOffset(Offset = "0x40")]
	private ArrayList _sponsors;

	[Token(Token = "0x4000E4E")]
	[FieldOffset(Offset = "0x48")]
	private Queue _renewingSponsors;

	[Token(Token = "0x4000E4F")]
	[FieldOffset(Offset = "0x50")]
	private RenewalDelegate _renewalDelegate;

	[Token(Token = "0x1700035C")]
	public TimeSpan CurrentLeaseTime
	{
		[Token(Token = "0x6001D5E")]
		[Address(RVA = "0x537FBA0", Offset = "0x537EBA0", VA = "0x537FBA0", Slot = "6")]
		get
		{
			return default(TimeSpan);
		}
	}

	[Token(Token = "0x1700035D")]
	public LeaseState CurrentState
	{
		[Token(Token = "0x6001D5F")]
		[Address(RVA = "0x537FC00", Offset = "0x537EC00", VA = "0x537FC00", Slot = "7")]
		get
		{
			return default(LeaseState);
		}
	}

	[Token(Token = "0x1700035E")]
	public TimeSpan RenewOnCallTime
	{
		[Token(Token = "0x6001D61")]
		[Address(RVA = "0x537FC20", Offset = "0x537EC20", VA = "0x537FC20", Slot = "8")]
		get
		{
			return default(TimeSpan);
		}
	}

	[Token(Token = "0x6001D5D")]
	[Address(RVA = "0x537F9F0", Offset = "0x537E9F0", VA = "0x537F9F0")]
	public Lease()
	{
	}

	[Token(Token = "0x6001D60")]
	[Address(RVA = "0x537FC10", Offset = "0x537EC10", VA = "0x537FC10")]
	public void Activate()
	{
	}

	[Token(Token = "0x6001D62")]
	[Address(RVA = "0x537FC30", Offset = "0x537EC30", VA = "0x537FC30", Slot = "9")]
	public TimeSpan Renew(TimeSpan renewalTime)
	{
		return default(TimeSpan);
	}

	[Token(Token = "0x6001D63")]
	[Address(RVA = "0x537FD10", Offset = "0x537ED10", VA = "0x537FD10", Slot = "10")]
	public void Unregister(ISponsor obj)
	{
	}

	[Token(Token = "0x6001D64")]
	[Address(RVA = "0x537FE40", Offset = "0x537EE40", VA = "0x537FE40")]
	internal void UpdateState()
	{
	}

	[Token(Token = "0x6001D65")]
	[Address(RVA = "0x5380010", Offset = "0x537F010", VA = "0x5380010")]
	private void CheckNextSponsor()
	{
	}

	[Token(Token = "0x6001D66")]
	[Address(RVA = "0x53803D0", Offset = "0x537F3D0", VA = "0x53803D0")]
	private void ProcessSponsorResponse(object state, bool timedOut)
	{
	}
}
