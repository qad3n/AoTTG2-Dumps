// ==================== AoTTG2 cross-reference ====================
// Type: System.Runtime.Remoting.Lifetime.LifetimeServices
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Runtime.InteropServices;
using Il2CppDummyDll;

namespace System.Runtime.Remoting.Lifetime;

[Token(Token = "0x2000395")]
[ComVisible(true)]
public sealed class LifetimeServices
{
	[Token(Token = "0x4000EF9")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	private static TimeSpan _leaseManagerPollTime;

	[Token(Token = "0x4000EFA")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
	private static TimeSpan _leaseTime;

	[Token(Token = "0x4000EFB")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
	private static TimeSpan _renewOnCallTime;

	[Token(Token = "0x4000EFC")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
	private static TimeSpan _sponsorshipTimeout;

	[Token(Token = "0x4000EFD")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
	private static System.Runtime.Remoting.Lifetime.LeaseManager _leaseManager;

	[Token(Token = "0x17000360")]
	public static TimeSpan LeaseManagerPollTime
	{
		[Token(Token = "0x6001DA0")]
		[Address(RVA = "0x19FD030", Offset = "0x19FB630", VA = "0x1819FD030")]
		get
		{
			return default(TimeSpan);
		}
		[Token(Token = "0x6001DA1")]
		[Address(RVA = "0x19FD170", Offset = "0x19FB770", VA = "0x1819FD170")]
		set
		{
		}
	}

	[Token(Token = "0x17000361")]
	public static TimeSpan LeaseTime
	{
		[Token(Token = "0x6001DA2")]
		[Address(RVA = "0x19FD080", Offset = "0x19FB680", VA = "0x1819FD080")]
		get
		{
			return default(TimeSpan);
		}
		[Token(Token = "0x6001DA3")]
		[Address(RVA = "0x19FD1F0", Offset = "0x19FB7F0", VA = "0x1819FD1F0")]
		set
		{
		}
	}

	[Token(Token = "0x17000362")]
	public static TimeSpan RenewOnCallTime
	{
		[Token(Token = "0x6001DA4")]
		[Address(RVA = "0x19FD0D0", Offset = "0x19FB6D0", VA = "0x1819FD0D0")]
		get
		{
			return default(TimeSpan);
		}
		[Token(Token = "0x6001DA5")]
		[Address(RVA = "0x19FD250", Offset = "0x19FB850", VA = "0x1819FD250")]
		set
		{
		}
	}

	[Token(Token = "0x17000363")]
	public static TimeSpan SponsorshipTimeout
	{
		[Token(Token = "0x6001DA6")]
		[Address(RVA = "0x19FD120", Offset = "0x19FB720", VA = "0x1819FD120")]
		get
		{
			return default(TimeSpan);
		}
		[Token(Token = "0x6001DA7")]
		[Address(RVA = "0x19FD2B0", Offset = "0x19FB8B0", VA = "0x1819FD2B0")]
		set
		{
		}
	}

	[Token(Token = "0x6001D9F")]
	[Address(RVA = "0x19FCEC0", Offset = "0x19FB4C0", VA = "0x1819FCEC0")]
	static LifetimeServices()
	{
	}

	[Token(Token = "0x6001DA8")]
	[Address(RVA = "0x19FCE50", Offset = "0x19FB450", VA = "0x1819FCE50")]
	internal static void TrackLifetime(System.Runtime.Remoting.ServerIdentity identity)
	{
	}
}
