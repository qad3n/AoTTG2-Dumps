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
		[Address(RVA = "0x4E91850", Offset = "0x4E91850", VA = "0x4E91850", Slot = "6")]
		get
		{
			return default(TimeSpan);
		}
	}

	[Token(Token = "0x1700035C")]
	public LeaseState CurrentState
	{
		[Token(Token = "0x6001D1A")]
		[Address(RVA = "0x4E918B0", Offset = "0x4E918B0", VA = "0x4E918B0", Slot = "7")]
		get
		{
			return default(LeaseState);
		}
	}

	[Token(Token = "0x1700035D")]
	public TimeSpan RenewOnCallTime
	{
		[Token(Token = "0x6001D1C")]
		[Address(RVA = "0x4E918D0", Offset = "0x4E918D0", VA = "0x4E918D0", Slot = "8")]
		get
		{
			return default(TimeSpan);
		}
	}

	[Token(Token = "0x6001D18")]
	[Address(RVA = "0x4E916A0", Offset = "0x4E916A0", VA = "0x4E916A0")]
	public Lease()
	{
	}

	[Token(Token = "0x6001D1B")]
	[Address(RVA = "0x4E918C0", Offset = "0x4E918C0", VA = "0x4E918C0")]
	public void Activate()
	{
	}

	[Token(Token = "0x6001D1D")]
	[Address(RVA = "0x4E918E0", Offset = "0x4E918E0", VA = "0x4E918E0", Slot = "9")]
	public TimeSpan Renew(TimeSpan renewalTime)
	{
		return default(TimeSpan);
	}

	[Token(Token = "0x6001D1E")]
	[Address(RVA = "0x4E919C0", Offset = "0x4E919C0", VA = "0x4E919C0", Slot = "10")]
	public void Unregister(ISponsor obj)
	{
	}

	[Token(Token = "0x6001D1F")]
	[Address(RVA = "0x4E91B30", Offset = "0x4E91B30", VA = "0x4E91B30")]
	internal void UpdateState()
	{
	}

	[Token(Token = "0x6001D20")]
	[Address(RVA = "0x4E91D10", Offset = "0x4E91D10", VA = "0x4E91D10")]
	private void CheckNextSponsor()
	{
	}

	[Token(Token = "0x6001D21")]
	[Address(RVA = "0x4E920D0", Offset = "0x4E920D0", VA = "0x4E920D0")]
	private void ProcessSponsorResponse(object state, bool timedOut)
	{
	}
}
